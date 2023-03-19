#include <bits/stdc++.h>
using namespace std;
int n;
string s;

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        bool _C=false,_R=false;
        string c="",r="",t="";
        int x=0;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='R'&&s[j+1]>='1'&&s[j+1]<='9')
            {
                _R=true;
                for(int k=j+1;s[k]!='C';k++)
                    r+=s[k];
            }
            else if(s[j]=='C'&&s[j+1]>='1'&&s[j+1]<='9')
                {
                    _C=true;
                    for(int k=j+1;k<s.size();k++)
                        t+=s[k];
                    stringstream ss;
                    ss<<t;
                    x=0;
                    ss>>x;
                    while(x)
                    {
                        if(x%26==0) c+='Z',x-=26;
                        else c+=('A'+(x%26-1));
                        x/=26;
                    }
                    reverse(c.begin(),c.end());
                }
            if(_C&&_R)
                break;
        }
        if(_C&&_R)
            cout<<c<<r<<'\n';
        else {
            c="",r="";
            for(int j=0;j<s.size();j++)
                if(s[j]>='0'&&s[j]<='9')
                    r+=s[j];
                else c+=s[j];
            long long X=0;
            reverse(c.begin(),c.end());
            for(int j=0;j<c.size();j++)
                if(j!=0)
                    X+=pow(26,j)*(c[j]%'A'+1);
                else X+=(c[j]%'A'+1);
            cout<<"R"<<r<<"C"<<X<<'\n';
        }
    }
    return 0;
}
