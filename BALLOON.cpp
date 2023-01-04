#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n] ;
        for( int i = 0 ; i < n ; i++ ) cin>>a[i] ;
        
        int sum = 0, k = 0 ;
        for(int i = 0 ; i< n; i++)
        {
            if(a[i] >= 1  && a[i] <= 7 )
            {
                sum++;
                if(sum == 7)
                {
                    k = i + 1;
                    break;
                }
            }
        }
        cout<<k<<endl;
        
    }
	// your code goes here
	return 0;
}
