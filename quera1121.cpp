#include<bits/stdc++.h>
using namespace std;
int main()
{		 
	int x,y,x1,y1;
	cin>>x>>y>>x1>>y1;	 string result="Right";
		if((x1>x)&&(y1>y))
			result="Right";
	   	  if((x1>x)&&(y1<y))
			result="Right";
		  if((x1<x)&&(y1>y))
			result="Left";
		  if((x1<x)&&(y1<y))
			  result="Left";
cout<<result<<endl;
	return 0;
}