#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int correctArr[6] = {1, 1, 2, 2, 2, 8};

    int inputArr[6];

    for (int i = 0; i < 6; ++i)
    {
        cin >> inputArr[i];
    }
    for (int i = 0; i < 6; ++i)
    {
        cout << correctArr[i] - inputArr[i] << " ";
    }
    
     


    return 0;
}