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

vector< vector<long int> > vvi;
string a,b;

int main()
{	
	// ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	vvi.resize(123);		// Refer to ascii table
	cin>>a;
	for(long long int i=0;i<a.length();i++)
	{
		vvi[a[i]].push_back(i);
	}
	long long int n;
	cin>>n;
	while(n--)
	{
		cin>>b;
		long long int end_ind = - 1,start_ind = 0;
		bool poss = true;
		for(long long int i=0;i<b.length()&&poss;i++)
		{
			vector< long int >::iterator it = upper_bound(vvi[b[i]].begin(),vvi[b[i]].end(),end_ind);
			end_ind = it - vvi[b[i]].begin();
			if(it == vvi[b[i]].end())
				poss = false;
			end_ind = vvi[b[i]][end_ind];
			if(i==0)
				start_ind = end_ind;
		}
		if(poss)
			cout<<"Matched "<<start_ind<<" "<<end_ind<<endl;
		else
			cout<<"Not matched"<<endl;
	}
	return 0;
}  
