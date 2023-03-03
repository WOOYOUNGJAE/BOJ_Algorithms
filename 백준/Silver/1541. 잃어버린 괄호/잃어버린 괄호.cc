#include <iostream>                               
#include <string>

using namespace std;

int main()
{
    string strInput;
    cin >> strInput;


    string num = "";

    bool bCountingPlus = true;
    int answer = 0;
    int iNums = 0;
    int plus = 1;
    
    int i = 0;
    while (true)
    {
        if (strInput[i] == '\0')
        {
            plus = bCountingPlus? 1 : -1;
            iNums += stoi(num) * plus;
            answer += iNums;

            cout << answer;
            return 0;
        }

        if (strInput[i] == '+')
        {
            plus = bCountingPlus? 1 : -1;
            iNums += stoi(num) * plus;

            num = "";
            ++i;
            continue;
        }
        else if (strInput[i] == '-')
        {
            plus = bCountingPlus? 1 : -1;
            iNums += stoi(num) * plus;
            answer += iNums;

            bCountingPlus = false;
            num = "";
            iNums = 0;
            ++i;
            continue;
        }

        // 숫자 읽기
        num += strInput[i];
        ++i;
    }
    
    return 0;
}