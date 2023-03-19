/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7;
void sieve(int n);
string s[5];
bool flag;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=0;i<3;i++)
    {
        getline(cin,s[i]);
        int ans=0;
        for(int j=0;j<s[i].size();j++)
        {
            if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u')
                ans++;
        }
        if(!(i==1&&ans==7||i!=1&&ans==5))
            flag=true;
    }
    if(flag)
        cout<<"NO";
    else cout<<"YES";
    return 0;
}
