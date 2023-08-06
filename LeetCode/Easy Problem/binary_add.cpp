// #include <string>

// std::string addBinary(std::string a, std::string b) {
//     std::string result;
//     int carry = 0;
//     int i = a.length() - 1;
//     int j = b.length() - 1;

//     while (i >= 0 || j >= 0) {
//         int sum = carry;

//         if (i >= 0)
//             sum += a[i--] - '0';
//         if (j >= 0)
//             sum += b[j--] - '0';

//         result += std::to_string(sum % 2);
//         carry = sum / 2;
//     }

//     if (carry)
//         result += std::to_string(carry);

//     std::reverse(result.begin(), result.end());

//     return result;
// }



#include <iostream>
#include <string>
#include <algorithm>

std::string addBinary(std::string a, std::string b) {
    std::string result;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0) {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';

        result += std::to_string(sum % 2);
        carry = sum / 2;
    }

    if (carry)
        result += std::to_string(carry);

    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    std::string a = "11";
    std::string b = "1";
    std::string sum = addBinary(a, b);

    std::cout << "Binary Sum: " << sum << std::endl;

    return 0;
}

