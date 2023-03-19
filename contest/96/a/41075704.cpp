#include <bits/stdc++.h>
using namespace std;
int c=1;
int main(int argc, char ** argv)
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
            c++;
        else c=1;
        if(c==7)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
