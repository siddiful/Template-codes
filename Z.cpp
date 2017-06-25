#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void box(string s,int Z[]);
void zsearch(string pat,string txt){
	string s=pat+"$"+txt;
	int n=s.length();
	int Z[n];
	box(s,Z);
	for(int i=0;i<n;i++){
		if(Z[i]==pat.length())
		cout<<"Found at "<<(i-6)<<" position\n";
	}
}

void box(string s,int Z[])
{
	int n=s.length();
	int L=0,R=0,k;
	for(int i=1;i<n;i++){
		if(i>R){
			L=R=i;
			while(R<n && s[R-L]==s[R])
			R++;
			Z[i]=R-L;
			R--;
		}
		else{
			k=i-L;
			if(Z[k]<R-i+1){
				Z[i]=Z[k];
			}
			else{
				L=i;
			while(R<n && s[R-L]==s[R])
			R++;
			Z[i]=R-L;
			R--;
			}
		}
	}
}

int main()
{
	string txt="Siddharth Shukla";
	string pat="S";
	zsearch(pat,txt);
	return 0;
}
