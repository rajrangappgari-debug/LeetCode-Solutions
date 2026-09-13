class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1.0;
        if(x==0)return 0;
        if(x==1)return 1;
        if(x==-1&&n%2==0)return 1;
        if(x==-1&&n%2!=0)return -1;

        long num=n;//for  : if negative numbers 
        if(n<0){
            x=1/x;
            num=-num;
        }
        double ans =1;
        while(num>0){
            if(num%2==1){
                ans*=x;
                

            }
            x*=x;
            num/=2;
        }
        return ans;
        
    }
};