#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t ;
    while(t--)
    {
        int n,y ;
        cin>>n>>y ;
        int a[n] ;
        int sum = 0 ; 
        for(int i = 0 ;i < n ;i++)  
        {
            cin>>a[i] ;
            sum = sum|a[i] ;
        }
        int ans  ;
        int k = 0 ;
        for(int i = 0 ;i <= y ;i++)
        {
            if((sum|i) == y)
            {
                ans = i ;
                k++ ;
                break;
            }
        }
        if(k == 1)
        cout<<ans<<endl ;
        else 
        cout<<"-1"<<endl ;
        
    }
	// your code goes here
	return 0;
}
