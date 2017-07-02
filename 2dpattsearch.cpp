#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define MA 1000
using namespace std;
int n,m,i,j,k,b;char s[MA];
vector<vector<char> >t;
bool bt(int in,int i,int j){
	if(in==6)return true;
	if(j+1<m && t[i][j+1]==s[in+1])bt(in+1,i,j+1);
	if(j>0 && t[i][j-1]==s[in+1])bt(in+1,i,j-1);
	if(i+1<n && t[i+1][j]==s[in+1])bt(in+1,i+1,j);
	if(i>0 && t[i-1][j]==s[in+1])bt(in+1,i-1,j);
	if(j+1<m && i+1<n && t[i+1][j+1]==s[in+1])bt(in+1,i+1,j+1);
	if(j+1<m && i-1>=0 && t[i-1][j+1]==s[in+1])bt(in+1,i-1,j+1);
	if(j-1>=0 && i+1<n && t[i+1][j-1]==s[in+1])bt(in+1,i+1,j-1);
	if(j-1>=0 && i-1>=0 && t[i-1][j-1]==s[in+1])bt(in+1,i-1,j-1);
	return false;
}

int main(){char l;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){vector<char> v;
		for(j=0;j<m;j++){
			scanf("%c",&c);v.pb(c);
		}
		t.pb(v);
	}
	scanf("%s",s);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(t[i][j]==s[0] && bt(0,i,j))
				printf("Found at x=%d y=%d.\n",i,j);
		}
	}
	return 0;
}