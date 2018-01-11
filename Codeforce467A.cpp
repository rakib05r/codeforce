#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,m,ck=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>k>>m;
        if(m-k>=2){
            ck++;
        }
    }
    cout<<ck<<endl;
    return 0;
}
