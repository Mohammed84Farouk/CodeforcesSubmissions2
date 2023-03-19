#include <bits/stdc++.h>
using namespace std;
string s,t;
int i;
int main(int argc, char ** argv)
{
    cin>>s>>t;
    for(int j=0;j<t.size();)
    {
        if(s[i]==t[j])
            i++;
        j++;
    }
    printf("%d",i+1);
}
