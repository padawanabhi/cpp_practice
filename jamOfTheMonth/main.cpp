#include <iostream>

using namespace std;


int main()
{
    char package;
    int jarsBought;
    int jarCost;

    cout<<"What package do you own? A, B, or C?"<<endl;
    cin>>package;
    cout<<"How many jams, jellies, or preserves did you purchase this month?"<<endl;
    cin>>jarsBought;

    switch(package)
    {
        case 'A':
        case 'a':
            if (jarsBought <= 2)
            {
                jarCost = 8;
                cout<<"You owe $"<<jarCost<<endl;
                break;
            }
            else
            {
                jarCost = 8 + (jarsBought - 2) * 5;
                cout<<"You owe $"<<jarCost<<endl;
                break;
            }
        case 'B':
        case 'b':
            if (jarsBought <= 4)
            {
                jarCost = 12;
                cout<<"You owe $"<<jarCost<<endl;
                break;
            }
            else
            {
                jarCost = 12 + (jarsBought - 4) * 4;
                cout<<"You owe $"<<jarCost<<endl;
                break;
            }
        case 'C':
        case 'c':
            if (jarsBought <= 6)
            {
                jarCost = 15;
                cout<<"You owe $"<<jarCost<<endl;
                break;
            }
            else
            {
                jarCost = 15 + (jarsBought - 6) * 3;
                cout<<"You owe $"<<jarCost<<endl;
                break;
            }
        default:
            cout<<"The package entered does not exist. Try again!"<<endl;

    }    


    return 0;
}