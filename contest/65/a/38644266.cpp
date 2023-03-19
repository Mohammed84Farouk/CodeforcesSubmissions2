#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<char,int>mp;
vector<char>v;
int a,b,c,d,e,f;
string s;
int main(int argc, char ** argv)
{
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(b*d*f>a*c*e||c==0&&d>0||a==0&&b!=0&&d!=0||e==0&&f>0&&d>0&&b>a)
        printf("Ron\n");
    /*if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0||d==0||d==0&&c==0)
        printf("Hermione\n");
    else if(e<f&&b!=0)
        printf("FRon\n");
    else if(a<b&&c<d&&e<f||c<d&&e<=f&&b!=0)
        printf("Ron\n");
    else if(b!=0&&c<d&&e<f&&a!=f&&b!=c&&d!=e)
        printf("Ron\n");
    else if(e==f&&c<d&&a<b||e==f&&c<d&&a==b)
        printf("Ron\n");
    else if(b==0&&c==0)
        printf("Ron\n");
    else if(b==0&&c!=0)
        printf("Hermione\n");
    else if(a<b&&f==e||a==0&&f==e)
        printf("Ron\n");
    else if(a<b&&a==0&&c<d&&c==0||a<b&&c<d&&c==0||a<b&&a==0&&c<d||e>f&&f>a)
        printf("Ron\n");
    */else
        printf("Hermione\n");
    return 0;
}