#include <bits/stdc++.h>
using namespace std;
string s;
int n;
map<char,int>mp;
int main()
{
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            printf("%c", s[i]);
            if(i!=0)
                i++;
        }
        printf("\n");
    }
    return 0;

}
