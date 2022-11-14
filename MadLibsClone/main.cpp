#include <iostream>
#include <string>

using namespace std;

int main()
{
    string adj;
    string girlName;
    string anadj;
    string occupation;
    string place;
    string clothingItems;
    string hobby;
    string adjectiveLast;
    string occupAnother;
    string boyName;
    string manName;


    cout<<"Please enter an adjective"<<endl;
    cin>>adj;
    cout<<"Please enter a girls name"<<endl;
    cin>>girlName;
    cout<<"Please enter another adjective"<<endl;
    cin>>anadj;
    cout<<"Please enter an occupation"<<endl;
    cin>>occupation;
    cout<<"Please enter the name of a place"<<endl;
    cin>>place;
    cout<<"Please enter the name of an item of clothing in plural"<<endl;
    cin>>clothingItems;
    cout<<"Please enter a hobby"<<endl;
    cin>>hobby;
    cout<<"Please enter yet another adjective"<<endl;
    cin>>adjectiveLast;
    cout<<"Please enter another occupation"<<endl;
    cin>>occupAnother;
    cout<<"Please enter a boys name"<<endl;
    cin>>boyName;
    cout<<"Please enter a mans name"<<endl;
    cin>>manName;

    cout<<"There once was a "<<adj<<" girl named "<<girlName
    <<" who was a "<<anadj<<" "<<occupation<<" in the kingdom of "
    <<place<<". She loved to wear "<<clothingItems
    <<" and enjoyed "<<hobby<<". She wanted to marry the "
    <<adjectiveLast<<" "<<occupAnother<<" named "
    <<boyName<<" but her father, King "
    <<manName<<" forbid her from seeing him."<<endl;





    return 0;
}