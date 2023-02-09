#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Sort_Compare(pair<int, int> _pair0, pair<int, int> _pair1)
{
	return _pair0.second > _pair1.second;
}

int main()
{
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


	pair<int, int> pr_Idx_Scr_Arr[8];
	int iTotal = 0;

	for (int i = 0; i < 8; ++i)
	{
		pr_Idx_Scr_Arr[i].first = i + 1; // 몇 번째 문제
		cin >> pr_Idx_Scr_Arr[i].second; // 점수
	}

	sort(pr_Idx_Scr_Arr, pr_Idx_Scr_Arr + 8, Sort_Compare);

	int iIndxArr[5] = {};
	for (int i = 0; i < 5; ++i)
	{
		iTotal += pr_Idx_Scr_Arr[i].second;
		iIndxArr[i] = pr_Idx_Scr_Arr[i].first;
	}
	cout << iTotal << endl;
	
	sort(iIndxArr, iIndxArr + 5);

	for (int i = 0; i < 5; ++i)
	{
		cout << iIndxArr[i] << " "; // 점수
	}


	return 0;
}
