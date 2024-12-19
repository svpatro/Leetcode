#include <string>
#include <vector>
class Naive {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string result = "";
        for (int i = 0; i < strs[0].size(); i++){
            for (std::string index : strs){
                if (i == index.size() || index[i] != strs[0][i]){
                    return result;
                }
            }
            result += strs[0][i];
        }
        return result;
    }
};