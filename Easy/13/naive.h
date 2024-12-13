// Problem: Roman to Integer
// O(s) Solution
// IV, IX, XL, XC, CD, CM
// 4, 9, 40, 90, 400, 900

#include <string>

class Naive {
public:
    int romanToInt(std::string s) {

        int ctr = 0;
        std::string state = s;
        char prev;
        char current;

        for (int i = 1; i < s.length(); i++){
            prev = s[i-1];
            current = s[i];

            if (prev == 'I' && current == 'V'){
                ctr += 4;
                state.replace(i-1, 2, 2, '_');
            }
            
            if (prev == 'I' && current == 'X'){
                ctr += 9;
                state.replace(i-1, 2, 2, '_');
            }

            if (prev == 'X' && current == 'L'){
                ctr += 40;
                state.replace(i-1, 2, 2, '_');
            }
            
            if (prev == 'X' && current == 'C'){
                ctr += 90;
                state.replace(i-1, 2, 2, '_');
            }

            if (prev == 'C' && current == 'D'){
                ctr += 400;
                state.replace(i-1, 2, 2, '_');
            }

            if (prev == 'C' && current == 'M'){
                ctr += 900;
                state.replace(i-1, 2, 2, '_');
            }
        }

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