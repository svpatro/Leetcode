#include <iostream>
#include "naive.h"

int main(){

    int num = 121;
    bool result;

    Naive naive;
    result = naive.isPalindrome(num);

    std::cout << result << std::endl;

    return 0;
}