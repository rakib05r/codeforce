#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num[100],i,n,ck=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    for(i=0;i<n;i++){
        while(num[i]<num[n-1]){
            num[i]=num[i]+1;
            ck++;
        }
    }
    cout<<ck<<endl;
    return 0;
}
