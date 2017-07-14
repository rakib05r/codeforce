#include <bits/stdc++.h>
using namespace std;
int main()
{
    int length[4];
    cin>>length[0]>>length[1]>>length[2]>>length[3];
    sort(length, length + 4);
    if (length[0] + length[1] > length[2] || length[1] + length[2] > length[3])
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if (length[0] + length[1] == length[2] || length[1] + length[2] == length[3])
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
