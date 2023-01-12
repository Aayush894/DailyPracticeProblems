#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int n , x ,k ;
        cin>>n>>x>>k ;
        int a[n] ;
        for(int i = 0 ; i < n;i++)
        cin>>a[i] ;
        int b[n] ;
        for(int i = 0 ;i < n ;i++)
        cin>>b[i] ;
        int m = 0 ;
        for(int i = 0 ;i < n;i++)
        {
            if(abs(a[i] - b[i]) <= k)
            m++ ;
        }
        if(m >= x)
        cout<<"YES"<<endl ;
        else 
        cout<<"NO"<<endl ; 
        
    }
	// your code goes here
	return 0;
}
