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

long long int bag[MAX];

int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	long long int n,cases= 0;
	while(cin>>n&&n)
	{	
		if(cases)
			cout<<endl;
		memset(bag,0,sizeof(bag));
		for(long long int i=0;i<n;i++)
			cin>>bag[i];
		sort(bag,bag+n);
		long long int count = 1,max_count = 0;
		for(long long int i=0;i<n;i++)
		{
			if(bag[i]==bag[i+1])
			{	
				count++;
				continue;
			}
			if(count>max_count)
			{
				max_count = count;
			}
			count = 1;
		}
		cout<<max_count<<endl;
		for(long long int i=0;i<max_count;i++)
		{
			long long int first =1 ;
			for(long long int j=i;j<n;j+=max_count)
			{
				if(first)
				{
					first=0;
				}
				else
					cout<<" ";
				cout<<bag[j];
			}
			cout<<endl;
		}
		cases++;
	}	
	return 0;
}  
