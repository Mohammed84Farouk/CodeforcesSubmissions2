#include <bits/stdc++.h>
using namespace std;
string s;
int main ()
{
    cin>>s;
    (s.find("AB")!=-1&&s.find("BA",s.find("AB")+2)!=-1||s.find("BA")!=-1&&s.find("AB",s.find("BA")+2)!=-1)? printf("YES"):printf("NO");
    return 0;
}
