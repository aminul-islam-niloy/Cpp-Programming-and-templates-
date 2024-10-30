#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string getAbbreviation(const string &code)
{
    unordered_map<string, string> abbreviations =
        {

            {"CSE-3141", "Computer Science & Engineering, 3rd year, 1st semester, Compiler Design, Theory"},
            {"CSE-3142", "Computer Science & Engineering, 3rd year, 1st semester, Compiler Design, Lab"},
            {"CSE-3201", "Computer Science & Engineering, 3rd year, 2nd semester, Operating Systems, Theory"},
            {"CSE-3202", "Computer Science & Engineering, 3rd year, 2nd semester, Operating Systems, Lab"},
            {"CSE-4111", "Computer Science & Engineering, 4th year, 1st semester, Artificial Intelligence, Theory"}
            
            };

    if (abbreviations.find(code) != abbreviations.end())
    {
        return abbreviations[code];
    }
    else
    {
        return "Abbreviation not found for the given code.";
    }
}

int main()
{
    string code;
    cout << "Enter the code:";
    cin >> code;

    string result = getAbbreviation(code);
    cout << "Abbreviation: " << result << endl;

    return 0;
}
