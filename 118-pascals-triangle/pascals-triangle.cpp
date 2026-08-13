class Solution {
public:
    // vector<int> generaterow(int row){
    //     vector<int> ansrow;
    //     int ans=1;
    //     ansrow.push_back(1);
    //     for(int  col =1;col<row;col++){
    //         ans=ans*(row-col);
    //         ans/=col;
    //         ansrow.push_back(ans);  

    //     }
    //     return ansrow;
    // }

    vector<vector<int>> generate(int n) {
    //     vector<vector<int>> ans;
    //     for(int i =1;i<=n;i++){
    //         ans.push_back(generaterow(i));

    //     }
    //     return ans;
    // }
    vector<vector<int>> result(n);

    for(int i =0;i<n;i++){

        result[i]=vector<int>(i+1,1);

        for(int j=1;j<i;j++){


            result[i][j]=result[i-1][j]+result[i-1][j-1];
        }
    }
    return result;
    }

};