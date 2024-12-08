// Problem: Two Sum
#include <vector>

class Solution {

public:
    std::vector<int> twoSum(std::vector<int>& nums, int target){

        std::vector<int> result;

        for (int i = 0; i < nums.size() - 1; i++){
            for (int j = i; j < nums.size(); j++){
                if (i == j){
                    j++;
                }
                if (nums.at(i) + nums.at(j) == target){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};