#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--)
    {
        int  n;
        cin>>n;
        float a[n] ;
        long double value = 0 ;
        for(int i = 0 ;i < n;i++) 
        {
            cin>>a[i] ;
            value =value + a[i];
        }
        long double arithmatic_mean = value / n;
        
        int m = 0 ;
        for(int i = 0 ;i < n;i++)
        {
            if(a[i] == arithmatic_mean){
                cout<<i+1<<endl ;
                m++ ;
                break ;
            }
            
        }
        if(m == 0 )
        cout<<"Impossible"<<endl ;
        
        
        
    }
	// your code goes here
	return 0;
}
