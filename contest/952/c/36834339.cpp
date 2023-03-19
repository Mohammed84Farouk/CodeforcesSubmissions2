#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>v;
bool firstApp=false;
int n,A[109],B[109],maxy;
int main(int argc, char ** argv)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            /*if(A[i]>maxy)
                maxy=A[i];
        */}
    for(int i=1;i<n;i++)
        {
            if(abs(A[i]-A[i-1])>=2)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    return 0;
}
