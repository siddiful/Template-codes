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

ll etf(ll n){
int t=0,pf=primes[t];ll ans=n;
while(pf*pf<=n){
if((n%pf)==0)ans-=ans/pf;
while((n%pf)==0)n/=pf;
pf=primes[++t];
}
if(n!=1)ans-=ans/n;
return ans;
}

int main(){
sieve(10000000);
printf("%lld",etf(36));
return 0;}
