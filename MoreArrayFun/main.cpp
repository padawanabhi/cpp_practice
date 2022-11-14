#include <iostream>

using namespace std;

int main()
{
    int arrayArray[10];

    for(int i; i < 10; i++)
    {
        arrayArray[i] = i + 1;
    }

    for(auto num : arrayArray)
    {
        cout<<num<<endl;
    }


    return 0;
}