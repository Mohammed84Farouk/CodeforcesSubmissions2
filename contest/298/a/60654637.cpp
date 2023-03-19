#include <bits/stdc++.h>
using namespace std;
int n,f,e;
string s;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
	for(int i=0;i<n;i++)
    {
        if(s[i]=='R'&&!f)
            f=i+1;
        if(s[i]=='L'&&!e)
            e=i;
        if(s[i]=='R'&&s[i+1]=='L'&&!e)
            e=i+1;
        if(s[i]=='R'&&s[i+1]=='.'&&!e)
            e=i+2;
        if(s[i]=='L'&&s[i+1]=='.'&&!f)
            f=i+1;
    }
    printf("%d %d",f,e);
    return 0;
}