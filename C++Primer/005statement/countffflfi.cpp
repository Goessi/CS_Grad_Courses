#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	unsigned int ffcnt = 0, flcnt = 0, ficnt = 0;
	char haha;
	cout << "Please enter a text" << endl;
	char prech = '\0';

	while (cin >> haha)
	{
		bool tf = false;
		if (prech = 'f') {
			switch (haha) {
				case 'f':
					++ffcnt;
					tf = true;
					break;
				case 'l':
					++flcnt;
					break;
				case 'i':
					++ficnt;
					break;
				}
		}

		if (!tf)
			prech = '\0';
		else
			prech = haha;

	}

	cout << "ff, fl, fi" << ffcnt << flcnt << ficnt << endl;

	return 0;
}
