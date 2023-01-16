#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	// M N 사이의 완전제곱수 합, 최소값
	int M = 0, N = 0;
	cin >> M >> N; // M <= N

	int iMin = 1;
	int iSum = 0;
	int iIncreasingNum = 1;

	bool bCheckMin = false;
	while (true)
	{
		int iTest = (int)pow(iIncreasingNum, 2);
		if (M <= iTest && iTest <= N)
		{
			iSum += iTest;

			if (!bCheckMin) // 최소값 한번만 구하기
			{
				iMin = iTest;
				bCheckMin = true;
			}
		}
		else if (iTest > N)
		{
			if (!bCheckMin)
			{
				cout << -1;
				return 0;
			}
			break;
		}

		++iIncreasingNum;
	}
	cout << iSum << endl << iMin << endl;

	return 0;
}