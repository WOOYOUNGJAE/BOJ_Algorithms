#include <iostream>

using namespace std;

int main()
{
    int* iArr = nullptr;

    int N;
    cin >> N;
    iArr = new int[N];

    int iMin = 0;
    int iMax = 0;
    
    cin >> *(iArr);

    iMin = iMax = *(iArr);
    for (int i = 1; i < N; ++i)
    {
        int iTmp = 0;
        cin >> iTmp;

        if (iTmp >= iMax)
            iMax = iTmp;
        if (iTmp <= iMin)
            iMin = iTmp;

    }

    cout << iMin << " " << iMax << endl;






    return 0;
}