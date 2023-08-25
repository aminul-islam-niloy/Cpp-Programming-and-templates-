

#include <iostream>
#include <vector>
using namespace std;

int main() {

 #ifndef RUN 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int decimalNumber;
  
    cin >> decimalNumber;

    vector<int> binary;

    if (decimalNumber == 0) {
        binary.push_back(0);
    }
     else {
        while (decimalNumber > 0) 
        {
            binary.push_back(decimalNumber % 2);
            decimalNumber /= 2;
        }
    }

    for (int i = binary.size() - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << endl;

    return 0;
}
