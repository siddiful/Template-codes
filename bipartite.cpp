#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pp pair<int,int>
using namespace std;
bool isbip=true;
int color[100000]={INT_MAX};
vector< pp >g[100000];
void bipartitebfs(int s){
queue<int>q;isbip=true;q.push(s);color[s]=0;
while(!q.empty() && isbip){
int a=q.front();q.pop();
for(int i=0;i<g[a].size();i++){
if(color[g[a][i].first]==INT_MAX){color[g[a][i].first]=1-color[a];q.push(g[a][i].first);}
else if(color[g[a][i].first]==color[a]){isbip=false;break;}}
}
}

int main(){int n,m,i,j,k,a,b;
scanf("%d",&m);//no. of nodes including 0 as starting
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d %d",&a,&b,&k);
g[a].pb(mp(b,k));}
bipartitebfs(2);
if(isbip)printf("YES\n");
else printf("NO\n");
return 0;}
