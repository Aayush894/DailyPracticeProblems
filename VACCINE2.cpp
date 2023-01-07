#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--)
    {
        int n , d ;
        cin>>n>>d ;
        int a[n] ;
        for(int i = 0 ;i < n; i++)   cin>>a[i] ;
        int k = 0 ;
        for(int i = 0 ; i<n ;i++)
        {
            if(a[i] >= 80 || a[i] <= 9)
            k++ ;
        }
        int remaining = n - k ;
        int infected_days ;
        int total_days ;
        if(k%d == 0 )
        infected_days = k/d ;
        else 
        infected_days = (k/d) + 1 ;
        if(remaining%d == 0 )
        total_days = infected_days + (remaining/d) ;
        else 
        total_days = infected_days + (remaining/d) + 1 ;
        cout<<total_days<<endl ;
    }
	// your code goes here
	return 0;
}
