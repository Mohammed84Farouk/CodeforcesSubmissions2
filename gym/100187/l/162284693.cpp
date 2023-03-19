#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i = 0; i < s.size() / 2; i++)
    {
        s[s.size() - 1 - i] = s[i];
    }
    cout<<s<<endl;
    return 0;
}
