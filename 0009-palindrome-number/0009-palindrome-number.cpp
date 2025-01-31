class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
        return false;}

        int sum=0;
        int temp = x;
        while(x!=0)
        {
            if(sum > INT_MAX/10 || sum < INT_MIN/10){
                return false;
            }
            sum = (sum*10)+x%10;
            x = x/10;
        }
        if(sum == temp){
            return true;}

        else {
            return false;}
    }
};