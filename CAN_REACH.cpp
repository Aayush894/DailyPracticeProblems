#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if(x%k == 0 && y%k == 0)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}
