#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int t = min(min(min((n-a)+1,(n-b)+1),a),b);
        int p = min(min(min((n-c)+1,(n-d)+1),c),d);
        int k = abs(c - a)+abs(d - b);
        cout<<min(t+p , k)<<endl;
    }
	// your code goes here
	return 0;
}
