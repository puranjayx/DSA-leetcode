class Solution {
public:

    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        //OPTIMAL WAY - SORTING AND 2 POINTERS USING IN TOTAL OF 4 POINTERS

         int n =nums.size();
         
         vector<vector<int>> ans;
         sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1;
                int l=n-1;
                while(k<l){
                     long long sum = nums[i];
                     sum+=nums[j];
                     sum+=nums[k];
                     sum+=nums[l];
                    if(sum<target) k++;
                    else if(sum>target) l--;
                    else{
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }
                        while(k<l && nums[l]==nums[l+1]){
                            l--;
                        }
                    }
                }

            }
        }
        return ans;

        //BETTER WAY USING HASH SET TO STORE NUMBER AND ST SET TO STORE UNIQUE 

        // set<vector<int>>s;

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         set<long long> hashst;
        //         for(int k=j+1;k<n;k++){
        //             long long sum = nums[i]+nums[j];
        //             sum+=nums[k];
        //             long long  fourth = target - sum;

        //             if(hashst.find(fourth)!=hashst.end()){
        //                 vector<int> temp = {nums[i],nums[j],nums[k],(int)fourth};
        //                 sort(temp.begin(),temp.end());
        //                 s.insert(temp);
        //             }
        //             hashst.insert(nums[k]);
        //         }
        //     }
        // }
        // vector<vector<int>> ans(s.begin(),s.end());
        // return ans;
    }
};