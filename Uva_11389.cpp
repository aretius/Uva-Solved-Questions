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
	long long int n,d,r;
	while(cin>>n>>d>>r)
	{
		if(n==0&&r==0&&d==0)
			return 0;
		long long int morning[n],afternoon[n];
		for(long long int i=0;i<n;i++)
			cin>>morning[i];
		for(long long int i=0;i<n;i++)
			cin>>afternoon[i];
		sort(morning,morning+n);
		sort(afternoon,afternoon+n);
		long long int ans = 0;
		for(long long int i=0;i<n;i++)
		{
			if(morning[i]+afternoon[n-(1+i)]>d)
				ans+=r*(morning[i]+afternoon[n-(1+i)]-d);
		}
		cout<<ans<<endl;
	}
	return 0;
}  
