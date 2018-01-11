#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,ck,t,len,a0=0,a1=0,d,ans;
    cin>>t;
    cin>>a;
    for(i=0;i<t;i++){
        if(a[i]=='0'){
            a0++;
        }
        else if(a[i]=='1'){
            a1++;
        }
    }
        d=min(a0,a1);
        ans=t-(d*2);
        cout<<ans<<endl;
    return 0;
}
