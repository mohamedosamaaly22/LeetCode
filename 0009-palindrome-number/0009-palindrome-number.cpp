#include <stack>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int original = x ; 
        stack<int> stack;
        while (x > 0) {
            int remainder = x % 10;
            stack.push(remainder);
            x /= 10;
        }
        x = original;
        while(!stack.empty()){
            int first = stack.top();
            stack.pop();
            if(first != x%10){
                return false;
            }
            x/=10;
        }
        return true;

    }
};