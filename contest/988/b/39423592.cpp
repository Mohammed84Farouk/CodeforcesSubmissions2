#include <bits/stdc++.h>
using namespace std;
vector<string>v,sorted;
string s;
int n,miny=108,sizee,maxy;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
        sizee=s.size();
        miny=min(miny,sizee);
        maxy=max(maxy,sizee);
    }
    for(int i=miny;i<=maxy;i++)
        {
            for(int j=0;j<n;j++)
                if(v[j].size()==i)
                    sorted.push_back(v[j]);
        }
    for(int i=0;i<n-1;i++)
        //cout<<"sorted[i+1].find(sorted[i])= "<<sorted[i+1].find(sorted[i])<<" sorted[i+1]= "<<sorted[i+1]<<" sorted[i]= "<<sorted[i]<<endl;
        if(sorted[i+1].find(sorted[i])>n)
            {printf("NO\n");return 0;}
    printf("YES\n");
    for(int i=0;i<n;i++)
        cout<<sorted[i]<<endl;
    return 0;
}