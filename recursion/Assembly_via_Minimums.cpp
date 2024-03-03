#include <iostream>
#include <string>

using namespace std;

string roundNumber(string x) {
    string digits = to_string(x);
    int k = digits.length() - 1;

    while (k>=0) {
            if(digits[k]>='5' && digits[k]<'9')
            {

            }

    }

    return digits;  // Convert the string back to a number
}

int main() {
    int t;
    cin >> t;  // Number of test cases


    string x;
    cin >> x;  // Input number
    string result = roundNumber(x);
    cout << result << endl;


    return 0;
}
