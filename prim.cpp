#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define pp pair<int,int>
#define mp make_pair
using namespace std;
vector<pp>g[100002];vector<int> add;
priority_queue< pp >pq;

void process(int q){
add[q]=1;
for(int i=0;i<g[q].size();i++){
if(!add[g[q][i].first])
pq.push(mp(-g[q][i].second,-g[q][i].first));}
}

int main(){int n,m,i,j,k,a,b,c,mc=0;
scanf("%d %d",&n,&m);//n-edges m-vertices
for(i=0;i<n;i++){
scanf("%d %d %d",&c,&a,&b);g[a].pb(mp(b,c));}
add.assign(m,0);process(0);
while(!pq.empty()){
pp t=pq.top();pq.pop();j=-t.first;k=-t.second;
if(!add[k]){mc+=j;process(k);}
}
printf("mc is %d\n",mc);
return 0;}
