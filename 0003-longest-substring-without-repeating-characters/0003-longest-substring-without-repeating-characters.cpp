#include <unordered_set>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // use set to search letter if repeated 
        //use left right window to get the next number if letters
        // to make it ittrateble on letter not to stop when it find an
        // letter repeated 
        unordered_set<char> myset;
        int left = 0;
        int maxLen = 0; 
        for (int right = 0; right < s.size(); right++) {
            while (myset.count(s[right])) {
                //start from left until i find letter to delete it 
                myset.erase(s[left]);
                left++;
            }
            myset.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};