#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;



int rollDie()
{
    int roll;
    int min = 1; // the min number a die can roll is 1
    int max = 6;// this->dieSize; // the max value is the die size

    roll = rand() % (max - min + 1) + min;
    return roll;
}




int main()
{
Start:
    cout << "Wanna Roll the dice" << endl;
    cout << "Y/N" << endl;
    char answer1;
    cin >> answer1;
        if (answer1 == 'y') {
            srand(time(0));
            for (int i = 0; i < 1; i++)
            {
                cout << rollDie() << endl;
                

            }
            goto Start;
            
            
        }
        else
        {
            abort();
        }
}