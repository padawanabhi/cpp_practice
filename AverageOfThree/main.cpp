#include <iostream>

using namespace std;

int main()
{
    double firstNo;
    double secondNo;
    double thirdNo;

    cout<<"Please enter a real number: "<<endl;
    cin>>firstNo;
    cout<<"Please enter another real number: "<<endl;
    cin>>secondNo;
    cout<<"Please enter the final real number: "<<endl;
    cin>>thirdNo;

    cout<<"Average is "<<((firstNo+secondNo+thirdNo)/3)<<endl;
    

    return 0;
}