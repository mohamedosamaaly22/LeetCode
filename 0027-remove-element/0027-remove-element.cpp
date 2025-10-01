#include <algorithm>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // o(n)
        int k = 0;
        for(int i =0 ; i< nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
        //another solution using helper function remove o(n)
        // auto it  = remove(nums.begin(),nums.end(),val);
        // return it - nums.begin();



    }
};