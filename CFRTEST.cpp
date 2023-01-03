#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n ;
        int a[n] ;
        for (int i = 0 ; i< n ;i++)
        cin>>a[i] ;
        
        int m =0 ;
        for(int i = 0 ; i< n ; i++)
        {
            int k = 0 ;
            int element = a[i];
            for(int j = i+1 ; j < n ; j++ )
                if(element == a[j])
                k++ ;
                
            if(k == 0)
            m++ ;
        }
        
        cout<<m<<endl;
    }
	// your code goes here
	return 0;
}
