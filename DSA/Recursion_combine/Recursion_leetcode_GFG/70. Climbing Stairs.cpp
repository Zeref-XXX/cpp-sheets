class Solution {
public:
    int climbStairs(int n) {
        //recursive works but give TLE
        // if(n==1 || n==0 )return n;
        // return climbStairs(n-1) + climbStairs(n-2);

        //iterative
        if(n<=1) return n;

        int fib1=1,fib2=1,sum=0;
        for(int i=2;i<=n;i++){
            sum=fib1+fib2;
            fib1=fib2;
            fib2=sum;

        }
        return sum;
    }
};