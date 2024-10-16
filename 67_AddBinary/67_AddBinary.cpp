#include<string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int a_ptr = a.size() - 1;
        int b_ptr = b.size() - 1;
        string result;
        int carry = 0;  // Use an integer for carry instead of char

        // Loop until both strings are fully processed
        while (a_ptr >= 0 || b_ptr >= 0 || carry) {
            int x = (a_ptr >= 0) ? a[a_ptr--] - '0' : 0;  // Convert char to integer
            int y = (b_ptr >= 0) ? b[b_ptr--] - '0' : 0;

            int sum = x + y + carry;
            result.push_back((sum % 2) + '0');  // Add binary digit (0 or 1)
            carry = sum / 2;  // Calculate carry
        }

        // Since the result is built backwards, reverse it
        reverse(result.begin(), result.end());
        return result;
    }
};
