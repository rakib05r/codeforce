#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,ck,a[3],b=0,c;
    cin>>t;
    for(i=0;i<t;i++){
            ck=0;
        for(j=0;j<3;j++){
            cin>>a[j];
            if(a[j]==1){
                ck++;
            }
        }
        if(ck>=2){
            b++;
        }

    }
    cout<<b<<endl;
    return 0;
}
