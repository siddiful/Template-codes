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
for(ll j=i*i;j<=ss;j+=i){bs[j]=0;
primes.pb(i);
}}

bool isprime(ll n){
if(n<=ss)return bs[n];//return upto 1e7
for(int i=0;i<primes.size();i++){//for further primes
if(!(n%primes[i]))return false;}
return true;	
}

int main(){
sieve(10000000);printf("%lld\n",primes.size());
//printf("%d\n",isprime(2147483647LL));
//printf("%d\n",isprime(136117223861LL));
return 0;}
