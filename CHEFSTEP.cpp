#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for( int i =0 ; i<n ; i++)
        {
            cin>>a[i];
            if(a[i]%k == 0 )
                a[i]=1;
            else 
                a[i]=0;
                
        }
        for( int i =0 ;i<n ;i++)
            cout<<a[i];
            
        cout<<endl;
        
        
    }
	// your code goes here
	return 0;
}

