class Solution {
public:
    bool isPalindrome(int x) {
        int temp;
        double d,rev = 0;
        temp = x;
        while(temp > 0)
        {
            d = temp % 10 ;
            rev = (rev * 10)+ d ;
            temp = temp / 10;
        }
        if ( rev == x)
        return true;
        else 
        return false;
        
    }
};
