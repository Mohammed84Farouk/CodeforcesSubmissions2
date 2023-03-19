#include <bits/stdc++.h>
using namespace std;
int a,b,k=1;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin>>a>>b;
    for(int i=0;true;i++)
    {
        if(a-k>=0)
        {
            a-=k;
            k++;
        }
        else{
            cout<<"Vladik\n";
            return 0;
        }
        if(b-k>=0)
        {
            b-=k;
            k++;
        }else{
            cout<<"Valera\n";
            return 0;
        }
    }
    return 0;
}
