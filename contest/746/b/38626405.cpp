#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
deque<char>d;
int n;
string s;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    cin>>s;
    d.push_back(s[0]);
    if((n-1)%2==0)
    {
        for(int i=1;i<n;i++)
        {
            if(i%2)
                d.push_front(s[i]);
            else d.push_back(s[i]);
        }
    }
    else if((n-1)%2!=0)
    {
        for(int i=1;i<n;i++)
        {
            if(i%2!=0)
                d.push_back(s[i]);
            else d.push_front(s[i]);
        }
    }
    for(int i=0;i<n;i++)
        cout<<d[i];
    cout<<endl;
    return 0;
}
