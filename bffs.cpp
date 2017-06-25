#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define mp make_pair
#define pp pair<int,int>
using namespace std;
int m,n,p;char b[21][21];
bool bfs(int m,int n,int x,int y){
queue< pp > q;q.push(mp(x,y));int vis[m][n]={0};
while(!q.empty()){
pp t=q.front();q.pop();int a=t.first,c=t.second;vis[a][c]=1;
if((a!=x || c!=y)&&(a==0 || a==m-1 ||c==0 ||c==n-1))return true;
if((a>0) && (b[a-1][c]=='.') && (!vis[a-1][c]))q.push(mp(a-1,c));
if((a<m-1) && (b[a+1][c]=='.') && (!vis[a+1][c]))q.push(mp(a+1,c));
if(c>0 && b[a][c-1]=='.' && !vis[a][c-1])q.push(mp(a,c-1));
if(c<n-1 && b[a][c+1]=='.' && !vis[a][c+1])q.push(mp(a,c+1));
}
return false;
}

int main(){
int t,i,j,k,x,y;
scanf("%d",&t);
while(t--){x=-1;y=-1;string s;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{cin>>s;
for(j=0;j<n;j++){
b[i][j]=s[j];}}
if(m==1 && n==1)printf("invalid\n");
else{
k=0;
for(i=0;i<n;i++){if((b[0][i]=='.' ))k++;
if(m>1 && (b[m-1][i] =='.'))k++;
if(b[0][i]=='.'){x=0;y=i;}
if(m>1 && (b[m-1][i]=='.')) {x=m-1;y=i;}}
if(m>2){
for(i=1;i<m-1;i++){
if((b[i][0]=='.'))k++;
if(n>1 && (b[i][n-1]=='.'))k++;
if(b[i][0]=='.'){x=i;y=0;}
if(n>1 && (b[i][n-1]=='.')){x=i;y=n-1;}}}
if(k!=2)printf("invalid\n");
else{
if(bfs(m,n,x,y))printf("valid\n");
else printf("invalid\n");
}}
}
return 0;}
