#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<=y)
        cout<<(y - x)<<endl;
        else 
        {
            if( (x - y)%2 == 0 )
            cout<<((x - y)/2)<<endl;
            else
            cout<<(((x - y + 1)/2) + 1)<<endl;
        } 
    }
	// your code goes here
	return 0;
}
