#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define pp pair<int,int>
#define mp make_pair
using namespace std;

vector<ll> p,rank;
vector<pair<ll,pp > >g;
ll findpar(ll i){
return ((p[i]==i)?i:(findpar(p[i])));}

bool isameset(ll i,ll j){return findpar(i)==findpar(j);}

void unions(ll i,ll j){
if(!isameset(i,j)){
ll x=findpar(i);ll y=findpar(j);
if(rank[x]>rank[y])p[y]=x;
else {p[x]=y;if(rank[x]==rank[y])rank[y]++;}}
else return;
}

int main(){ll N,M,i,j,k,a,b,c;
ll mc=0;
scanf("%lld %lld",&N,&M);
p.assign(N,0);rank.assign(N,0);
for(i=0;i<N;i++){p[i]=i;rank[i]=0;}
for(i=0;i<M;i++){
scanf("%lld %lld %lld",&a,&b,&c);g.pb(mp(a,mp(b,c)));}
sort(g.begin(),g.end());
for(i=0;i<M;i++){
if(!isameset(g[i].second.first,g[i].second.second)){
mc+=g[i].first;unions(g[i].second.first,g[i].second.second);
}
}
printf("%lld\n",mc);
return 0;}
