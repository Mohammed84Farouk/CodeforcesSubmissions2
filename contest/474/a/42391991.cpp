#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s,a="qwertyuiopasdfghjkl;zxcvbnm,./";
char c;
int main(int argc, char ** argv)
{
	cin>>c>>s;
	for(int i=0;i<s.size();i++)
        for(int j=0;j<=a.size();j++)
            if(s[i]==a[j])
                if(c=='R')
                    {cout<<a[j-1];break;}
                else
                    {cout<<a[j+1];break;}
	return 0;
}