#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,sum = 0;
        cin>>a>>b>>c;
        sum = (a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
        if( sum == a)
        {
            if(b > c)
            cout<<(a + b)<<endl;
            else 
            cout<<(a + c)<<endl;
        }
        else if( sum == b)
        {
            if(a > c)
            cout<<(a + b)<<endl;
            else 
            cout<<(b + c)<<endl;
        }
        else 
        {
            if(a > b)
            cout<<(c + a)<<endl;
            else 
            cout<<(c + b)<<endl;
        }
    }
	// your code goes here
	return 0;
}
