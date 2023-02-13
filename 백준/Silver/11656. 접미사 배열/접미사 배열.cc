#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

// 어차피 앞에서부터 짧은 순, sz0가 더 짧을 수 밖에
 bool Sort_Compare(string s0, string s1)
 {
	 return s0 < s1;
 }

int main()
{
	string S = "";
	cin >> S;
	int iLength = S.size();	// 문자열 길이

	 vector<string> vecString;

	for (int i = iLength - 1; i >= 0; --i) // 문자열 끝 글자부터 첫 글자 까지
	{
		string strTmp = "";
		strTmp = S.substr(i);
		vecString.push_back(strTmp);
		//cout << strTmp << endl;
	}

	sort(vecString.begin(), vecString.end(), Sort_Compare);


	vector<string>::iterator iter = vecString.begin();

	 while (iter != vecString.end())
	 {
	 	cout << *iter << endl;

	 	++iter;
	 }



	return 0;
}