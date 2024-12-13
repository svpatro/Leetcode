// Problem: Roman to Integer

#include <iostream>
#include "naive.h"

int main(){

    Naive naive;
    int counter = naive.romanToInt("MCMXCIV");
    std::cout << counter << std::endl;

    return 0;
}