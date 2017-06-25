#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define sp pair<pair<int,int>,pair<int,int> >
#define ll long long int
using namespace std;
int dp[100];
int knapsack(int W,int wt[],int val[],int n){
for(int i=1;i<=W;i++){
for(int j=1;j<=n;j++){
if(i>=wt[j]){
dp[i]=max(dp[i],val[j]+dp[i-wt[j]]);}}}
return dp[W];
}

int main(){
int val[]={60,100,120};
int wt[]={10,20,30};
int W=50;
printf("%d",knapsack(W,wt,val,3));
return 0;}
