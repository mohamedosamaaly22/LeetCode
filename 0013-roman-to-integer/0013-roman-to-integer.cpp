#include <string>
#include <unordered_map>
class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> romanmap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int sum = 0;
        int beforeval = 0;
        int currentval = 0 ;
        for (int i = s.size();i>=0;i--){
            currentval = romanmap[s[i]];
            if(currentval<beforeval){
                sum-=currentval;
            }
            else{
                sum+=currentval;
            }
            beforeval = currentval;
        }
        return sum ;
    }
};