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

#define up 1ll<<32

int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	long long int n,l,u;
	while(scanf("%lld %lld %lld",&n,&l,&u)!=EOF)
	{	
		long long int m =0;
		u++;
		l++;
		long long int temp;
		for(long long int i= up;i>0;i>>=1)
		{
			temp = m|i;
			if(((~n & i)&&(temp < u))||(temp<l))
			{	
				// cout<<m<<"  "<<temp<<"  ";
				m = temp;
			}
		}
		cout<<m<<endl;

	}	
	return 0;
}  
