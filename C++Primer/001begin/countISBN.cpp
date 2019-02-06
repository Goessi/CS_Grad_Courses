#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item book, currBook;
	int cnt;

	if (std::cin >> currBook) {
		cnt = 1;
		while(std::cin >> book) {
			if (book == currBook) {
				cnt += 1;
			}
			else
			{
				std::cout << currBook << " has "
				       	<< cnt << " sales number"<< std::endl;
				currBook = book;
			        cnt = 1;
			}
        	}
		std::cout << currBook << " has "
		       	<< cnt << " sales number"<< std::endl;
		}
	return 0;
}

