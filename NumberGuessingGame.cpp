#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    
    cout << "Welcome to GuessTheNumber game!"<< endl;
    cout << "I wish you a Good Luck!"<< endl;

    srand(0);
    int num=(rand()%100)+1;
    int number=0;
    do
    {
        cout << "Enter the number you have guessed between (1-100): ";
        cin>>number;

        if(number>num)
         cout << "The number is smaller than that you have chosen" << endl;
         else if(number<num)
         cout << "The number is larger than that you have chosen" << endl;
         else
          cout << "Well played! You won, "<<endl;
          
    }
    while(num!=number);
    
}