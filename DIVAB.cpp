#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>> t ;
    while(t--)
    {
        int a ,b , n;
        cin>>a >> b>> n ;
        int ans  ;
        if(a%b == 0)
        cout<<"-1"<<endl ;
        else
        {
            int k ; 
            if(n%a == 0)
            k = n ;
            else 
            k =( a * (n/a + 1) ) ;
            for(int i = k ; ; i= i + a)
            {
                if(i % b != 0)
                {
                    ans = i ;
                    break ;
                }
            }
            cout<<ans<<endl ;
        }
        
    }
	// your code goes here
	return 0;
}
