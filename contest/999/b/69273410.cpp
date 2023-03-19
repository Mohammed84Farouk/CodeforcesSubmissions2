#include<bits/stdc++.h>
using namespace std;
int x;
string s;
int main()
{
    scanf("%d",&x);
    cin>> s;
    for(int i=2;i<=x;i++)
        if(x%i==0)
            for(int j=0;j<(i+1)/2;j++)
                swap(s[j],s[i-j-1]);
    cout<<s;
    return 0;
}
