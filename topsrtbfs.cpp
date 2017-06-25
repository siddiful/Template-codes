#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pp pair<int,int>
using namespace std;
vector< pp >g[100000];
priority_queue<int> q;vector<int> t;
int main(){int n,m,i,j,k,a,b;
scanf("%d",&m);//no. of nodes including 0 as starting
scanf("%d",&n);int id[10000]={0};
for(i=0;i<n;i++){
scanf("%d %d %d",&a,&b,&k);
g[a].pb(mp(b,k));id[b]++;}
for(int i=0;i<m;i++){
if(!id[i])q.push(i);}

while(!q.empty()){
j=q.top();q.pop();t.pb(j);
for(i=0;i<g[j].size();i++){
id[g[j][i].first]--;
if(!id[g[j][i].first])q.push(g[j][i].first);
}
}
for(i=0;i<t.size();i++)
printf("%d ",t[i]);
return 0;}
