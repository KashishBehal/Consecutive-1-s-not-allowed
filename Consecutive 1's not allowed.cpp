class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	   int a[n+1] , b[n+1];
	   a[1]=1;
	   b[1]=1;
	   for(int i=2;i<=n;i++){
	       a[i]=(a[i-1]+b[i-1])%1000000007;
	       b[i]=(a[i-1])%1000000007;
	   }
	   return (a[n]+b[n])%1000000007;
	}
};
