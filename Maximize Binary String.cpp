#include <iostream>
#include <string>
using namespace std;

void maximizeBinaryString() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, k; // Length of the string and number of moves
        cin >> n >> k;

        string s;
        cin >> s;

        // Apply the greedy strategy
        if (s[0] == '0') {
            s[0] = '1'; // Change the first character to '1'
            k--;        // One operation used
        }

        // Append all remaining zeros at the end
        while (k > 0) {
            s += '0';
            k--;
        }

        cout << s << endl;
    }
}

int main() {
    maximizeBinaryString();
    return 0;
}
