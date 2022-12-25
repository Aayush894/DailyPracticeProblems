#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        string a , b ;
        cin>>a ;
        cin>>b ;
        int k = 0,l = 0 ;
        for(int i = 0 ;i < n ;i++)
        {
            if(a[i] == '1')
            k++;
            if(b[i] == '1')
            l++;
        }
        if(k == l )
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
        

    }
	// your code goes here
	return 0;
}
