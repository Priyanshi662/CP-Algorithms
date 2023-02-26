class Solution {
public:
    // Floyd Detection algorithm used:
    int sumsquare(int n)
    {
        int temp,d,x;
        temp=0;
        x=n;
        while(x!=0)
        {
            d=x%10;
            d=d*d;
            temp+=d;
            x=x/10;
        }
        return temp;
    }
    bool isHappy(int n) {
        if(n==1)
            return true;
        int fast=n,slow=n;
        // consider the numbers forming from sum of squares of digits making a linked list with a loop 
        do{
            slow=sumsquare(slow);
            fast=sumsquare(fast);
            fast=sumsquare(fast);
        }
        while(fast!=slow);
        if(slow==1)
            return true;
        else
            return false;
    }
};