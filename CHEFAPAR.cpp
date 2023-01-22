#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--)
    {
        int n ;
        cin>>n;
        int a[n] ;
        for(int i = 0 ;i < n;i++)
        cin>>a[i] ;
        int fine = 0 ,m = 0;
        for(int i = 0 ;i < n;i++)
        {
            if(a[i] == 0)
            {
            fine = fine + 1100 ; 
            m++ ;
            }
            else if(m) 
            fine = fine + 100 ;
        }
        cout<<fine<<endl; 
    }
	// your code goes here
	return 0;
}
