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
	long long int cases = 1;
	while(t--)
	{
		long long int n;
		cin>>n;
		string a;
		cin>>a;
		long long int ans = 0;
		long long int flag[n]={0};
		for(long long int i=0;i<n;i++)
		{
			if(a[i]=='.')
			{
				if(flag[i]==0)
				{
					flag[i]=1;
					flag[(i+1)%n]=1;
					flag[(i+2)%n]=1;
					ans++;
				}
			}
		}
		cout<<"Case "<<cases<<": ";
		cout<<ans<<endl;
		cases++;
	}
	return 0;
}  
