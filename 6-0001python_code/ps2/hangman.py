 # Problem Set 2, hangman.py
# Name: Jing QIN
# Collaborators:
# Time spent:

# Hangman Game
# -----------------------------------
# Helper code
# You don't need to understand this helper code,
# but you will have to know how to use the functions
# (so be sure to read the docstrings!)
import random
import string

WORDLIST_FILENAME = "words.txt"


def load_words():
    """
    Returns a list of valid words. Words are strings of lowercase letters.
    
    Depending on the size of the word list, this function may
    take a while to finish.
    """
    print("Loading word list from file...")
    # inFile: file
    inFile = open(WORDLIST_FILENAME, 'r')
    # line: string
    line = inFile.readline()
    # wordlist: list of strings
    wordlist = line.split()
    print("  ", len(wordlist), "words loaded.")
    return wordlist



def choose_word(wordlist):
    """
    wordlist (list): list of words (strings)
    
    Returns a word from wordlist at random
    """
    return random.choice(wordlist)

# end of helper code

# -----------------------------------

# Load the list of words into the variable wordlist
# so that it can be accessed from anywhere in the program
wordlist = load_words()


def is_word_guessed(secret_word, letters_guessed):
    '''
    secret_word: string, the word the user is guessing; assumes all letters are
      lowercase
    letters_guessed: list (of letters), which letters have been guessed so far;
      assumes that all letters are lowercase
    returns: boolean, True if all the letters of secret_word are in letters_guessed;
      False otherwise
    '''
    num = 0
    for char in secret_word:
        if char in letters_guessed:
            num += 1
    if num == len(secret_word):
        return True
    else:
        return False

def get_guessed_word(secret_word, letters_guessed):
    '''
    secret_word: string, the word the user is guessing
    letters_guessed: list (of letters), which letters have been guessed so far
    returns: string, comprised of letters, underscores (_), and spaces that represents
      which letters in secret_word have been guessed so far.
    '''
    a_string = ''
    for char in secret_word:
        if char in letters_guessed:
            a_string += char
        else:
            a_string += ' _ '
    return a_string

def get_guessed_w(secret_word, letters_guessed):
    '''
    secret_word: string, the word the user is guessing
    letters_guessed: list (of letters), which letters have been guessed so far
    returns: string, comprised of letters, underscores (_), and spaces that represents
      which letters in secret_word have been guessed so far.
    '''
    a_string = ''
    for char in secret_word:
        if char in letters_guessed:
            a_string += char
        else:
            a_string += '_'
    return a_string

def get_available_letters(letters_guessed):
    '''
    letters_guessed: list (of letters), which letters have been guessed so far
    returns: string (of letters), comprised of letters that represents which letters have not
      yet been guessed.
    '''
    alpha = string.ascii_lowercase
    new_alpha = ''
    for char in alpha:
        if char not in letters_guessed:
            new_alpha += char
    return new_alpha
            
    
    

def hangman(secret_word):
    '''
    secret_word: string, the secret word to guess.
    
    Starts up an interactive game of Hangman.
    
    * At the start of the game, let the user know how many 
      letters the secret_word contains and how many guesses s/he starts with.
      
    * The user should start with 6 guesses

    * Before each round, you should display to the user how many guesses
      s/he has left and the letters that the user has not yet guessed.
    
    * Ask the user to supply one guess per round. Remember to make
      sure that the user puts in a letter!
    
    * The user should receive feedback immediately after each guess 
      about whether their guess appears in the computer's word.

    * After each guess, you should display to the user the 
      partially guessed word so far.
    
    Follows the other limitations detailed in the problem write-up.
    '''
    print("Welcome to the game Hangman!")
    print("I am thinking of a word that is " + str(len(secret_word)) + " letters long.")
    print("-----------------------")
    
    num_guesses = 6
    num_warnings = 3
    letters_guessed = ''
    
    while(not is_word_guessed(secret_word, letters_guessed) and num_guesses>0):
        print("You have " + str(num_warnings) + " warnings left")
        print("You have " + str(num_guesses) + " guesses left")
        print("Available letters: " + get_available_letters(letters_guessed))
        input_letter = input("Please guess a letter:")
        
        if (str.isalpha(input_letter) and (input_letter not in letters_guessed)):
            input_letter = str.lower(input_letter)
            letters_guessed += input_letter
            if (input_letter in secret_word):
                #letters_guessed += input_letter
                print("Good guess: " + get_guessed_word(secret_word, letters_guessed))
            else:
                if(input_letter in ['a','e','i','o','u']):
                    num_guesses = num_guesses - 2
                else:
                    num_guesses = num_guesses - 1
                print("Oops! That letter is not in my word: "+get_guessed_word(secret_word, letters_guessed))
        elif (str.isalpha(input_letter) and (input_letter in letters_guessed)):
            if (num_warnings > 0):
                num_warnings = num_warnings - 1
            else:
                num_guesses = num_guesses - 1
            print("Oops! You've already guessed that letter. You now have "+str(num_warnings)+" warnings left: "+ get_guessed_word(secret_word, letters_guessed))            
        else:
            if (num_warnings > 0):
                num_warnings = num_warnings - 1
            else:
                num_guesses = num_guesses - 1
            print("Oops! That is not a valid letter. You have "+str(num_warnings)+" warnings left: " + get_guessed_word(secret_word, letters_guessed))
        
        print("----------------------")
        
    if num_guesses == 0:
        print("You lose! The word is "+secret_word)
    
    if (is_word_guessed(secret_word, letters_guessed)):
        print("Congratulations, you won!")
        print("Your total score for this game is: "+str(num_guesses*len(set(secret_word))))
        
        
# -----------------------------------

def match_with_gaps(my_word, other_word):
    '''
    my_word: string with _ characters, current guess of secret word
    other_word: string, regular English word
    returns: boolean, True if all the actual letters of my_word match the 
        corresponding letters of other_word, or the letter is the special symbol
        _ , and my_word and other_word are of the same length;
        False otherwise: 
    '''
    my_word = list(my_word)
    other_word = list(other_word)
    if len(my_word) == len(other_word):
        for i in range(len(my_word)):
            if my_word[i] == other_word[i] or my_word[i] == '_':
                continue
            else:
                return False
    else:
        return False
    return True


def show_possible_matches(my_word):
    '''
    my_word: string with _ characters, current guess of secret word
    returns: nothing, but should print out every word in wordlist that matches my_word
             Keep in mind that in hangman when a letter is guessed, all the positions
             at which that letter occurs in the secret word are revealed.
             Therefore, the hidden letter(_ ) cannot be one of the letters in the word
             that has already been revealed.

    '''
    words = []
    for i in range(len(wordlist)):
        if match_with_gaps(my_word, wordlist[i]):
            words.append(wordlist[i])
    if len(words) == 0:
        print("No matches found")
    else:
        for word in words:
            print(word,end=' ')


def hangman_with_hints(secret_word):
    '''
    secret_word: string, the secret word to guess.
    
    Starts up an interactive game of Hangman.
    
    * At the start of the game, let the user know how many 
      letters the secret_word contains and how many guesses s/he starts with.
      
    * The user should start with 6 guesses
    
    * Before each round, you should display to the user how many guesses
      s/he has left and the letters that the user has not yet guessed.
    
    * Ask the user to supply one guess per round. Make sure to check that the user guesses a letter
      
    * The user should receive feedback immediately after each guess 
      about whether their guess appears in the computer's word.

    * After each guess, you should display to the user the 
      partially guessed word so far.
      
    * If the guess is the symbol *, print out all words in wordlist that
      matches the current guessed word. 
    
    Follows the other limitations detailed in the problem write-up.
    '''
    print("Welcome to the game Hangman!")
    print("I am thinking of a word that is " + str(len(secret_word)) + " letters long.")
    print("-----------------------")
    
    num_guesses = 6
    num_warnings = 3
    letters_guessed = ''
    
    while(not is_word_guessed(secret_word, letters_guessed) and num_guesses>0):
        print("You have " + str(num_warnings) + " warnings left")
        print("You have " + str(num_guesses) + " guesses left")
        print("Available letters: " + get_available_letters(letters_guessed))
        input_letter = input("Please guess a letter:")
        
        if (str.isalpha(input_letter) and (input_letter not in letters_guessed)):
            input_letter = str.lower(input_letter)
            letters_guessed += input_letter
            if (input_letter in secret_word):
                #letters_guessed += input_letter
                print("Good guess: " + get_guessed_word(secret_word, letters_guessed))
            else:
                if(input_letter in ['a','e','i','o','u']):
                    num_guesses = num_guesses - 2
                else:
                    num_guesses = num_guesses - 1
                print("Oops! That letter is not in my word: "+get_guessed_word(secret_word, letters_guessed))
        elif (str.isalpha(input_letter) and (input_letter in letters_guessed)):
            if (num_warnings > 0):
                num_warnings = num_warnings - 1
            else:
                num_guesses = num_guesses - 1
            print("Oops! You've already guessed that letter. You now have "+str(num_warnings)+" warnings left: "+ get_guessed_word(secret_word, letters_guessed))
        elif (input_letter == '*'):
            print("Possible word matches are: ",end='')
            show_possible_matches(get_guessed_w(secret_word, letters_guessed))
        else:
            if (num_warnings > 0):
                num_warnings = num_warnings - 1
            else:
                num_guesses = num_guesses - 1
            print("Oops! That is not a valid letter. You have "+str(num_warnings)+" warnings left: " + get_guessed_word(secret_word, letters_guessed))
        
        print("----------------------")
        
    if num_guesses == 0:
        print("You lose! The word is "+secret_word)
    
    if (is_word_guessed(secret_word, letters_guessed)):
        print("Congratulations, you won!")
        print("Your total score for this game is: "+str(num_guesses*len(set(secret_word))))



# When you've completed your hangman_with_hint function, comment the two similar
# lines above that were used to run the hangman function, and then uncomment
# these two lines and run this file to test!
# Hint: You might want to pick your own secret_word while you're testing.


if __name__ == "__main__":
    # pass

    # To test part 2, comment out the pass line above and
    # uncomment the following two lines.
    
    #secret_word = choose_word(wordlist)
    #hangman("egge")
    #match_with_gaps('a_','ad')
    #show_possible_matches('a_pl_')



###############
    
    # To test part 3 re-comment out the above lines and 
    # uncomment the following two lines. 
    
    secret_word = choose_word(wordlist)
    hangman_with_hints('apple')