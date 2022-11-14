#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    srand(time(nullptr));
    int num;
    num = (rand() % 100) + 1;
    int guess = 0;
    int counter = 0;


    // cout<<"Enter your guess"<<endl;
    // cin>>guess;

    while (guess != num)
    {
        cout<<"Enter your guess"<<endl;
        cin>>guess;
        
        if (guess > num)
        {
            cout<<"Your guess is too high!"<<endl;
            counter++;
            continue;
        }
        else if (guess < num)
        {
            cout<<"Your guess is too low!"<<endl;
            counter++;
            continue;
        }
        else
        {
            cout<<"Congratulations! You guessed the number in "<<counter<<" guesses!"<<endl;
            cout<<"Thanks for playing!";
            break;
        }
    }



    return 0;
}