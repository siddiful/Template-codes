#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pp pair<int ,int>
using namespace std;
vector<int> g[100000];vector<int> p,vis;
void bfs(int s,int d){
queue<int> q;q.push(s);p[s]=s;
while(!q.empty()){
int t=q.front();q.pop();vis[t]=1;if(t==d)break;
for(int i=0;i<g[t].size();i++){
if(!vis[g[t][i]]){p[g[t][i]]=t;q.push(g[t][i]);}
}
}return;}

void prinpar(int d){
if(p[d]!=d){prinpar(p[d]);printf("%d ",d);}}

int main(){int a,b,n,m;
scanf("%d %d",&n,&m);//n-vertices m-edges
p.assign(n+1,0);vis.assign(n+1,0);
for(int i=0;i<m;i++){
scanf("%d %d",&a,&b);g[a].pb(b);}
bfs(2,7);
prinpar(7);
return 0;
}
