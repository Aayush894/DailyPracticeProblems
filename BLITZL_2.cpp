#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int tt = 2*(180 + n);
        int tl = a + b ;
        int tr = tt - tl ;
        cout<<tr<<endl;
    }
	// your code goes here
	return 0;
}
