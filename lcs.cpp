#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;

int main(){
	string s1,s2;
cin>>s1;cin>>s2;
int m=s1.length();int n=s2.length();
int dp[m+1][n+1];
for(int i=0;i<=m;i++){
	for(int j=0;j<=n;j++){
		if(i==0||j==0)dp[i][j]=0;
		else if(s1[i-1]==s2[j-1])dp[i][j]=1+dp[i-1][j-1];
		else{
			dp[i][j]=max(dp[i-1][j],max(dp[i-1][j-1],dp[i][j-1]));
		}
	}}
	printf("%d\n",dp[m][n]);
	return 0;
}