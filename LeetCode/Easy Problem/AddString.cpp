#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string addStrings(const string& num1, const string& num2) {
   string result;
    int p1 = num1.size() - 1;
    int p2 = num2.size() - 1;
    int carry = 0;

    while (p1 >= 0 || p2 >= 0) {
        int x = (p1 >= 0) ? num1[p1] - '0' : 0;
        int y = (p2 >= 0) ? num2[p2] - '0' : 0;
        int digitSum = x + y + carry;
        result += (digitSum % 10) + '0';
        carry = digitSum / 10;
        p1--;
        p2--;
        cout<<"sum is "<<result<< "and carray is"<<carry<<endl;

        cout<< " x is "<<x << "and "<< "y is "<<y<<endl;
    }

    if (carry > 0) {
        result += carry + '0';
        cout<<"result is "<<result<<endl;
    }

   reverse(result.begin(), result.end());
    return result;
}



int main() {
    string num1 = "123";
    string num2 = "456";
    string sum = addStrings(num1, num2);
    cout << sum << endl; 
    return 0;
}
