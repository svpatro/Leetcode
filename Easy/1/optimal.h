// Problem: Two Sum
// O(n) Solution

#include <vector>
#include <map>

class Optimal {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target){
        std::map<int, int> mp;
        std::vector<int> soln;
        for (int i = 0; i < nums.size(); i++){
            if (mp.find(target - nums[i]) != mp.end()){
                soln.push_back(mp[target-nums[i]]);
                soln.push_back(i);
            }
            else {
                mp.insert({nums[i], i});
            }
        }
        return soln;
    }
};