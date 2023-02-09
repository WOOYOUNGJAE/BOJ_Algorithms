#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Sort_Compare(int a, int b)
{
	return a > b;
}

int main()
{
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int iNum = 0;
	cin >> iNum;

	vector<int> vecNums;

	while (true)
	{
		if (iNum <= 0)
			break;

		vecNums.push_back(iNum % 10);

		iNum /= 10;
	}

	sort(vecNums.begin(), vecNums.end(), Sort_Compare);

	vector<int>::iterator iter;
	iter = vecNums.begin();
	while (iter != vecNums.end())
	{
		cout << *iter;
		++iter;
	}




	return 0;
}
