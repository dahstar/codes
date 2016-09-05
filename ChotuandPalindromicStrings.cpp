#include <bits/stdc++.h>

using namespace std;
bool ispal(string s)
{	

	if (s == string(s.rbegin(), s.rend())) 
		return true	 ;
		  	return false;

}
int main()
{
   	string s,s1;		int t;
	cin>>t;
	while(t--)
	{
			cin>>s>>s1;
		 if(ispal(s+s1)||(ispal(s1+s)))
			 cout<<"YES";
		 else
			 cout<<"NO";
	}
	 ;
    return 0;
}







