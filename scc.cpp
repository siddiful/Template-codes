#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
vector<int>g[100000],dnm,dlw,s,vis;
int n,m,i,j,k,numc=0,numsc=0;

void tardfs(int u){
dnm[u]=dlw[u]=numc++;
s.pb(u);vis[u]=1;
for(j=0;j<g[u].size();j++){
if(dnm[g[u][j]]==-1)tardfs(g[u][j]);
if(vis[g[u][j]])
dlw[u]=min(dlw[u],dlw[g[u][j]]);}
if(dlw[u]==dnm[u]){
printf("SCC %d: ",++numsc);
while(1){
int v=s.back();s.pop_back();vis[v]=0;
printf(" %d",v);
if(u==v)break;
}printf("\n");}
}

int main(){
scanf("%d",&n);//edges
scanf("%d",&m);//vertices
for(i=0;i<n;i++){
scanf("%d %d",&j,&k);g[j].pb(k);
}
dnm.assign(m,-1);dlw.assign(m,0);vis.assign(m,0);
for(i=0;i<m;i++){
if(dnm[i]==-1)tardfs(i);}
return 0;}


