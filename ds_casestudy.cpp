#include <iostream>
using namespace std;

int main() {
    int a[4],b[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        cin>>b[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<4;i++)
    {
        for( int j=0;j<4;j++)
        {
            if( (a[i]+b[j]) == k )
            cout<<"("<<a[i]<<","<<b[j]<<")"<<endl;
        }
    }

    return 0;
}