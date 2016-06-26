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
	long long int b,s;
	long long int cases = 1;
	while(cin>>b>>s)
	{	
		long long int bacehlor[b],spinster[s];
		if(b==0&&s==0)
			break;
		long long int min = 22992929;
		for(long long int i=0;i<b;i++)
 		{
 			cin>>bacehlor[i];
 			if(min>bacehlor[i])
 				min = bacehlor[i];
 		}
		for(long long int i=0;i<s;i++)
			cin>>spinster[i];
		cout<<"Case "<<cases<<": ";
		if(b<=s)
			cout<<0;
		else
		{
			cout<<b-s<<" "<<min;
		}
		cout<<endl;
		cases++;
	}	
	return 0;
}  
