#include <bits/stdc++.h>
using namespace std;
string s;
int n;
map<char,int>mp;
int main()
{
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<n;i++)
        mp[s[i]]++;
    for(int i=mp['n'];i>0;i--)
        printf("1 ");
    for(int i=mp['z'];i>0;i--)
        printf("0 ");
    return 0;

}
