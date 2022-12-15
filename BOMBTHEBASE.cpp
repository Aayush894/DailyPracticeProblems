#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        int i , min = 0;
        for(i = 0 ;i < n ;i++) 
        {
            cin>>a[i] ;
            if(a[i] < x)
            {
                min = i+1;
            }
        }
        cout<<min<<endl;
    
    }
	// your code goes here
	return 0;
}
