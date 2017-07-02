#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
string s1;
int len(int l,int r){
	if(l==r)return 1;
	else if(l+1==r) {
		if(s1[l]==s1[r])return 2;
		else return 1;
	}
	else{
		if(s1[l]==s1[r])return 2+len(l+1,r-1);
		else return max(len(l+1,r),len(l,r-1));
	}
}

int main(int argc, char const *argv[])
{
	int i,j,k;
	cin>>s1;
	printf("%d\n",len(0,s1.length()-1));
	return 0;
}