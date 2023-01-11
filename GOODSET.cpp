#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--)
    {
        int n;
        cin>>n ;
        int k = 0 ;
        for(int i = 1 ;i <= n;i++)
        {
            cout<<i+k<<" " ;
            k++ ;
        }
        cout<<endl ;
    }
	// your code goes here
	return 0;
}
