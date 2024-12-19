#include <iostream>
#include "naive.h"
#include <string>
#include <vector>

int main(){
    Naive naive;
    std::string result = "";
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    result = naive.longestCommonPrefix(strs);
    std::cout << result << std::endl;
    return 0;
}