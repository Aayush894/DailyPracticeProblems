#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],l = 0;
        for(int i = 0 ; i < n ;i++)
        {
            cin>>a[i] ;
            if(a[i] > k)
            l++;
        }
        cout<<l<<endl;
        
    }
	// your code goes here
	return 0;
}
