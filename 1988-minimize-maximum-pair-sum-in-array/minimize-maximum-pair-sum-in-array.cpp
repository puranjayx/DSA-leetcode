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


//ANOTHER WAY 

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(low<high){
            ans.push_back(nums[low]+nums[high]);
            low++;
            high--;
            }
        }
        int maxele=INT_MIN;
        for(auto i : ans){
            maxele=max(i,maxele);
        }
        return maxele;
    }
};
