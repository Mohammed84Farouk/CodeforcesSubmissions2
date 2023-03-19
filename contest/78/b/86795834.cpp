#include <bits/stdc++.h>
using namespace std;
int n,c;
string r[4]={"R","O","Y","G"},o[3]={"B","I","V"};
vector<string>v;
int main ()
{
    scanf("%d",&n);
    for(int i=0;i<4;i++)
        v.push_back(r[i]);
    int rep=(n-7)/4;
    for(int j=0;j<rep;j++)
        for(int i=0;i<4;i++)
            v.push_back(r[i]);
    c=(n-7)%4;
    for(int i=0;i<c;i++)
        v.push_back(r[i]);
    for(int i=0;i<3;i++)
        v.push_back(o[i]);
    for(auto i:v)
        cout<<i;
    return 0;
}
