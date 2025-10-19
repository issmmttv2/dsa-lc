/* https://leetcode.com/contest/weekly-contest-472/problems/smallest-missing-multiple-of-k */

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int mul = 1;
        for(int i:nums){
            if(i%k) continue;
            int div = i/k;
            if(div > mul){
                return mul*k;
            }
            mul = div+1;
        }
        return mul*k;
    }
};
