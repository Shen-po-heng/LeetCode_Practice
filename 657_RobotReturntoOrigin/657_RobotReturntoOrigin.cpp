#include<string>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        pair <int,int> xy{};
        for (const auto &move:moves){
            switch(move){
                case'R':
                    xy.first++;
                    break;
                case'L':
                    xy.first--;
                    break;
                case'U':
                    xy.second++;
                    break;
                case'D':
                    xy.second--;
                    break;
                default:
                    break;
            }
        }
        return xy.first==0 && xy.second==0;
    }
};