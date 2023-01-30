#include <iostream>
#include <algorithm> 
#include <limits>
using namespace std;

int main() {
    int t;
    cin>> t ; 
    while(t--)
    {
        int n;
        cin>> n;
        int a[n] ;
        for(int i = 0;i < n;i++)
        cin>>a[i] ; 
        int max = 0 ;
        sort(a,a+n) ; 
       
        int c ; 
        for(int i = 0 ; i < n;i++ )
        {
            if(a[i] == a[i-1])
            c++ ; 
            else 
            c = 1 ; 
            if(c > max )
            max = c ;
        }
        
        cout<<n-max<<endl ; 
    }
	// your code goes here
	return 0;
}
