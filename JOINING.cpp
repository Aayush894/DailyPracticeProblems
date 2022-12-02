#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, count=0;
        cin>>n>>k;
        for(int i=6; i<=n; i+=5)
        {
            if(i>k)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

