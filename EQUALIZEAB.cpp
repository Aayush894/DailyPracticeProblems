#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x;
        cin>>a>>b>>x;
        if(a == b)
        {
            cout<<"yes"<<endl;
        }
        else 
        {
            if(abs(a-b)%( 2 *x) ==0)
            cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
        }
    }
	// your code goes here
	return 0;
}
