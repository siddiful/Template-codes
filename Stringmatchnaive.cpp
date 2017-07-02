#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;

int main(){
	string T="to kill a mockingbird and king";
	string P="king";
	ll n=T.length(),m=P.length();
	for(int i=0;i,n;i++){
		bool found=true;
		for(int j=0;j<m && found;j++)
			if(i+j>=n ||P[j]!=T[i+j])
				found=false;
			if(found)printf("Item found at %d\n",i);
	}
	return 0;
}