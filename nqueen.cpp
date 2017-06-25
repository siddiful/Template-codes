#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int row,plac[8],p=0;

bool poss(int c,int r){
for(int i=0;i<c;i++){
if(plac[i]==r || (abs(plac[i]-r)==abs(i-c)))
return false;
}
return true;
}

void queen(int c){
if(c==8){p++;
for(int i=0;i<8;i++)
printf("%d ",plac[i]);printf("\n");
}
for(int r=0;r<8;r++){
if(poss(c,r)){
plac[c]=r;queen(c+1);}}
}

int main(){
memset(plac,0,sizeof(plac));
queen(0);
printf("%d\n",p);
return 0;}
