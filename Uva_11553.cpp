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
#define _USE_MATH_DEFINES

long long int calcdist(long long int x,long long int y)
{
	long long int x1,x2,y1,y2;
	x1 = x/5;
	x2 = y/5;
	y1 = x%5;
	y2 = y%5;

	return abs(x1-x2)+abs(y1-y2);  
}

int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n][n];
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		long long int ans = 99999999;
		long long int finale[] = {0,1,2,3,4,5,6,7};
		do
		{
			long long int temp = 0;
			for(long long int i=0;i<n;i++)
			{
				temp+=a[i][finale[i]];
			}
			ans = min(ans,temp);
		}while(next_permutation(finale,finale+n));
		cout<<ans<<endl;
	}
	return 0;
}  
