#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

bool Desc(int a, int b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    // N
    int N;
    cin >> N;

    vector<int> vecA;
    vector<int> vecB;

    for (int i = 0; i < N; ++i)
    {
        int iTmp = 0;
        cin >> iTmp;
        vecA.push_back(iTmp);
    }

    for (int i = 0; i < N; ++i)
    {
        int iTmp = 0;
        cin >> iTmp;
        vecB.push_back(iTmp);
    }

    vector<int> vecB_;
    vecB_ = vecB;

    sort(vecA.begin(), vecA.end());
    sort(vecB.begin(), vecB.end(), Desc);

    int answer = 0;
    for (size_t i = 0; i < N; i++)
    {
        answer += (vecA[i] * vecB[i]);
    }

    cout << answer;
    


    return 0;
}
