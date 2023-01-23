// SAVING RESULTS

#ifndef FILE_HPP
#define FILE_HPP

using namespace std;

void saveResults(vector<double> cards, vector<string> results, int &total)
{
    while (true)
    {
        int choice;
        cout << "Do you want to save your results? (1/0): ";
        cin >> choice;
        if (choice == 1)
        {
            string fileName;
            cout << endl << "Insert the name of your file: ";
            cin >> fileName;
            while (fileName.length() == 0)
            {
                cout << "Please insert the name for your file: ";
                cin >> fileName;
            }
            
            ofstream userFile;
            userFile.open("test/" + fileName + ".txt");
            userFile << "24 PUZZLE SOLVER" << endl << endl << "Your Cards: ";
            for (int i = 0; i < cards.size(); i++)
            {
                if (cards[i] == 1)
                {
                    userFile << "A ";
                }
                else if (cards[i] == 11)
                {
                    userFile << "J ";
                }
                else if (cards[i] == 12)
                {
                    userFile << "Q ";
                }
                else if (cards[i] == 13)
                {
                    userFile << "K ";
                }
                else
                {
                    userFile << cards[i] << " ";
                }
            }

            // write solutions
            userFile << endl << results.size() << " solutions found." << endl << endl;
            for (int j = 0; j < results.size(); j++)
            {
                userFile << results[j] << endl;
            }
            userFile.close();
            break;
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            cout << "Invalid input. Please try again." << endl;
        }
    }
}

#endif