class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        vector<int> ans;
        
            while(low<high){
            ans.push_back(nums[low]+nums[high]);
            low++;
            high--;
            }
        
        int maxele=INT_MIN;
        for(auto i : ans){
            maxele=max(i,maxele);
        }
        return maxele;
    }
};