#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=(digits[digits.size()-1]!=9)?0:1;
        digits[digits.size()-1]=(digits[digits.size()-1]!=9)?digits[digits.size()-1]+1:0;
        for (int i = digits.size()-2; i >= 0 ; i--){
            if(carry==1){
                digits[i]+=1;
                carry=0;
            }
            if(digits[i] >= 10){
                digits[i]-=10;
                carry=1;            }
        }
        if (carry ==1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};