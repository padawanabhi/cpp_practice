#include <iostream>

using namespace std;

void threeTimesN(int num1, int& num2);


int main()
{
    int result = 0;

    cout<<"Value before result: "<<result<<endl;
    threeTimesN(10, result);
    cout<<"Value after result: "<<result<<endl;

    return 0;
}

void threeTimesN(int num1, int& num2)
{
    num2 = num1 * 3;
}