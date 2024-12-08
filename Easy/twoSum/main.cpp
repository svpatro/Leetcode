#include <iostream>
#include "naive.h"
#include <vector>

int main(){

    std::vector<int> test_1 = {2, 7, 11, 15};
    int target_1 = 9;

    std::vector<int> test_2 = {3, 2, 4};
    int target_2 = 6;

    std::vector<int> test_3 = {3, 3};
    int target_3 = 6;

    std::vector<int> result;

    Solution soln;

    result = soln.twoSum(test_1, target_1);

    std::cout << "Problem 1:" << std::endl;

    for (int num : result){
        std::cout << "Position:" << num << std::endl;
    }

    std::cout << std::endl;

    result = soln.twoSum(test_2, target_2);

    std::cout << "Problem 2:" << std::endl;

    for (int num : result){

        std::cout << "Position:" << num << std::endl;
    }

    std::cout << std::endl;

    result = soln.twoSum(test_3, target_3);

    std::cout << "Problem 3:" << std::endl;

    for (int num : result){
        std::cout << "Position:" << num << std::endl;
    }

    return 0;
}

