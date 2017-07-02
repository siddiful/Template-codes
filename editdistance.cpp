#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define MA 100010
using namespace std;


int main(){
	int n,m,i,j,k;string s1,s2;
	cin>>s1;cin>>s2;
	n=s1.length(),m=s2.length();
	int dp[m+1][n+1];
	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++){
			if(i==0)dp[i][j]=j;
			else if(j==0)dp[i][j]=i;
			else if(s1[j-1]==s2[i-1])dp[i][j]=dp[i-1][j-1];
			else{
				dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
			}
		}
	}
	printf("%d\n",dp[m][n]);
	return 0;
}