#include <iostream>
#include <array>

using namespace std;


int main()
{
    array<int, 5> arrayOfInt{};

    for (int i = 0; i < arrayOfInt.size(); i++)
    {
        cout<<"Enter an integer"<<endl;
        cin>>arrayOfInt[i];
    }


    cout<<"Now here are double the amounts: "<<endl;

    for (auto num : arrayOfInt)
    {
        cout<<(num * 2)<<endl;
    }



    return 0;
}