#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<std::pair<int, int>> numWithIndex;
        for (int i = 0; i < nums.size(); i++) {
            numWithIndex.push_back({nums[i], i});
        }
        sort(numWithIndex.begin(), numWithIndex.end());

        for (int i = 0; i < numWithIndex.size(); i++) {
            int num1 = numWithIndex[i].first;
            int searchnum = target - num1;
            int num2Index = mysearch(numWithIndex, i + 1, numWithIndex.size() - 1, searchnum);
            if (num2Index != -1) {
                return {numWithIndex[i].second, numWithIndex[num2Index].second};
            }
        }
            
        
        return {};

    }
private:
     int  mysearch (vector<std::pair<int, int>>& numbers , int start ,  int end , int tar ){
            if(start > end){
                return -1 ;
            }
            int mid = start + (end - start) / 2;
            if (tar == numbers[mid].first){
                return mid;
            }
            else if (tar < numbers[mid].first){
                return mysearch(numbers , start ,mid-1 ,tar);

            }
            else{
                return mysearch(numbers,mid+1,end,tar);
            }

        }

};