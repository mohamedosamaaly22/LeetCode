#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for (int i=0;i<s.size();i++){
            if(s[i]=='{' || s[i]=='(' || s[i]=='[' )
            mystack.push(s[i]);
            else if( s[i]=='}' ||s[i]==')' || s[i] ==']'){
                if(mystack.empty())
                return false ;
                if(mystack.top()== '{' && s[i]=='}')
                    mystack.pop();
                else if(mystack.top()== '(' && s[i]==')')
                    mystack.pop();
                else if(mystack.top()== '[' && s[i]==']')
                    mystack.pop();
                else 
                return false ;


            }
        }
        return mystack.empty();
        
    }
};