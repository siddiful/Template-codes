#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pp pair<int,int>
using namespace std;
vector<pp> g[100000];int vis[100000];
vector<int> t;
void ts(int s){
vis[s]=1;
for(int i=0;i<g[s].size();i++){
if(!vis[g[s][i].first])ts(g[s][i].first);}
t.pb(s);
}

int main(){int n,i,j,k,a,b;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d %d",&a,&b,&k);
g[a].pb(mp(b,k));}
ts(1);
reverse(t.begin(),t.end());
for(i=0;i<t.size();i++)
printf("%d ",t[i]);
return 0;}
