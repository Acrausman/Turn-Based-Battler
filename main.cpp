#include <iostream>
#include "def.h"

using namespace std;

bool gameStart;

Player playerCharacter;
void characterCreation();

int main()
{
    gameStart = false;

    cout << "Welcome to the Arena! ";
    while(!gameStart) characterCreation();
    playerCharacter.statSetup();

}

void characterCreation()
{
    cout << "What's your name?\n";
    string name;
    cin >> name;
    playerCharacter.setName(name);
    cout << "Do you want to be a Fighter(a) or Mage(b)?\n";
    string job;
    cin >> job;
    if (!playerCharacter.setJob(job))
    {
        do {
            cout << "Invalid Response, please try again with either a or b\n";
            cin >> job;
        } while (!playerCharacter.setJob(job));
    }
    cout << "Is your character male(m), female(f) or neutral(n)?\n";
    string gen;
    cin >> gen;
    if (!playerCharacter.setGender(gen))
    {
        do {
            cout << "Invalid Response, please try again with either m, f or n\n";
            cin >> job;
        } while (!playerCharacter.setGender(gen));
    }

    cout << "You have created the " << playerCharacter.getJob() << ", " << playerCharacter.getName()
        << ". Would you like to proceed or recreate your character?(p/r)";
    string proceed;
    cin >> proceed;
    bool valid;
    do {
        if (proceed == "p")
        {
            valid = true;
            gameStart = true;
        }
        else if (proceed == "r")
        {
            valid = true;
            gameStart = false;
        }
        else
        {
            valid = false;
            gameStart = false;
        }
    } while (!valid);
    
}
