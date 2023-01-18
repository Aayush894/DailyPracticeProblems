#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--)
    {
        string m , w ;
        cin>>m ;
        cin>>w ;
        string a , b ;
        if(m.length() >= w.length())
        {
            a = m ;
            b = w ;
        }
        else 
        {
            a = w ;
            b = m ;
        }
        int k = 0 , p = 0 ;
        for(int i = 0 ;i < a.length() ;i++ )
        {
            
            if(a[i] == b[k])
            {
                k++ ;
            }
            if(k == b.length())
            {
                cout<<"YES"<<endl; 
                break; 
            }
            
            p++ ;
        }
        if(p == a.length())
        cout<<"NO"<<endl; 

    }
	// your code goes here
	return 0;
}
