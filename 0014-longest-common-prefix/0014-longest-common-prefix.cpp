class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      //using divide and conqure
     if (strs.empty()) return "";
     for (string& str : strs) {
            if (str.empty()) return "";
        }
     return lcp(strs, 0, strs.size() - 1);
    }
private : 
    string lcp (vector<string>& strs , int s , int e){
        if(s==e){
            return strs[s];
        }
        int mid  = (s + e) / 2;
        string left = lcp(strs, s, mid);
        string right = lcp(strs, mid + 1, e);
        return commonprefix(left,right);
    }
    string commonprefix(string& left, string& right) {
        int minLength = min(left.size(), right.size());
        for (int i = 0; i < minLength; ++i) {
            if (left[i] != right[i]) {
                return left.substr(0, i);
            }
        }
        return left.substr(0, minLength);
    }
};