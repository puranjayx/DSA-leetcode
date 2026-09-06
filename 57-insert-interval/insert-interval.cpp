class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& ne) {
        bool insert=false;
       // int start = ;
        vector<vector<int>> ans;
        int i ;
        for( i =0;i<a.size();i++){
            if(insert==false && a[i][0]>= ne[0]){
                ans.push_back(ne);
                insert=true;
            }
            ans.push_back(a[i]);
        }
        if(insert==false){
            ans.push_back(ne);
        }

        //merging
        vector<vector<int>> res;
        int s1,s2,e1,e2;
        s1=ans[0][0];
        e1=ans[0][1];
        for(int j =1;j<ans.size();j++){
            s2=ans[j][0];
            e2=ans[j][1];
            if(s2<=e1){
                s1=s1;
                e1=max(e1,e2);
                continue;
            }
            else{
                res.push_back({s1,e1});
                s1=s2;
                e1=e2;
            }

        }
        res.push_back({s1,e1});
        return res;
    }
};