#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for( int i =0;i<n;i++)
        {
            cin>>a[i];
        }
        int t[n];
        for( int i =0;i<n;i++)
        {
            cin>>t[i];
        }
        int k = 0 ;
        for( int i =0 ;i< n;i++)
        {
            if( i == 0 )
            {
                if(a[i] >= t[i])
                k++;
            }
            else 
            {
                if(a[i] - a[i-1] >= t[i] )
                k++;
            }
        }
        cout<<k<<endl;
    }
	// your code goes here
	return 0;
}
