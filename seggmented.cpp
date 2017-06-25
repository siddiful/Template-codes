#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
ll a[100],tree[400];

void build(int pos,int l,int r){
if(l==r)tree[pos]=a[l];
else{
build((pos<<1),l,(l+r)/2);
build((pos<<1)+1,(l+r)/2 +1,r);
tree[pos]=max(tree[pos<<1],tree[(pos<<1) +1]);//Apply fn. here
}
}

void update(int pos,int l,int r,int id,int val){
if(l==r){a[l]=val;tree[pos]=val;}
else{int mid=(l+r)/2;
if(id>=l && id<=mid)
update(pos<<1,l,mid,id,val);
else update((pos<<1)+1,mid+1,r,id,val);
tree[pos]=max(tree[pos<<1],tree[(pos<<1)+1]);
}
}

int query(int pos,int st,int en,int l,int r){
if(st>r || en<l)return INT_MIN;
if(st>=l && en<=r)return tree[pos];
int mid=(st+en)/2;
int p1=query(pos<<1,st,mid,l,r);
int p2=query((pos<<1)+1,mid+1,en,l,r);
return max(p1,p2);
}

int main(){
printf("Enter n:");
scanf("%lld",&n);
for(int i=0;i<n;i++)
scanf("%lld",&a[i]);
build(1,0,n-1);
cout<<"d1\n";
update(1,0,n-1,1,988);
cout<<query(1,0,n-1,1,5);
return 0;}
