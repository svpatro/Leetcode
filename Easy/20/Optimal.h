// Problem: Valid Parentheses
// O(s) solution

#pragma once
#include <string>
#include <stack>
#include <map>

class Optimal{
    bool isValid(std::string s){
        std::map<char, char> symbols = {{')','('}, {']', '['}, {'}', '{'}};
        std::stack<char> stack;
        for (int i = 0; i < s.length(); i++){
            if (symbols.find(s[i]) != symbols.end()){
                if (!stack.empty() && stack.top() == symbols[s[i]]){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack.push(s[i]);
            }
        }
        if (stack.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};