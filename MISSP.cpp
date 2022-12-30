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
        int result = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i] ;
            result = result ^ a[i] ;
            
        }
        cout<<result<<endl;
    }
	// your code goes here
	return 0;
}
