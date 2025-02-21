#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        
        if (n == 0) return "";

        string result(n, '0');  
        
        for (int i = 0; i < n; i++) {
            if (i < nums[i].size()) {
                result[i] = (nums[i][i] == '0') ? '1' : '0';
            } else {
                return string(n, '1'); 
            }
        }
        
        return result;
    }
};

