#include <bits/stdc++.h>
using namespace std;
int n,si,mxg,mxp,mxt,totalnums,np,ng,nt;
string s,sp,sg,st,num;
pair<pair<int,int>,pair<int,string>>pr[107];
//vector<string>sp,sg,st;
int main(int args, char ** argv)
{
    scanf("%d",&n);
    for(int q=0;q<n;q++)
    {
        scanf("%d",&si);
        cin>>s;
        totalnums+=si;
        int p=0,g=0,t=0;
        for(int j=0;j<si;j++)
        {
            cin>>num;
            bool pizza=true,taxi=true;
            string str="";
            for(int i=0;i<8;i++)
                if(num[i]!='-')
                    str+=num[i];
            for(int i=0;i<5;i++)
                if(str[i]!=str[i+1])
                    taxi=false;
            for(int i=0;i<5;i++)
                if(str[i]<=str[i+1])
                    pizza=false;
            if(taxi)
                t++;
            if(pizza)
                p++;
        }
        g=si-p-t;
        mxt=max(t,mxt);
        mxp=max(p,mxp);
        mxg=max(g,mxg);
        //cout<<s<<" "<<g<<" "<<p<<" "<<t<<" "<<endl;
        pr[q].first.first=g;
        pr[q].first.second=p;
        pr[q].second.first=t;
        pr[q].second.second=s;
        //cout<<pr[q].second.second<<" "<<pr[q].first.first<<" "<<pr[q].first.second<<" "<<pr[q].second.first<<" "<<endl;
    }
    for(int q=0;q<n;q++)
    {
        if(pr[q].first.first==mxg)
            ng++;
        if(pr[q].first.second==mxp)
            np++;
        if(pr[q].second.first==mxt)
            nt++;
    }
    //cout<<ng<<" "<<np<<" "<<nt<<endl;
    cout<<"If you want to call a taxi, you should call: ";
    for(int q=0;q<n;q++)
        if(nt-1<=0&&pr[q].second.first==mxt)
            cout<<pr[q].second.second<<"."<<'\n';
        else if(pr[q].second.first==mxt)
            {cout<<pr[q].second.second<<", ";nt--;}
    cout<<"If you want to order a pizza, you should call: ";
    for(int q=0;q<n;q++)
        if(np-1<=0&&pr[q].first.second==mxp)
            cout<<pr[q].second.second<<"."<<'\n';
        else if(pr[q].first.second==mxp)
            {cout<<pr[q].second.second<<", ";np--;}
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int q=0;q<n;q++)
        if(ng-1<=0&&pr[q].first.first==mxg)
            cout<<pr[q].second.second<<"."<<'\n';
        else if(pr[q].first.first==mxg)
            {cout<<pr[q].second.second<<", ";ng--;}

    //cout<<s<<" "<<mxg<<" "<<mxp<<" "<<mxt<<" "<<endl;

}
