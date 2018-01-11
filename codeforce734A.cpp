#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100000];
    int n,i,an=0,d=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]=='A'){
            an++;
        }
        else if(a[i]=='D'){
            d++;
        }
    }
    if(an>d){
        cout<<"Anton"<<endl;
    }
    else if(an<d){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
