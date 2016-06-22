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

long long int n;

bool ans(long long int a[],long long int k)
{	
	// long long int flag = 0;
	// if(k==94)
	// 	flag  = 1;
	for(long long int i=0;i<n;i++)
	{
		if(i==0)
		{
			if((a[i])>k)
				return false;
			if(k<=0)
				return false;
			if((a[i])==k)
				k--;
		}
		else
		{
			if((a[i]-a[i-1])>k)
				return false;
			if(k<=0)
				return false;
			if((a[i]-a[i-1])==k)
				k--;
		}
		// if(flag)
		// 	cout<<k<<endl;
	}
	return true;
}


int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	long long int t,cases;
	cin>>t;
	cases = 1;
	while(t--)
	{	
		cout<<"Case "<<cases<<": ";
		cin>>n;
		long long int r[n];
		for(long long int i=0;i<n;i++)
			cin>>r[i];
		long long int lo = 0,hi = 100000000,mid,final;
		for(long long int i=0;i<50;i++)
		{	
			mid =(hi+lo)/2;
			if(ans(r,mid))
			{
				final = mid;
				hi = mid;
			}
			else
				lo = mid;
		}
		cout<<final<<endl;
		cases++;
	}
	return 0;
}  
