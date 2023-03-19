/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7;
void sieve(int n);
int wh,wm,lm,lh;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    scanf("%00d:%00d",&wh,&wm);
    scanf("%00d:%00d",&lh,&lm);
    if((24-(lh-wh)-(lm-wm>0))%24<10)
        cout<<"0"<<(24-(lh-wh)-(lm-wm>0))%24;
    else cout<<(24-(lh-wh)-(lm-wm>0))%24;
    if((60-(lm-wm))%60<10)
        cout<<":0"<<(60-(lm-wm))%60;
    else cout<<":"<<(60-(lm-wm))%60;
    return 0;
}
