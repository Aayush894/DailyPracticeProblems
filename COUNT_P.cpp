#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],k=0;
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
            if(a[i]%2!=0)
             k++;
        }
     if(k%2==0&&k!=0)
       cout<<"yes"<<endl;
     else
        cout<<"no"<<endl;
        
    }
	// your code goes here
	return 0;
}
