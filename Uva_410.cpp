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
	long long int s,c;
	long long int cases = 1;
	while(scanf("%lld %lld",&c,&s)!=EOF)
	{	
		long long int specimen[2*c],origspecimen[s],temper;
		double avg=0.0 ;
		for(long long int i=0;i<s;i++)
		{
			cin>>specimen[i];
			origspecimen[i] = specimen[i];
			avg+=specimen[i];
		}
		avg = ((double)avg)/c;
		cout<<"Set #"<<cases<<endl;
		if(s<=c)
		{	
			double imbal = 0.0;
			long long int j =0;
			for(long long int i=0;i<c;i++)
			{
				cout<<" "<<i<<":";
				if(j<s)
				{	
					cout<<" ";
					cout<<origspecimen[j];
					imbal += abs(avg - (origspecimen[j]));
					j++;
				}
				else
					imbal+=avg;
				cout<<endl;
			}
			printf("IMBALANCE = %.5lf\n\n",imbal);

		}
		else
		{
			for(long long int i=s;i<2*c;i++)
			{
				specimen[i] = 0;
			}
			sort(specimen,specimen + (2*c));
			long long int j=0;
			double imbal = 0.0;
			long long int flag[s]={0},k=0,flagger[2*c]={0};
			for(long long int i=0;i<c;i++)
			{
				if(k==s)
					break;
				while((specimen[j]!=origspecimen[k] && j <(2*c) )|| flagger[j] == 1)
					j++;
				flag[k]= 1;
				flagger[j] = 1;
				cout<<" "<<i<<": ";
				if(specimen[j]!=0)
				{
					cout<<specimen[j];
				}
				if(specimen[(2*c)-(1+j)]!=0)
				{	
					if(specimen[j]!=0)
						cout<<" ";
					cout<<specimen[(2*c)- (1+j)];
				}
				flagger[(2*c)-(1+j)] = 1;
				long long int temper = 0;
				if(specimen[(2*c) - (1+j)]!=0)
				{
					while(specimen[(2*c) - (1+j)]!=origspecimen[temper]||flag[temper]!=0)
						temper++;
					flag[temper] = 1;
				}
				imbal += abs(avg - (specimen[j]+specimen[(2*c) - (1 + j)]));
				while(flag[k]==1 && k < s)
					k++;
				j=0;
				cout<<endl;
			}
			printf("IMBALANCE = %.5f\n\n",imbal);
		}
		cases++;
	}
	return 0;
}  
