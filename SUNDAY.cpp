#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n ;
        int a[n] ;
        for(int i = 0 ; i<n ;i++) cin>>a[i] ;
        // first day is monday hence the seventh day is a sunday ;
        int k = 0 ;
        for(int i = 0 ;i < n ;i++)
        if( a[i] % 7 != 0 && a[i] % 7 != 6)
        k++ ;
        
        cout<<8+k<<endl;
        
        
    }
	// your code goes here
	return 0;
}
