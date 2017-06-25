#include <bits/stdc++.h>
#define ll int
#define pb push_back
using namespace std;
vector<ll> p,rank;

ll findpar(ll i){
return ((p[i]==i)?i:(findpar(p[i])));}

bool isameset(ll i,ll j){return findpar(i)==findpar(j);}

void unions(ll i,ll j){
if(!isameset(i,j)){
ll x=findpar(i);ll y=findpar(j);
if(rank[x]>rank[y])p[y]=x;
else {p[x]=y;if(rank[x]==rank[y])rank[y]++;}}
}

int main(){
ll N=5;
for(ll i=0;i<N;i++){p.pb(i);rank.pb(0);}
unions(0,4);unions(1,4);unions(0,3);unions(2,4);unions(3,4);
printf("%d",findpar(3));
return 0;}
