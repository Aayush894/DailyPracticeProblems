#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n] ;
        for(int i = 0 ; i < n ;i++) cin>>a[i] ;
        for(int i = 0 ; i < n ;i++) cin>>b[i] ;
        int sum1=0,sum2=0,max1=0,max2=0;
        for(int i = 0 ; i < n ;i++)
        {
            sum1 = sum1 + a[i] ;
            sum2 = sum2 + b[i] ;
            if(a[i] > max1)
            max1 = a[i];
            if(b[i] > max2)
            max2 = b[i] ;
        }
        if((sum1-max1) < (sum2-max2))
        cout<<"Alice"<<endl;
        else if((sum1-max1) == (sum2-max2))
        cout<<"Draw"<<endl;
        else 
        cout<<"Bob"<<endl;

    }
	// your code goes here
	return 0;
}
