#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // string name;
    // cin >> name;
    // cout << "My name is : " << name << endl;

    string value(5, 'a');
    cout << value << endl;

    string Address;
    getline(cin, Address);

    // Address.clear();
    cout << Address << endl;

    string str = "this is new program";
    string str2 = "this is old program and it has finished";

    // string str3 = str + " " + str2;
    str.append(str2);
    cout << str << endl;

    cout << str2.compare(str) << endl;

    str2.erase(4, 10);
    cout << str2 << endl;

    string a = "and";
    string b = "and";
    if (a.compare(b) == 0)
    {
        cout << "string is same" << endl;
    }

    cout << b.find("nd") << endl;
    b.insert(3, "after and after");
    cout << b << endl;
    cout << b.substr(4, 5);

    string convert = "122";
    int conRes = stoi(convert);
    cout << conRes + 2<<endl;
    string Ssort = "thisisaminulislam";
    sort(Ssort.begin(), Ssort.end());
    cout << Ssort << endl;
}