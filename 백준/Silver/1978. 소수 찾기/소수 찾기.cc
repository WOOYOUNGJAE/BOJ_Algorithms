#include <iostream>
#include <vector>

using namespace std;

bool ReturnIsSosu(int _iInput)
{
    
    if (_iInput == 0)
        return false;
    else if (_iInput == 1)
        return false;
    else if (_iInput == 2)
        return true;
    else
    {
        int iDividing = 2;
        while (true)
        {
            if ( iDividing >= _iInput ) // 결국 자기 자신까지 도달했으면 소수
            {
                return true;
            }
            else
            {
               if(_iInput % iDividing == 0)
                return false;
            }
            ++iDividing;
        }
    }
}

int main()
{
    int iAnswer = 0;
    int n = 0;
    cin >> n;

    vector<int> vecInput;

    for (int i = 0; i < n; ++i)
    {
        int iTmp = 0;
        cin >> iTmp;
        vecInput.push_back(iTmp);

        if (ReturnIsSosu(vecInput[i]) == 1)
            ++iAnswer;        
    }

    cout << iAnswer;


    return 0;
}