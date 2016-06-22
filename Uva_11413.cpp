#include <iostream>
#include <string.h>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <cstdio>
#include <cstring>
#include <stack>
#include <fstream>
 
using namespace std;
 
#define MOD 1000000007
#define eps 1e-15
#define _USE_MATH_DEFINES

long long int n,m;

bool ans(long long int a[],long long int cap)
{	
	long long int used = 0,curr=0;
	for(long long int i=0;i<n;i++)
	{
		if(a[i]>cap)
			return false;
		if(a[i]+curr>cap)
			curr =0;
		if(curr == 0)
			used++;
		curr+=a[i];
		if(used > m)
			return false;
	}
	return true;
}


int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// long long int n,m;
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{	
		long long int a[n];
		for(long long int i=0;i<n;i++)
			cin>>a[i];
		long long int lo = 0,hi = 1000000000,mid,final;
		while(hi>lo)
		{
			mid = (hi+lo)/2;
			if(ans(a,mid))
			{	
				final = mid;
				hi = mid;
			}
			else
				lo = mid+1;
		}
		cout<<final<<endl;
	}
	return 0;
}  
