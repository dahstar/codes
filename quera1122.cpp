#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
int main()
{		 
	ll  n,k,mx,my;    vector< pair <ll,ll> > vect;

	cin>>n>>k;	 ll i=0;
	while(i++<n)
	{		 cin>>mx>>my;       
		vect.push_back( make_pair(mx,my) );


	}

	       sort(vect.begin(), vect.end());

		 for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
		if(k-vect[i].first>=0)
		{
        k-= vect[i].first ;
       k+= vect[i].second ;
		}
		else
			break;
    }
  	  cout<<k;

	return 0;
}