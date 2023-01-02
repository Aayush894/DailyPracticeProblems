#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++)
        cin>>a[i] ;
        int k = a[0] ;
        for(int i = 0 ; i < n ; i++)
        k = __gcd(k , a[i]) ;
        
        for(int i = 0 ; i < n ;i++)
        cout<<(a[i]/k)<<" " ;
        cout<<endl ;
        
    }
	// your code goes here
	return 0;
}
