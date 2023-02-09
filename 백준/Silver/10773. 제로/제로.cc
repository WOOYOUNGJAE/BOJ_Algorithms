#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int K = 0;
	cin >> K;

	vector<int> vecInputs;
	vecInputs.reserve(K);

	int iAnswer = 0;
	for (int i = 0; i < K; ++i)
	{
		int iTmp;
		cin >> iTmp;
		if (iTmp !=0 )
			vecInputs.push_back(iTmp);
		else if (vecInputs.back() != 0) // 지우기 명령이 들어갔고 마지막 숫자가 0이 아니면(뭔가 있으면)
		{
			vecInputs.pop_back();
		}

	}
	vector<int>::iterator iter = vecInputs.begin();
	while (iter != vecInputs.end())
	{
		iAnswer += *iter;

		++iter;
	}

	cout << iAnswer;



	return 0;
}
