#include <bits/stdc++.h>
using namespace std;
int k;
string s;
int main(int args, char ** argv)
{
    cin>>s;
    scanf("%d",&k);
    for(int i=0;i<s.size()&&k;i++)
    {
        int lrg=i;
        for(int j=i+1;j<s.size()&&j-i<=k;j++)
            if(s[lrg]<s[j])
                lrg=j;
        for(int q=lrg;q>i;q--)
        {
            swap(s[q],s[q-1]);
            k--;
        }
    }
    cout<<s;
    return 0;
}
