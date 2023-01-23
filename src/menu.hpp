// MAIN MENU

#include "os.hpp"
#ifndef MENU_HPP
#define MEMU_HPP

using namespace std;

// Banner
void banner()
{
    system(CLEAR);
    cout << "==============================================================================================================================" << endl << endl;
    cout << ".------..------.       .------..------..------..------..------..------.       .------..------..------..------..------..------." << endl;
    cout << "|2.--. ||4.--. | .-.   |P.--. ||U.--. ||Z.--. ||Z.--. ||L.--. ||E.--. | .-.   |S.--. ||O.--. ||L.--. ||V.--. ||E.--. ||R.--. |" << endl;
    cout << "| (\\/) || :/\\: |((5))  | :/\\: || (\\/) || :(): || :(): || :/\\: || (\\/) |((5))  | :/\\: || :/\\: || :/\\: || :(): || (\\/) || :(): |" << endl;
    cout << "| :\\/: || :\\/: | '-.-. | (__) || :\\/: || ()() || ()() || (__) || :\\/: | '-.-. | :\\/: || :\\/: || (__) || ()() || :\\/: || ()() |" << endl;
    cout << "| '--'2|| '--'4|  ((1))| '--'P|| '--'U|| '--'Z|| '--'Z|| '--'L|| '--'E|  ((1))| '--'S|| '--'O|| '--'L|| '--'V|| '--'E|| '--'R|" << endl;
    cout << "`------'`------'   '-' `------'`------'`------'`------'`------'`------'   '-' `------'`------'`------'`------'`------'`------'" << endl << endl;
    cout << "==============================================================================================================================" << endl << endl;
    cout << "WELCOMT TO 24 PUZZLE SOLVER" << endl;
    cout << "Your lovely saviour when you play 24 puzzle card game with your friends and you know you can't count <3" << endl << endl;
}

// Menu for user's input method
int inputMenu()
{
    cout << "How would you like to input your cards?" << endl;
    cout << "1. Input it Yourself" << endl;
    cout << "2. Generate Random Cards" << endl;
    cout << "3. Exit" << endl << endl;
    while (true)
    {
        int choice;
        cout << "Your choice (ex: 1): ";
        cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3)
        {
            return choice;
        }
        else
        {
            cout << "Invalid input, please try again." << endl;
        }
    }
}

// Back to starting menu
int backToMenu()
{
    int input;
    while (true)
    {
        cout << "Do you want to go back to main menu? (1/0): ";
        cin >> input;
        if (input == 1 || input == 0)
        {
            return input;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }   
}

// Main menu
void mainMenu(vector<double> &cards)
{
    banner();

    switch(inputMenu())
    {
        case 1:
            manualInput(cards);
            break;
        case 2:
            randomInput(cards);
            break;
        case 3:
            exit(0);
    }    
}

#endif