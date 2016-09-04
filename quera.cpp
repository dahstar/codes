#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
int finadmax(int k,	 int a,b
int main()
{		 
	ll  n,k,mx,my;    vector< pair <ll,ll> > vect;

	cin>>n>>k;	 ll i=0;
	while(i++<n)
	{		 cin>>mx>>my;       
		vect.push_back( make_pair(mx,my) );


	}

	       sort(vect.begin(), vect.end());

  	  cout<<k;

	return 0;
}