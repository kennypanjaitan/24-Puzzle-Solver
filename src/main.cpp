// MAIN PROGRAM

#include <iostream>
#include <vector>
#include <sstream>
#include <ctime>
#include <chrono>
#include <fstream>
#include "file.hpp"
#include "input.hpp"
#include "operator.hpp"
#include "permute.hpp"
#include "menu.hpp"

using namespace std;

void startMenu(vector <double> &cards, vector<vector<double>> &permutations, vector<string> &results, int &total)
{
    using Clock = std::chrono::high_resolution_clock;

    // initiate main menu
    mainMenu(cards);

    // start clock
    auto start = Clock::now();

    // permutate user's input card
    permutasi(cards, 0, 4, permutations);

    // calculate all possible results
    for (int i = 0; i < permutations.size(); i++)
    {
        count1(permutations[i], total, results);
        count2(permutations[i], total, results);
        count3(permutations[i], total, results);
        count4(permutations[i], total, results);
        count5(permutations[i], total, results);
    }

    // print results
    cout << results.size() << " solution(s) found." << endl;
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i] << endl;
    }
    auto end = Clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << endl << "Time taken: " << duration.count() << "ms" << endl;

    saveResults(cards, results, total);
}

int main()
{
    // variable declaration
    int total = 0;
    vector<string> results;
    vector<double> cards;
    vector<vector<double>> permutations;

    // main program
    startMenu(cards, permutations, results, total);

    // back to main menu
    int prompt = backToMenu();
    if (prompt == 0)
    {
        cout << endl;
        cout << "Thank you for using 24 PUZZLE SOLVER." << endl;
        cout << "We'll still be here if you need us (again)." << endl;
        exit(0);
    }
    else
    {
        main();
    }

    return 0;
}