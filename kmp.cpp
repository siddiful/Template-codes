#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define MA 100010
using namespace std;
string T,P;
int b[MA],n,m;

void kmpre(){
	int i=0,j=-1;b[0]=-1;
	while(i<m){
		while(j>=0 && P[i]!=P[j])j=b[j];
		i++;j++;
		b[i]=j;
	}
}

void kmp(){
	int i=0,j=0;
	while(i<n){
		while(j>=0 && T[i]!=P[j])j=b[j];
		i++;j++;
		if(j==m){
			printf("pattern found at %d.\n",i-j);
			j=b[j];
		}
	}
}
int main(){
	n=51;m=13;
	getline(cin,T);
	getline(cin,P);
			kmpre();kmp();
	return 0;
}

