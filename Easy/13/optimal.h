/*
Problem: Roman to Integer
O(s) solution

Note: 
This solution drastically reduces the amount of code required.
Regardles, it is still slower than naive if statements by 1ms.
*/

#include <string>
#include <map>

class Optimal{

public:
    int romanToInt(std::string s){
        int ctr = 0;
        std::map<char, int> roman = {
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for (int i = 0; i < s.length(); i++){
            if (i+1 < s.length() && roman[s[i]] < roman[s[i+1]]){
                ctr -= roman[s[i]];
            }
            else{
                ctr += roman[s[i]];
            }
        }
        return ctr;
    }
};