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


int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	long long int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		long long int dragon[n],knight[m];
		for(long long int i=0;i<n;i++)
			cin>>dragon[i];
		for(long long int i=0;i<m;i++)
			cin>>knight[i];
		long long int ans = 0,i=0,j=0;
		sort(dragon,dragon+n);
		sort(knight,knight+m);
		while(i<n&&j<m)
		{
			while(dragon[i] > knight[j] && j < m)
				j++;
			if(j==m)
				break;
			ans+=knight[j];
			i++;
			j++;
		}
		if(i==n)
			cout<<ans<<endl;
		else
			cout<<"Loowater is doomed!"<<endl;
	}
	return 0;
}  
