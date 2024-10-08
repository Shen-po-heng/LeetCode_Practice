#include<vector>
#include<string>
#include<numeric>
using namespace std; 
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record{};
        for(const auto& s : operations) {
            if(s == "+") {
                int size = record.size();
                record.push_back(record[size - 1] + record[size - 2]);
            } else if(s == "D") {
                record.push_back(2 * record.back());
            } else if(s == "C") {
                record.pop_back();
            } else {
                record.push_back(stoi(s));
            }
        }
        return accumulate(record.begin(), record.end(), 0);
    }
};
