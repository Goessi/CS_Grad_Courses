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
	
	vector<int>::iterator v1, v2;
	for (v1 = numV1.begin(), v2 = numV2.begin();v1 != numV1.end() && v2 != numV2.end();++v1, ++v2)
	{
		if (*v1 != *v2)
		{
			cout << "noe equal"<<endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 1;
}

