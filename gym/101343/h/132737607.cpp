/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=1e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<int>arr(N);
vector<int> nextGreaterElement(vector<int>& nums) {
    vector<int> ans(nums.size());                   // array to store answer
    stack<int> s;
    for (int i = nums.size() - 1; i >= 0; i--) {    // put it into the stack back to front
        while (!s.empty() && s.top() <= nums[i])    // determine by height
            s.pop();                                // short one go away while blocked
        ans[i] = s.empty() ? -1 : s.top();          // the first tall behind this element
        s.push(nums[i]);                            // get into the queue and wait for later height determination
    }
    return ans;
}

int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int>ans= nextGreaterElement(arr);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}