#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int input;
    vector<int> myArray;
    bool isNegative = false;

    while (!isNegative)
    {
        cout<<"Enter a postive integer to add to the vector, or a negative integer to quit!"<<endl;
        cin>>input;
        myArray.push_back(input);
        if (myArray.back() < 0)
        {
            isNegative = true;
        }
    }

    cout<<"Now here are double the amounts:"<<endl;

    for (auto num : myArray)
    {
        cout<<num * 2<<endl;
    }

    return 0;
}