/* 
Problem: Roman to Integer
O(s) Solution

NOTE:
Switch cases are slower than if statements by 3ms.
The if statement implementation can be found at 
commit: 168697ba10b3da60cdc17414f07c40473c7a1d23
*/

#include <string>

class Naive {
public:
    int romanToInt(std::string s) {

        // Declare necessary variables

        int ctr = 0;
        std::string state = s;
        char prev;
        char current;

        // Take care of subtraction: IV, IX, XL, XC, CD, CM

        for (int i = 1; i < s.length(); i++){
            prev = s[i-1];
            current = s[i];
            switch(prev){
                case 'I':
                    switch(current){
                        case 'V':
                            ctr += 4;
                            state.replace(i-1, 2, 2, '_');
                            break;
                        case 'X':
                            ctr += 9;
                            state.replace(i-1, 2, 2, '_');
                            break;
                    }
                    break;
                case 'X':
                    switch(current){
                        case 'L':
                            ctr += 40;
                            state.replace(i-1, 2, 2, '_');
                            break;
                        case 'C':
                            ctr += 90;
                            state.replace(i-1, 2, 2, '_');
                            break;
                    }
                    break;
                case 'C':
                    switch(current){
                        case 'D':
                            ctr += 400;
                            state.replace(i-1, 2, 2, '_');
                            break;
                        case 'M':
                            ctr += 900;
                            state.replace(i-1, 2, 2, '_');
                            break;
                    }
                    break;
            }
        }

        // For any remaining letters, add to counter

        for (int i = 0; i < state.length(); i++){
            switch(state[i]){
                case 'I':
                    ctr += 1;
                    break;
                case 'V':
                    ctr += 5;
                    break;
                case 'X':
                    ctr += 10;
                    break;
                case 'L':
                    ctr += 50;
                    break;
                case 'C':
                    ctr += 100;
                    break;
                case 'D':
                    ctr += 500;
                    break;
                case 'M':
                    ctr += 1000;
            }
        }
        return ctr;
    }
};