#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,count = 0;
        cin>>a>>b>>c;
        d = a;
        while(d > 1)
        {
            d = d / 2;
            count++;
        }
        int ans;
        ans = ( count * b) + ( (count -1 )* c );
        cout<<ans<<endl;
    }
    
	return 0;
}
