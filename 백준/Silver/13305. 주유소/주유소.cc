#include <iostream>
#include <vector>
#define START_CITY 0
using namespace std;

bool IsMoreExpensive(int _iCurrentPrice, int _iPointingPrice)
{
    return _iCurrentPrice > _iPointingPrice;
}

int main(int argc, char const *argv[])
{
    int N = 0;
    cin >> N;

    vector<int> vecLength;
    vector<int> vecPrice;

    for (int i = 0; i < N - 1; ++i)
    {
        int iTmpLength = 0;
        cin >> iTmpLength;
        vecLength.push_back(iTmpLength);
    }
    for (int i = 0; i < N; ++i)
    {
        int iTmpPrice = 0;
        cin >> iTmpPrice;
        vecPrice.push_back(iTmpPrice);
    }

    // 더 싼거 나올 때 까지 
    int iTotalPrice = 0;    
    int iPointingCity = START_CITY;
    int iCurrentPrice = vecPrice[START_CITY];
    while (true)
    {
        if(iPointingCity == N - 1)
        {
            cout << iTotalPrice;
            return 0;
        }
        iTotalPrice += iCurrentPrice * vecLength[iPointingCity++];

        if (IsMoreExpensive(iCurrentPrice, vecPrice[iPointingCity])) // 돈 업데이트 해야 하면
        {
            iCurrentPrice = vecPrice[iPointingCity];
        }
    }    
    return 0;
}

