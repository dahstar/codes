#include<bits/stdc++.h>
using namespace std;   
int main()
{ 
	string s, t;
    cin>>s>>t;
    int len = 0, pos=0;
    while(len<s.length() && pos<t.length()) {

        /* if the letter at position len matches. */ 
        if(s[len]==t[pos]) {
            len++;
        }

        pos++;
    }
    cout<<len<<endl;
	return 0;
}






