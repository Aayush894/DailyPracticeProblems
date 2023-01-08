#include <iostream>
#include <set>
using namespace std;

int main() {
    int t ;
    cin>>t ;
    while(t--)
    {
        int n, m , k ;
        cin>>n>>m>>k ;
        int a[m] ;
        set<int> s ;
        for(int i = 0 ; i< m ;i++)
        {
            cin>>a[i] ;
            s.insert(a[i]) ;
        }
        int b[k] ;
        for(int i = 0 ; i< k ;i++)
        {
            cin>>b[i] ;
            s.insert(b[i]) ;
        }
        int sz = s.size() ;
        cout<<(m+k-sz)<<" "<<(n-sz)<<endl ;
	// your code goes here
    }
	return 0;
}
