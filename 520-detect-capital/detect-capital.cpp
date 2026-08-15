class Solution {
public:
    int iscapital(char ch){
        if(ch>='A' && ch<='Z'){
            return 1;
        }
        return 0;
    }
    bool detectCapitalUse(string s) {
        int capital=0;
        for(int i =0;i<s.size();i++){
            if(iscapital(s[i])==1){
                capital++;
            }
        }
        if(capital==s.size()){
            return true;
        }
        else if(capital==1 && s[0]>='A' && s[0]<='Z'){
           
                return true;
          
        }
        else if(capital==0) return true;
        else return false;
    }
};