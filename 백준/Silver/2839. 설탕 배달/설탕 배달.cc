#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // 3, 5
    int N = 0;
    cin >> N;
    for (int i = 0; i * 3 <= N; ++i)
    {        
        for (int j = 0; j * 5 <= N; ++j)
        {
            int iCurrentWage = i * 3 + j * 5;
            if ( iCurrentWage > N)
                break;
            else if (iCurrentWage == N)
            {
                cout << i + j;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}
