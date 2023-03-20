#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main(int argc, char const *argv[])
{
    string strInput = "";
    cin >> strInput;

    vector<char> vecNumChar;

    int i = 0;
    int iFiguresTotal = 0;
    while (strInput[i] != '\0')
    {
        char cTmp = strInput[i];
        iFiguresTotal += cTmp - '0';
        vecNumChar.push_back(strInput[i++]);
    }



    sort(vecNumChar.begin(), vecNumChar.end(), greater<char>());

    if (iFiguresTotal % 3 != 0)
    {
        cout << -1;
        return 0;
    }

    if (vecNumChar[vecNumChar.size() - 1] != '0')
    {
        cout << -1;
        return 0;
    }

    for(auto iter = vecNumChar.begin(); iter != vecNumChar.end(); ++iter)
    {
        cout << *iter;
    }

    return 0;
}
