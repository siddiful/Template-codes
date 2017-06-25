#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
int dp[101][10];
int count(int n,int k){
if(k==0)return 0;
if(dp[n][k])return dp[n][k];
else{
for(int i=0;i<n;i++){
dp[n][k]+=count(n-i,k-1);}}
return dp[n][k];
}

int main(){
int n=100,k=7;
for(int i=0;i<=n;i++){dp[i][1]=1;}
printf("%d\n",count(n,k));
return 0;}
