#include <iostream>

using namespace std;

int multiply(int num1, int num2, int num3);

int main()
{

    int Result = multiply(2, 5, 6);

    cout<<"The solution is "<<Result<<endl;

    return 0;
}

int multiply(int num1, int num2, int num3)
{
    return num1 * num2 * num3;
}
