// English_Is-It-Tater-Tot-Time_C++
// Author: Natalie English
// Date Created: 30 March 2024 at 11:36
// Description: Funny program to "determine" when it is time to eat tater tots in C++
// To run program: Ctrl + F5 OR Ctrl + FN + F5 if you have the FN key

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <stdexcept>
#include "tatertot.h"

using namespace std;

int main() {
    int DaysNumber;
   
    // Asks the user how long it’s been since they ate tater tots
    cout << "How long has it been since you had some yummy tots?" << endl;
    cout << "Enter the number of days: " << endl;
    cin >> DaysNumber;

    // Handles invalid inputs
    try {
       // If it’s been a week (or more) since the user ate tater tots…
        if (DaysNumber >= 7) {
            cout << "Yay! I bet those tots were delicious. Here's a recipe to try next time you want to eat tater tots: " << endl;
            cout << "https://www.allrecipes.com/recipe/236749/tater-tots-nachos/";
            abort();
        }

        // If the user ate tater tots recently…
        else {
            cout << "It. Is. TATER TOT TIME!" << endl;
            cout << "Go enjoy some yummy tots!" << endl;
            cout << "https://www.allrecipes.com/recipe/236749/tater-tots-nachos/";
            abort();
        }


    }
    catch (string e) {
        cin.clear();
        cout << "I'm sorry, but your input is invalid. Could you please try again?" << endl;
        cin >> DaysNumber;
    }

    catch (double e) {
        cin.clear();
        cout << "I'm sorry, but your input is invalid. Could you please try again?" << endl;
        cin >> DaysNumber;
    }
    return 0;
};
