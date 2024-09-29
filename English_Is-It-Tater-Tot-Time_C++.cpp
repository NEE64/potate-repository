// English_Is-It-Tater-Tot-Time_C++
// Author: Natalie English
// Date Created: 30 March 2024 at 11:36
// Description: Funny program to "determine" when it is time to eat tater tots in C++
// To run program: Ctrl + F5 OR Ctrl + FN + F5 if you have the FN key

#include <ciso646>
#include <exception>
#include <iostream>
#include <optional>
#include <sstream>
#include <stdexcept>
#include <string>

using namespace std;

template <typename T>
auto string_to(const string& s)
{
T value;
istringstream ss(s);
return ((ss >> value) and (ss >> ws).eof())
? value
: optional <T>{ };
}


template <typename T>
auto ask(const string& prompt)
{
string s;
cout << prompt;
getline(cin, s);
return string_to <T>(s);
}


template <typename T, typename Verify>
T ask(const string& prompt, Verify verify, const string& error_message)
{
auto value = ask <int>(prompt);
if (!value or !verify(*value))
throw runtime_error(error_message);
return *value;
}


int main()
try
{
int daysNumber = ask <int>(
"How many days has it been since you have had some yummy tots? ",
[](int value) { return value >= 0; },
"Number of days must be an integer value ≥ 0.");

if (daysNumber > 7)
{
cout
<< "Yay! I bet those tots were delicious.\n"
<< "Here's a recipe to try next time you want to eat tater tots:\n"
<< "https://www.allrecipes.com/recipe/236749/tater-tots-nachos/\n";
}
else
{
cout
<< "It. Is. TATER TOT TIME!\n"
<< "Go enjoy some yummy tots!\n"
<< "https://www.allrecipes.com/recipe/236749/tater-tots-nachos/\n";
}
}
catch (const exception& e)
{
std::cerr << e.what() << "\n";
return 1;
}
