class Solution {//509
public:
    vector<int>dp;
    int fibo(int n) {
        if(n<=1)return n;
        if(dp[n]!=-1)return dp[n];//pre-computed
        return dp[n]=fibo(n-1)+fibo(n-2);
    }
    int fib(int n){
        // memset(dp,-1,sizeof(dp));
        dp.resize(31,-1);
        return fibo(n);
    }
};
//-----------------------------------------------------------------------//
//precomputing the pref instead of exponentionally
class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;

        vector<int>dp(31,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=2; i<=30; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }//pref sum->precompute
        return dp[n];
    }
};

//------------------------------------------------------------------------------//
//simple worst using recursion no saved states, repetion in computation
//pure-recursive
class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        return fib(n-1)+fib(n-2);
    }
};
