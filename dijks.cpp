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
dist.assign(n+1,INT_MAX);
int s=3;dist[s]=0;
priority_queue<pp,vector< pp >,greater< pp > > pq;
pq.push(mp(0,s));
while(!pq.empty()){
pp t=pq.top();pq.pop();
if(t.first>dist[t.second])continue;
for(int i=0;i<g[t.second].size();i++){
if(dist[g[t.second][i].first]>dist[t.second]+g[t.second][i].second)
{dist[g[t.second][i].first]=dist[t.second]+g[t.second][i].second;
pq.push(mp(dist[g[t.second][i].first],g[t.second][i].first));}
}
}
for(int d=1;d<=dist.size();d++)
printf("%d ",dist[d]);
return 0;}

