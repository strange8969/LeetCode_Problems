class Solution {
public:
    int solve(int a,int b,int n){
        if (n==0) return a;
        return solve(b,a+b,n-1);
    }
    int fib(int n) {
        return solve(0,1,n);
    }
};