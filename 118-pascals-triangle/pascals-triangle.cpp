class Solution {
public:
    vector<int> generaterow(int row){
        vector<int> ansrow;
        int ans=1;
        ansrow.push_back(1);
        for(int  col =1;col<row;col++){
            ans=ans*(row-col);
            ans/=col;
            ansrow.push_back(ans);  

        }
        return ansrow;
    }

    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i =1;i<=n;i++){
            ans.push_back(generaterow(i));

        }
        return ans;
    }
};