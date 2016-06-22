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
#define eps 1e-9
#define _USE_MATH_DEFINES


int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	long long int n,m;
	while(cin>>n>>m&&n&&m)
	{	
		vector< vector<long long int> >vvi;
		vvi.resize(500);
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<m;j++)
			{
				long long int temper;
				cin>>temper;
				vvi[i].push_back(temper);
			}
		}
		long long int q;
		cin>>q;
		long long int rr,cc;
		while(q--)
		{
			long long int l,r;
			cin>>l>>r;
			long long int ans = 0;
			for(long long int i=0;i<n;i++)
			{
				vector<long long int>::iterator low = lower_bound(vvi[i].begin(),vvi[i].end(),l);
				long long int temp = low-vvi[i].begin();
				for(long long int j=ans;j<n;j++)
				{
					if(temp+j>=m||j+i>=n||vvi[j+i][temp+j]>r)
						break;
					if(j+1>ans)
						ans=j+1;
				}
			}
			cout<<ans<<endl;
		}
		cout<<"-"<<endl;
	}
	return 0;
}  
