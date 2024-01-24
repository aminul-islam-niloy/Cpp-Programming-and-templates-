#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    int i,n;
    cout<<"Enter number size : ";
    cin>>n;

    auto start = high_resolution_clock::now();

    for (i = 1; i <= n; i++) {
        cout << "Hello World !!!\n";
    }
    


    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

    double inSec= duration.count()/1e6;
    cout << "Time taken by function: " << inSec<< " seconds" << endl;

    return 0;
}
