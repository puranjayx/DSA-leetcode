class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int sum=0;
        int res=0;
        m[0]=1;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            int rem= sum%k;
            if(rem<0) rem=rem+k;

            res+=m[rem];
            m[rem]++;
        }
        return res;
    }
    
};