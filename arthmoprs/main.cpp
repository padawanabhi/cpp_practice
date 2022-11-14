#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quotient = a / b;
    int remainder = a % b;
    int result = 10;
    int myInt = 5;
    result += 15; // result = result + 15


    cout<<"Sum = "<<sum<<endl;
    cout<<"Difference = "<<diff<<endl;
    cout<<"Product = "<<prod<<endl;
    cout<<"Qoutient = "<<quotient<<endl;
    cout<<"Remainder = "<<remainder<<endl;
    cout<<"Result = "<<result<<endl;

    cout<<myInt<<endl;
    myInt++;
    cout<<myInt<<endl;
    return 0;
}