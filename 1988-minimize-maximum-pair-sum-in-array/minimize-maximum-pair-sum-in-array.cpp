class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int sum=0;
        int res=INT_MIN;
        while(low<high){
            sum=nums[low]+nums[high];
            res=max(sum,res);
            low++;
            high--;
        }
        return res;
    }
};