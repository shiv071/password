#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); //srand is used to intialise the random numbers

    /*time is used so that it can get the time from system and change the
      output in every test. If we don't declare time then it will return
      same result in every test.*/

    string password = " ";
    int max;
    string keys = "0123456789"
                  "!@#$%^&*"
                  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                  "abcdefghijklmnopqrstuvwxyz";

    /*Now, we will set the length of our password and in the for loop we 
      declare the main logic */
    
    cout<<endl;
    cout << "Enter the length of password - ";
    cin >> max;
    cout<<endl;

    for (int i = 1; i <= max; i++)
    {
        password = password + keys[rand() % keys.size()];
        
        /*We used "rand() % keys.size()" to get the random character from keys 
          and and then we divided it with keys.size() so that we can get the  
          any-one random character from keys*/
    }

    //Let's Go.........

    cout << "Your password is - " << password << endl;
    cout<<endl;
    return 0;
}
