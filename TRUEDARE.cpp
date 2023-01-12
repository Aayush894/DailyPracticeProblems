#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--)
    {
        int tr; cin>>tr ;
        int a[tr] ;
        for(int i = 0 ;i < tr ;i++) cin>>a[i] ;
        int dr ; cin>>dr ;
        int b[dr];
        for(int i = 0 ;i < dr ;i++) cin>>b[i] ;
        int ts ; cin>>ts ;
        int c[ts] ;
        for(int i = 0 ;i < ts ;i++) cin>>c[i] ;
        int ds ; cin>>ds ;
        int d[ds];
        for(int i = 0 ;i < ds ;i++) cin>>d[i] ;
        int m = 0 ;
        for(int i = 0 ; i < ts ;i++)
        {
            int p = count(a,a+tr,c[i]) ;
            if(p == 0) 
            m++ ;
        }
        for(int i = 0 ; i < ds ;i++)
        {
            int p = count(b,b+dr,d[i]) ;
            if(p == 0)
            m++ ;
        }
        
        if(m == 0)
        {
            cout<<"yes"<<endl ;
        }
        else 
        {
            cout<<"no"<<endl ;
        }
    }
    
	// your code goes here
	return 0;
}
