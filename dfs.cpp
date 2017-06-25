#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
bool vis[1000000];
ll n,m;
vector<int> g[1000000];

void dfs(int c){
vis[c]=true;
printf("%d ",c);
for(int i=0;i<g[c].size();i++){
if(!vis[g[c][i]])dfs(g[c][i]);}
return;
}

int main(){
printf("No.of edges:");
scanf("%lld",&n);int a,b,c;
for(int i=1;i<=n;i++)
{scanf("%d %d",&a,&b);g[a].pb(b);g[b].pb(a);}
printf("Enter starting vertex: ");
scanf("%d",&c);
dfs(c);
return 0;}
