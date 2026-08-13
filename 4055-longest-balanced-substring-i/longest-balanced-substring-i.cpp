class Solution {
public:
    bool check(vector<int> hash){
        int common=0;
        for(int i =0;i<26;i++){
            if(hash[i]==0) continue;
            if(common ==0 ) common =hash[i];
            else if(hash[i]!=common){
                return false;
            }
        }
        return true;
    }
    int longestBalanced(string s) {
        int maxlen=INT_MIN;
        for(int i=0;i<s.size();i++){
            vector<int> hash(26,0);
            for(int j=i;j<s.size();j++){
                hash[s[j]-'a']++;
                if(check(hash)){
                     maxlen=max(maxlen,j-i+1);
                }
            }
        }
        return maxlen;
    }
    

};