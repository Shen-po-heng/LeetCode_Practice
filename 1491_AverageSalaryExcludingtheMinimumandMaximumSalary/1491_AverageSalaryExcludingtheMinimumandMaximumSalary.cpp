#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        double avg=static_cast<double>(
                    reduce(salary.begin(), salary.end(), 0)
                    -*max_element(salary.begin(), salary.end())
                    -*min_element(salary.begin(), salary.end())
                    )/(salary.size()-2);
        return avg;
    }
};