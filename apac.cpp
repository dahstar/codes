#include <bits/stdc++.h>
using namespace std;
string newline(string line)
{
	int c=0;  int m=line.length();
	while(c<m)
	{
	
		if((line[c]=='-')&&(line[c+1]=='>'))
		{
		  	if(c<line.length())
			line.erase(c,c);
		  line[c]='.'; 

			if(c+1<line.length())
			line.erase(c+1,c+1);
		}
		else

	  			c++;

	}
	return line;
}
int main(){
	string line="code";
	while(line!="")
	{
	  getline(cin,line);
		cout<<newline(line)<<endl;
	}
//new file tested
	return 0;
}




