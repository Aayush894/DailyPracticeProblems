#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int n ;
        cin>>n ;
        int a[n];
        for(int i = 0 ; i < n ;i++)  cin>>a[i] ;
        int min = n ,k = 0 , max = 0 ;
        for(int i = 0 ; i< n ;i++)
        {
            
        }
        for(int i = 1 ; i < n ; i++)
        {
           if(a[i] - a[i-1] < 3)
            {
                k++ ;
            }
            else
            {
                if(k > max)
                max = k ;
                if(k < min)
                min = k ;
                k = 0 ;
            }
        }
        if(k > max)
        max = k ;
        if(k < min)
        min = k ;
        cout<<min+1<<" "<<max+1<<endl  ;
    }
	// your code goes here
	return 0;
}
