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
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	long long int t;
	cin>>t;
	while(t--)
	{	
		long long int a[26]={0};
		long long int n;
		cin>>n;
		long long int min_dist = 2500000;
		long long int ans[5];
		for(long long int i=0;i<n;i++)
		{
			long long int x,y,pop;
			cin>>x>>y>>pop;
			a[x*5+y] = pop;
		}
		for(long long int i=0;i<25-4;i++)
		{
			for(long long int j=i+1;j<25-3;j++)
			{
				for(long long int k=j+1;k<25-2;k++)
				{
					for(long long int l=k+1;l<25-1;l++)
					{
						for(long long int m=l+1;m<25;m++)
						{
							long long int temp[5] ={i,j,k,l,m};
							long long int dsum = 0;
							for(long long int v= 0;v<25;v++)
							{
								if(a[v]>0)
								{
									long long int d = calcdist(v,temp[0]);
									for(long long int z = 1;z<5;z++)
									{
										long long int temper = calcdist(v,temp[z]);
										if(temper<d)
											d=temper;
									}
									d= d*a[v];
									dsum+=d;
								}
							}
							if(dsum<min_dist)
							{
								min_dist = dsum;
								ans[0]=temp[0];
								ans[1]=temp[1];
								ans[2]=temp[2];
								ans[3]=temp[3];
								ans[4]=temp[4];
							}
						}
					}
				}
			}
		}
		for(long long int i=0;i<5;i++)
		{
			if(i>0)
				cout<<" ";
			cout<<ans[i];
		}
	cout<<endl;
	}
	return 0;
}  
