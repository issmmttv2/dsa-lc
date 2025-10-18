/*
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

initially compared haystack[tt] with needle of tt for return i statement outside the inner loop Lol
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = haystack.size();
        int k = needle.size();
        if(k > l){
            return -1;
        }

        for(int i=0;i<l;i++){
            if(haystack[i]==needle[0]){
                int j;
                int tt = i;
                for(j=0;j<k;j++){
                    if(tt >= l){
                        return -1;
                    }
                    if(haystack[tt]!=needle[j]){
                        break;
                    }
                    if(j==k-1 && haystack[tt]==needle[j]){
                        return i;
                    }
                    tt++;
                }
                i == tt;
            }
        }
        return -1;
    }
};
