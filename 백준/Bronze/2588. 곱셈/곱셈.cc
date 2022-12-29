#include <iostream>

using namespace std;

int main()
{
    int input0;
    int input1;


    cin >> input0;
    cin >> input1;

    int input1_0 = input1 / 100; //100의 자리
    int input1_1 = (input1 % 100) /10; //10
    int input1_2 = input1 - input1_0 * 100 - input1_1 * 10;

    int output0 = input0 * input1_2;
    int output1 = input0 * input1_1;
    int output2 = input0 * input1_0;
    int output3 = input0 * input1;

    cout << output0 << endl << output1<< endl << output2 << endl << output3 << endl;

    return 0;
}