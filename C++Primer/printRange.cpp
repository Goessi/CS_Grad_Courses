#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;
	std::cout << "Please enter two numbers" << std::endl;
	std::cin >> v1 >> v2;
        int i, j;
	if ( v1 <= v2) {
	        i = v1;
		j = v2;
	}
	else {
		i = v2;
		j = v1;
	}
        
	while ( i <= j) {
		std::cout << i << std::endl;
	        ++i;
	}
        return 0;
}	
