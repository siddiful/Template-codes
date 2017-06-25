#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long int
ll n,m,j,k;
vector<int> lis;
void simpleSieve(int limit, vector<int> &prime,int l)
{
    bool mark[limit+1];
    memset(mark, true, sizeof(mark));
 
    for (int p=2; p*p<limit; p++)
    {
         if (mark[p] == true)
        {
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }
 
    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true )
        {
            prime.push_back(p);
            if(p>=l)
            lis.push_back(p);
        }
    }
}
 
void ss(int r,int l)
{
    int limit = floor(sqrt(r))+1;
    vector<int> prime;  
    simpleSieve(limit, prime,l); 
    int low  = limit;
    int high = 2*limit;
 
    while (low <= r)
    {
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));
 
        for (int i = 0; i < prime.size(); i++)
        {
            int loLim = floor(low/prime[i]) * prime[i];
            if (loLim < low)
                loLim += prime[i];
            for (int j=loLim; j<=high; j+=prime[i])
                mark[j-low] = false;
        }
 
        for (int i = low; i<=high; i++)
            if (mark[i - low] == true && i>=l)
                lis.push_back(i);
 
        low  = low + limit;
        high = high + limit;
        if (high >= r) high = r;
    }
}

int main()
{cin>>n>>m;
ss(m,n);
for(int i=0;i<=lis.size()-1;i++)
cout<<lis[i]<<" ";
	return 0;
}
