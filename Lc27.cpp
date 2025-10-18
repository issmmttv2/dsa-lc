/* https://leetcode.com/problems/remove-element/description/*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0,  i= 0;
        for(;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};
