class Solution {
public:
    int minimumLength(string str) {
        int n=str.size();
        int i =0;
        int j =n-1;
        while(i<j && str[i]==str[j]){
            char ch =str[i];
            while(i<j && str[i]==ch){
                i++;
            }
            while(j>=i && str[j]==ch){
                j--;
            }

        }
        int len = j-i+1;
        return len;

    }
};