#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> myNames;
    string names;
    vector<int> myWeights;
    int weights;

    for(int i = 0; i < 5; i++)
    {
        cout<<"Please enter a person's full name"<<endl;
        getline(cin, names);
        cout<<"Please enter "<<names<<"'s weight."<<endl;
        cin>>weights;
        myNames.push_back(names);
        myWeights.push_back(weights);
        cin.get();
    }

    for (int i = 0; i < myNames.size(); i++)
    {
        cout<<myNames[i]<<" weighs "<<myWeights[i]<<" kgs"<<endl;
    }


    return 0;
}