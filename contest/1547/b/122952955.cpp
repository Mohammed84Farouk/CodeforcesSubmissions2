/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e4+7;
void sieve(int n);
set<char>st;
string alpha="abcdefghijklmnopqrstuvwxyz";
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int index=-1,itr=1,r=1,l=1;
        string s;cin>>s;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
            if(s[i]=='a')
                index=i;
        }
        if(st.size()<s.size()||index==-1)
            cout<<"NO";
        else {
            bool flag=false;
            int sz=s.size()-1;
            while(sz--)
            {
                if(s[index+r]==alpha[itr])
                    r++;
                else if(s[index-l]==alpha[itr])
                    l++;
                else flag=true;
                itr++;
            }
            if(flag)
            cout<<"NO";
            else cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}