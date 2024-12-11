// Problem: Palindome Number
// O(n) Solution

#include <string>

class Naive {
    public:
        bool isPalindrome(int x){
            std::string s = std::to_string(x);
            int counter = 0;
            for (int i = 0; i < s.length() / 2; i++){
                if (s.at(i) == s.at(s.length() - 1 - i)){
                    counter++;
                }
            }
            if (counter == s.length() / 2){
                return true;
            }
            else {
                return false;
            }
        }
};