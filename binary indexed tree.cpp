#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[1000000],bt[1000000];
ll getSum(ll bt[],ll in){
	ll sum=0;
	in++;
	while(in>0){
		sum+=bt[in];
		in-=(in & (-in));
	}
	return sum;
}

void update(ll bt[],ll n,ll in,ll val){
	in++;
	while(in<=n){
		bt[in]+=val;
		in+=(in & (-in));
	}
}

int main(){
cout<<"Enter no. of elements:";
ll n;cin>>n;
for(ll i=0;i<n;i++){
	cin>>a[i];
}
for(ll i=1;i<=n;i++)
bt[i]=0;
bt[0]=0;
for(ll i=0;i<n;i++){
	update(bt,n,i,a[i]);
}
ll p,q;
cout<<"Enter starting n ending index";
cin>>p>>q;
cout<<getSum(bt,q)-getSum(bt,p-1);
return 0;}

