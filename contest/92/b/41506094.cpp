#include <bits/stdc++.h>
using namespace std;
long long n,o;
int main(int argc, char ** argv)
{
    string s;
    cin>>s;
    while(s.size()>1)
    {
        if(s[s.size()-1]=='1')
        {
            for(int i=s.size()-1;i>=0;i--)
                if(s[i]=='1')
                    s[i]='0';
                else
                {
                    s[i]='1';
                    break;
                }
            o++;
        }
        if(s[s.size()-1]=='0')
        {
            s.erase(s.size()-1,1);
			o++;
        }
    }
    if(s[0]=='0')
		o++;
    printf("%d",o);
    return 0;
}
