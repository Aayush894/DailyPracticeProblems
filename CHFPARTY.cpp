#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--)
    {
        int n;
        cin>>n ;
        int a[n] ;
        for(int i= 0 ; i < n ; i++ )
        cin>>a[i] ;
        sort(a , a+n) ;
        int people = 0 ;
        for(int i = 0 ; i< n; i++)
        {
            if(people >= a[i])
            {
                people++ ;
                
            }
        }
        cout<<people<<endl ;
    }
	// your code goes here
	return 0;
}
