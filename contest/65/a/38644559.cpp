#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b,c,d,e,f;
int main(int argc, char ** argv)
{
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0||d==0||d==0&&c==0)
        printf("Hermione\n");
    else if(a*c*e<b*d*f)
        printf("Ron\n");
    else if(a<b&&c<d&&e<f||c<d&&e<=f&&f==0&&b!=0)
        printf("Ron\n");
    else if(e==f&&c<d&&a<b||e==f&&c<d&&a==b)
        printf("Ron\n");
    else if(b==0&&c==0)
        printf("Ron\n");
    else if(b==0&&c!=0)
        printf("Hermione\n");
    else if(a<b&&f==e&&f==0||a==0&&f==e&&f==0)
        printf("Ron\n");
    else if(a<b&&a==0&&c<d&&c==0||a<b&&c<d&&c==0||a<b&&a==0&&c<d)
        printf("Ron\n");
    else
        printf("Hermione\n");
    return 0;
}
