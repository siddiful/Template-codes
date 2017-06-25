#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int giv[5][5]={{0,5,7,3,8},{15,0,INT_MAX,INT_MAX,3},{INT_MAX,5,0,7,INT_MAX},{10,INT_MAX,INT_MAX,0,13},{INT_MAX,5,17,0}};
int md=INT_MAX;
int tsp(int pos,int b){
if(b==((1<<5)-1))return giv[pos][0];
for(int i=0;i<5;i++){
if(giv[pos][i]!=INT_MAX && pos!=i && !(b&(1<<i)))
return min(md,giv[pos][i]+tsp(i,b|(1<<i)));
}
}

int main(){
int i,j,k,b=0;
printf("%d\n",tsp(1,0));
return 0;}
