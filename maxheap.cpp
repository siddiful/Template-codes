#include <bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;
int n,m,i;
class heap{
vector<int> v;
int par(int in);
void swap(int*a,int*b);
public:
void makearr();
void max_heap();
void min_heap();
void reheap();
void del();
};

int heap::par(int in){
if((in%2)==0)return (i>>1)-1;
else return (i>>1);
}

void heap::swap(int*a,int*b){
int x=*a;*a=*b;*b=x;}

void heap::max_heap(){
int c=v.size()-1;
int p=par(c);
while(v[c]>v[p] && c>=0 && p>=0){
swap(&v[c],&v[p]);
p=par(p);c=p;
}
}

void heap::min_heap(){
int c=v.size()-1;
int p=par(c);
while(v[p]>v[c] && c>=0 && p>=0){
swap(&v[c],&v[p]);
p=par(p);c=p;
}
}

void heap::makearr(){
printf("no. of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&m);v.pb(m);max_heap();//min_heap();
}
}

void heap::reheap(){
int p=0;int c;(max(v[2*p+1],v[2*p+2])==v[2*p+1])?(c=2*p+1):(c=2*p+2);
while(c<v.size()){
swap(&v[p],&v[c]);p=c;
(max(v[2*p+1],v[2*p+2])==v[2*p+1])?(c=2*p+1):(c=2*p+2);
}
}

void heap::del(){
printf("%d ",v[0]);
v[0]=v[v.size()-1];v.erase(v.begin()+v.size()-1);reheap();//min_heap();
}


int main(){
heap h;
h.makearr();
printf("Enter no. of deletions: ");
scanf("%d",&m);
while(m--){
h.del();
}
return 0;}


