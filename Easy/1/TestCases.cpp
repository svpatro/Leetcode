#include <iostream>
#include "naive.h"
#include "optimal.h"
#include <vector>

int main(){

    std::vector<int> test_1 = {2, 7, 11, 15};
    int target_1 = 9;

    std::vector<int> test_2 = {3, 2, 4};
    int target_2 = 6;

    std::vector<int> test_3 = {3, 3};
    int target_3 = 6;

    std::vector<int> naive_result;
    std::vector<int> optimal_result;

    Naive naive;
    Optimal optimal;

    naive_result = naive.twoSum(test_1, target_1);
    optimal_result = optimal.twoSum(test_1, target_1);

    std::cout << "Problem 1 (Naive):" << std::endl;

    for (int num : naive_result){
        std::cout << "Position:" << num << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Problem 1 (Optimal):" << std::endl;

    for (int num : optimal_result){
        std::cout << "Position:" << num << std::endl;
    }

    std::cout << std::endl;

    naive_result = naive.twoSum(test_2, target_2);
    optimal_result = optimal.twoSum(test_2, target_2);

    std::cout << "Problem 2 (Naive):" << std::endl;

    for (int num : naive_result){

        std::cout << "Position:" << num << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Problem 2 (Optimal):" << std::endl;

    for (int num : optimal_result){
        std::cout << "Position:" << num << std::endl;
    }

    std::cout << std::endl;

    naive_result = naive.twoSum(test_3, target_3);
    optimal_result = optimal.twoSum(test_3, target_3);

    std::cout << "Problem 3 (Naive):" << std::endl;

    for (int num : naive_result){
        std::cout << "Position:" << num << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "Problem 3 (Optimal):" << std::endl;

    for (int num : optimal_result){
        std::cout << "Position:" << num << std::endl;
    }

    std::cout << std::endl;

    return 0;
}

