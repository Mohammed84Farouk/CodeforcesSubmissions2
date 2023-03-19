/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)5e2+7, mod=1e9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, arr[1009] = {0},mx,mn,ans=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        //cout<<mx<<" "<<mn<<" "<<arr[i]<<endl;
        if(i) {
            if (mx < arr[i]){
                ans++;
                mx = arr[i];
            }
            else if (mn > arr[i]){
                ans++;
                mn = arr[i];
            }
        }
        else{
            mn=arr[0];
            mx=arr[0];
        }
    }
    cout<<ans;
    return 0;
}
