#include <iostream> 
#include <vector> 
#include <unordered_map> 
using namespace std; 

class Solution { 
    public: 
        vector<int> twoSum(vector<int>& nums, int target) { 
        unordered_map<int, int> seen; // valor -> índice 
        for (int i = 0; i < nums.size(); i++)  { 
            int complemento = target - nums[i]; 
            if (seen.find(complemento) != seen.end()) { 
                return {seen[complemento], i}; 
            } 
            seen[nums[i]] = i; 
        }                
        return {};
    } 
};
