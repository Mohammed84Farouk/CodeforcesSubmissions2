#include <bits/stdc++.h>
using namespace std;
string s;
int x;
int main()
{
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        int n=(int)s[i];
        string binary =bitset<8>(n).to_string();
        //cout<<binary<<"\n";
        reverse(binary.begin(),binary.end());
        unsigned long decimal = std::bitset<8>(binary).to_ulong();
        std::cout<<(x-decimal)%256<<" " <</*decimal<<*/"\n";
        x=decimal;
    }

    return 0;
}