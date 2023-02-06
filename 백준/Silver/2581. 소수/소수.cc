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
    int M = 0, N = 0;

    cin >> M; cin >> N;
    int iMin = 0;
    int iTotal = 0;
    for (int iFlag = M; iFlag <= N; ++iFlag)
    {
        if (ReturnIsSosu(iFlag) == true)
        {
            iTotal += iFlag;
            if (iMin == 0)
                iMin = iFlag;
        }
    }

    if (iTotal == 0)
        cout << -1;
    else
    {
        cout << iTotal << endl;
        cout << iMin;
    }

    return 0;
}