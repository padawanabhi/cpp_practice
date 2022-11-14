#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> myVector;

    myVector.push_back("Abhi Shake");
    myVector.push_back("Penny Lane");
    myVector.push_back("Mara Bubu");
    myVector.push_back("Suzy Nater");
    myVector.push_back("Chuck Luck");

    for (auto name : myVector)
    {
        cout<<name<<endl;
    }

    myVector.insert(myVector.begin() + 2, "John Baugh");

    myVector.pop_back();

    for (auto name : myVector)
    {

        cout<<name<<endl;
    }

    return 0;
}
