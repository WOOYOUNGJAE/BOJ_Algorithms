#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;


int iMaxNameLength = 20;

void TestCase()
{
	int p = 0; // num of players
	cin >> p;

	// 메모리 할당
	int* iPtrPriceArr = nullptr;
	char** cPtrNameArr = nullptr;

	iPtrPriceArr = (int*)malloc(sizeof(int) * p);
	cPtrNameArr = (char**)malloc(sizeof(char*) * p);
	for (int i = 0; i < p; ++i)
	{
		cPtrNameArr[i] = (char*)malloc(sizeof(char) * iMaxNameLength); // 이름 그 자체

	}


	int iCurrentHighest = 0;
	int iFlag = 0;
	for (int i = 0; i < p; ++i)
	{
		// 입력 받기
		cin >> iPtrPriceArr[i] >> (cPtrNameArr[i]); // *cPtrNameArr[i] 가 아님!!!!! 이건 스트링의 첫 글자
		//cout << iPtrPriceArr[i] << " / " << *cPtrNameArr[i] << endl; // deb


		if (iPtrPriceArr[i] > iCurrentHighest)
		{
			iFlag = i;
			iCurrentHighest = iPtrPriceArr[iFlag];
		}
	}

	cout << cPtrNameArr[iFlag] << endl;

	free(iPtrPriceArr);
	free(cPtrNameArr);

}

int main()
{
	int n = 0; // test case
	cin >> n;



	for (int i = 0; i < n; ++i)
	{
		TestCase();
	}
	return 0;
}