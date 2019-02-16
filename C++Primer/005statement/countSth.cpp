#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	unsigned int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
	unsigned int spacecnt = 0, tabcnt = 0, newlinecnt = 0;

	char haha;
	cout << "Please enter something" << endl;

	while (cin.get(haha)) {
		switch (haha) {
			case 'a':
			case 'A':
				++acnt;
				break;
			case 'e':
			case 'E':
				++ecnt;
				break;
			case 'i':
			case 'I':
				++icnt;
				break;
			case 'o':
			case 'O':
				++ocnt;
				break;
			case 'u':
			case 'U':
				++ucnt;
				break;
			case ' ':
				++spacecnt;
				break;
			case '\t':
				++tabcnt;
				break;
			case '\n':
				++newlinecnt;
				break;
		}
	}

	cout << "the number of a" << acnt << endl;
	cout << "the number of e" << ecnt << endl;
	cout << "the number of i" << icnt << endl;
	cout << "the number of o" << ocnt << endl;
	cout << "the number of u" << ucnt << endl;
	cout << "the number of space" << spacecnt << endl;
	cout << "the number of tab" << tabcnt << endl;
	cout << "the number of newline" << newlinecnt << endl;

	return 0;
}
