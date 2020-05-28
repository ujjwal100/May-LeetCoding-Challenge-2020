//Time Complexity : O(N)
//Space Complexity : O(N)
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1,0);
        for(int i=1;i<=num;i++)
            ans[i]=ans[i&(i-1)]+1;
        return ans;
    }
};