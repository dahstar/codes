//https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm////pnht/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   // freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    int t,n,m,in;	  string res="YES";
	vector<int> boys,girls;
	cin>>t;
	while(t--)
	{	res= "YES";
		cin>>m>>n;
		while(m-->0)
		{
			cin>>in	;
			boys.push_back(in);
		}
		 while(n-->0)
		{
			cin>>in	;
			girls.push_back(in);
		}
		  sort(boys.begin(), boys.end());

		 sort(girls.begin(), girls.end());
		 for(int i=0;i<boys.size();i++)
		  if(boys[i]<=girls[i])
		  { res="NO";break;}
				   cout<<res<<endl;
		 boys.clear();
		 girls.clear();

	 }

	
    return 0;
}
