#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int hcf = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i] ;
            hcf = gcd(hcf,a[i]);
        }
        for(int i= 0 ;i<n;i++)
        {
            cout<<a[i]/hcf<<" ";
        }
        cout<<endl;
    }
    
}