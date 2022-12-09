#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n ;i++)
        cin>>a[i];
    int p;
    if(n%2==0)
        p = (n/2)*(n+1);
    else
        p = ((n+1)/2)*(n);
    int sum = 0 ;
    for(int i =0 ;i<n ;i++)
        sum = sum + a[i] ;
        
    if(sum == p)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	// your code goes here
	return 0;
}
