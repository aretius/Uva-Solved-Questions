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


long long int p,q,r,s,t,u;

double ans(double mid)
{
	double a = p*exp(-mid);
	double b = q*sin(mid);		
	double c = r*cos(mid);
	double d = s*tan(mid);
	double e = t*pow(mid,2.0f) + u;
	return a+b+c+d+e;
}


int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	
	while(scanf("%lld %lld %lld %lld %lld %lld",&p,&q,&r,&s,&t,&u)!=EOF)
	{	
		long long int flag = 0,count =0;
		long double lo = 0.0000;
		long double hi = 1.0;
		double mid,mid_val;
		while(fabs(hi-lo)>eps)
		{	
			mid = (hi + lo)/2.0;
			mid_val = ans(mid);
			double hi_val = ans(hi);
			if((hi_val<0&&mid_val>0)||(hi_val<=0 && hi_val>mid_val)||(hi_val>=0 && mid_val>hi_val))
				lo = mid;
			else
				hi = mid;
		}
		if(abs(mid_val)<=0.00005f)
			printf("%1.4f\n",mid);
		else
			cout<<"No solution"<<endl;
	}
	return 0;
}  
