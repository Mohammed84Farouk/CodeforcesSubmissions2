#include <bits/stdc++.h>
using namespace std;
string s;
vector<int>v;
int sum;
int main(int argc, char ** argv)
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
	cout.setf(ios::fixed);
	cin>>s;
	for(int i=0;i<s.size();i++)
    {
        int num=s[i]-'0';
        if(i==0&&num==9)
            v.push_back(9);
        else
            v.push_back(min(num,abs(9-num)));
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    return 0;
}
