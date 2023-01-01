#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int w1,w2,x1,x2,m ;
        cin>>w1>>w2>>x1>>x2>>m ;
        int min_increase = x1 * m ;
        int max_increase = x2 * m ;
        if( (w2 - w1) >= min_increase && (w2 - w1) <= max_increase )
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
    }
	// your code goes here
	return 0;
}
