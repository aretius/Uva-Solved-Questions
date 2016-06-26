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
#define MAX 10110
#define eps 1e-15
#define _USE_MATH_DEFINES


int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	long long int n;
	while(cin>>n&&n)
	{	
		long long int a[n],maxx=0;
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			maxx+=a[i];
		}
		if(maxx==0)
			cout<<0<<endl;
		else
		{
			long long int k =0;
			while(a[k]==0)
			{
				k++;
			}
			long long int temp_sum =0,flag=0;
			for(long long int i=k;i<n;i++)
			{
				if(a[i]!=0)
				{	
					if(flag==0)
					{
						flag=1;
						cout<<a[i];
					}
					else
					{
						cout<<" "<<a[i];
					}
				}
				temp_sum+=a[i];
				if(temp_sum==maxx)
					break;
			}
			cout<<endl;
		}

	}	
	return 0;
}  
