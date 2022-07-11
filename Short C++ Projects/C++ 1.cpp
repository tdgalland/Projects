int numRollsToTarget(int n, int k, int target) {
    if (target<n||n*k<target) return 0;
    vector <int> dp(target+1,0),next(target+1,0);
    for(int i=1;i<=target;i++)dp[i]+=dp[i-1]+(i<=k);
    int m = 1e+9+7;
    for(int i=1;i<n;i++){
        for(int j=0;j<=target;j++){ 
            next[j]=j<=i?0:((next[j-1]+dp[j-1]-dp[max(0,j-k-1)])%m+m)%m;
        swap(dp,next);
		}
    }
    return (dp[target]-dp[target-1]+m)%m;
}