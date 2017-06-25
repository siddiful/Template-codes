#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pp pair<int ,int>
#define ll int
using namespace std;
vector< pp > g[100000];
vector<ll> dist;
int main(){int a,b,c,n,m;
scanf("%d %d",&n,&m);//n-vertices m-edges
for(int i=0;i<m;i++){
scanf("%d %d %d",&a,&b,&c);g[a].pb(mp(b,c));}
int s=1;dist.assign(n+1,1000);dist[s]=0;
for(int i=0;i<g[s].size();i++)dist[g[s][i].first]=g[s][i].second;
for(int i=1;i<=n;i++){
if(i==s)continue;
for(int j=1;j<=n;j++){
for(int k=0;k<g[j].size();k++){
if(g[j][k].first==i)
dist[i]=min(dist[i],dist[j]+g[j][k].second);
}}}
for(int i=1;i<dist.size();i++)
printf("%d ",dist[i]);

return 0;}
