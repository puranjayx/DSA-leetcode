class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0;
        long long int digit =0;
       long long int orignal = x;
        while(x>0){
            digit = x%10;
            rev = (rev*10) + digit;
            x=x/10;
        } 
        if(rev > INT_MAX ||rev <INT_MIN) return 0;
        if(rev==orignal)
        return true;
        else {
            return false;
        }
    }

};