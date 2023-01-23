// INPUT CARDS

#ifndef INPUT_HPP
#define INPUT_HPP

using namespace std;

// Converts string to double
double stodouble(string kar)
{
    double n;
    if (kar == "A")
    {
        n = 1;
    }
    else if (kar == "J")
    {
        n = 11;
    }
    else if (kar == "Q")
    {
        n = 12;
    }
    else if (kar == "K")
    {
        n = 13;
    }
    else
    {
        n = stoi(kar);
    }
    return n;
}

// Checks validity of user's card
bool checkCard(string kartu)
{

    if (isdigit(kartu[0]) || kartu == "10")
    {
        if (kartu == "0" || kartu == "1" || kartu.length() > 2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        if (kartu == "A" || kartu == "J" || kartu == "Q" || kartu == "K")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

// User inputs manually
void manualInput(vector<double> &cards)
{
    // user input
    string inputCard[4];
    bool inputValid = false;
    // Check if the cards are valid
    while (!inputValid)
    {
        cout << "Enter 4 cards (ex: A 9 4 K): ";
        cin >> inputCard[0] >> inputCard[1] >> inputCard[2] >> inputCard[3];
        inputValid = checkCard(inputCard[0]) && checkCard(inputCard[1]) && checkCard(inputCard[2]) && checkCard(inputCard[3]);
        if (!inputValid)
        {
            cout << inputCard[0] << endl;
            cout << "Invalid input. Please try again." << endl;
        }
    }
    cout << "Input Accepted." << endl << endl;

    // Convert the cards to int
    for (int i = 0; i < 4; i++)
    {
        cards.push_back(stodouble(inputCard[i]));
    }
}

// Generate random cards
void randomInput(vector<double> &cards)
{
    srand(time(NULL));
    cout << "Generating random cards..." << endl << endl;
    nanosleep((const struct timespec[]){{0, 500000000L}}, NULL);
    cout << "Cards generated." << endl;
    for (int i = 0; i < 4; i++)
    {
        cards.push_back((rand() % 13) + 1);
        if (cards[i] == 1)
        {
            cout << "A ";
        }
        else if (cards[i] == 11)
        {
            cout << "J ";
        }
        else if (cards[i] == 12)
        {
            cout << "Q ";
        }
        else if (cards[i] == 13)
        {
            cout << "K ";
        }
        else
        {
            cout << cards[i] << " ";
        }
    }
    cout << endl;
}
#endif