#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
bitset<10000010> bs;
ll ss;
vector<ll>primes;
void sieve(ll n){
bs.set();
ss=n+1;bs[0]=bs[1]=0;
for(ll i=2;i<=ss;i++)
if(bs[i]){
for(ll j=i*i;j<=ss;j+=i)bs[j]=0;
primes.pb(i);
}}
vector<ll> pf;
vector<ll> primfact(ll n){
ll t=0;ll p=primes[t];
while(p*p <=n){
while(!(n%p)){n/=p;pf.pb(p);}
p=primes[++t];}
if(n!=1)pf.pb(n);
return pf;}

int main(){ll c;
sieve(10000000);
for(int i=0;i<3;i++){pf.clear();
scanf("%lld",&c);primfact(c);
for(ll j=0;j<pf.size();j++)printf("%lld ",pf[j]);printf("\n");}
return 0;}
