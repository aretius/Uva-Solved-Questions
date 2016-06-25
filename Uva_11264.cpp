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
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int coins[n];
		for(long long int i=0;i<n;i++)
			cin>>coins[i];
		long long int ans = 0;
		for(long long int i=0;i<n;i++)
		{	
			long long int temp_sum = 0,count =0;
			for(long long int j=i;j<n;j++)
			{
				if(j!=n-1)
				{
					if(temp_sum+coins[j] < coins[j+1])
					{
						count++;
						temp_sum+=coins[j];
					}
				}
				else
				{
					if(temp_sum+coins[j]<(2*coins[j]))
					{
						count++;
					}
				}
			}
			ans = max(ans,count);
		}
		cout<<ans<<endl;
	}	
	return 0;
}  
