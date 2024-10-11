#include<string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int sum{0};
        for(int i=0 ; i<s.size() ; i++){
            if (s[i]=='I'){
                if(s[i+1]=='V' ||s[i+1]=='X')
                    sum+=(s[1+i++]=='V')?4:9;
                else
                    sum+=1;
            }else if (s[i]=='X'){
                if(s[i+1]=='L' ||s[i+1]=='C')
                    sum+=(s[1+i++]=='L')?40:90;
                else
                    sum+=10;
            }else if (s[i]=='C'){
                if(s[i+1]=='D' ||s[i+1]=='M')
                    sum+=(s[1+i++]=='D')?400:900;
                else
                    sum+=100;
            }else if(s[i]=='V')
                sum+=5;
            else if(s[i]=='L')
                sum+=50;
            else if(s[i]=='D')
                sum+=500;
            else if(s[i]=='M')
                sum+=1000;

        }
        return sum;
    }
};