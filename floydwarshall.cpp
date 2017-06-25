#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pp pair<int ,int>
#define ll int
using namespace std;

int main(){int n,a,b,c;
scanf("%d",&n);
int g[n+1][n+1],fw[n+1][n+1];
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
{scanf("%d",&g[i][j]);fw[i][j]=g[i][j];}
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
for(int k=1;k<=n;k++){
fw[i][j]=min(fw[i][j],g[i][k]+g[k][j]);
}}}
for(int j=1;j<=n;j++){
for(int k=1;k<=n;k++){
printf("%d ",fw[j][k]);}printf("\n");}
return 0;}
