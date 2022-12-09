#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        float N;
        cin>>N;
        float p = pow((0.143 * N ) , N );
        int k = p; 
        float n =( p - k);
        if( n < 0.5)
            cout<<k<<endl;
        else 
            cout<<(k + 1)<<endl;
    }
	// your code goes here
	return 0;
	
}
