#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int anum, bnum;
	vector<int> numV1, numV2;
	cout << "Please enter numbers in first vector, ended by -1" << endl;
	while (cin >> anum && anum != -1)
	{
		numV1.push_back(anum);
	}

	cout <<"Please enter numbers in second vector, ended by -1" << endl;
	while (cin >> bnum && bnum != -1)
	{
		numV2.push_back(bnum);
	}

	for (vector<int>::iterator v1 = numV1.begin(); v1 != numV1.end(); ++v1)
		cout << *v1;
	cout << endl;

	for (vector<int>::iterator v2 = numV2.begin(); v2 != numV2.end(); ++v2)
		cout << *v2;
	cout << endl;
	
	auto v1_size = numV1.size();
	auto v2_size = numV2.size();

	if (v1_size >= v2_size)
	{
		for (vector<int>::iterator vs2 = numV2.begin(); vs2 != numV2.end(); ++vs2)
		{
			for (vector<int>::iterator vs1 = numV1.begin(); vs1 !=numV1.end(); ++vs1)
			{
				if (*vs2 != *vs1)
				{
					cout << " not equal" << endl;
					break;
				}
			}
		}
	}
	else
	{
		for (vector<int>::iterator vs1 = numV1.begin(); vs1 != numV1.end(); ++vs1)
		{
			for (vector<int>::iterator vs2 = numV2.begin(); vs2 != numV2.end(); ++vs2)
			{
				if(*vs2 != *vs2)
				{
					cout << "not equal" << endl;
					break;
				}
			}
		}
	}



	return 0;
}

