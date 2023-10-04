#include <iostream>

using namespace std;

int main()
{
    int rate; 
    cout << "How much do you like Calculus lessons? Enter a number on a scale from 1 to 10" << endl ;
    cin >> rate;
    if (rate >= 7)  {
        cout << "you're a nerd" << endl;
    }
        else if (rate > 3 && rate < 7) {
            cout << "nothing special" << endl;
        } 
            else if (rate < 4) {
            cout << "*you were blocked by user sadomazo_lyalya*" << endl;
         }   
        
}