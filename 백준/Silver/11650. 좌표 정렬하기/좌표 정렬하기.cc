#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Sort_Compare(pair<int, int> _a, pair<int, int> _b)
{
	if (_a.first != _b.first)
		return _a.first < _b.first;
	else
		return _a.second < _b.second;
}

int main()
{
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	vector<pair<int, int>> vecPair;
	vecPair.reserve(N);

	for (int i = 0; i < N; ++i)
	{
		pair<int, int> prTmp;
		cin >> prTmp.first; // x
		cin >> prTmp.second; // y
		vecPair.push_back(prTmp);
	}
	sort(vecPair.begin(), vecPair.end(), Sort_Compare);

	for (int i = 0; i< N; ++i)
	{
		printf("%d %d\n",vecPair[i].first,vecPair[i].second);
		// cout << vecPair[i].first << " " << vecPair[i].second << endl;
	}



	return 0;
}
