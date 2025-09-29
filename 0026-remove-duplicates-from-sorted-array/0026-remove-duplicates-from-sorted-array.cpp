#include <set>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //first solution o(n^2)
        // int m = 0;
        // for(int i = 0 ;i<nums.size();i++){
        //     bool isdup = false;
        //     for(int j = 0 ; j < i ;j++){
        //         if(nums[j] == nums[i]){
        //             isdup = true;
        //             break;
        //         }
        //     }
        //     if(!isdup){
        //         nums[m] = nums[i];
        //         m++;
        //     }
        // }
        // return m;

        // another solustion o(nlogn)
        // set<int> myset(nums.begin(), nums.end());
        // int m = 0;
        // for (int val : myset) {
        //     nums[m] = val;
        //     m++;
        // }
        // return m;
        
        //best solution o(n)
        if(nums.empty())return 0 ;
        int m = 1;
        for(int i = 1 ;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[m]=nums[i];
                m++;
            }
        } 
        return m;

    }
};