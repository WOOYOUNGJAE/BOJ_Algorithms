#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;

	vector<int> vecLope;
	vecLope.reserve(N);

	for(int i = 0; i < N; ++i)
	{
		int iTmpLope = 0;
		cin >> iTmpLope;
		vecLope.push_back(iTmpLope);
	}

	sort(vecLope.begin(), vecLope.end());
	
	// 최소 기준 index 

	int iMax = 0;
	for (int i = 0; i < N; ++i)
	{
		int iTmp = vecLope[i] * (N - i);
		if (iTmp > iMax)
		{
			iMax = iTmp;
		}
	}
	cout << iMax;


	return 0;
}