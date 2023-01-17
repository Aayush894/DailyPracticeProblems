#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--)
    {
        string s ;
        cin>> s ;
        set <string> codes ;
        for(int i = 0 ; i < s.length()-1 ; i++)
        {
            string c ; 
            c = c + s[i] ;
            c = c + s[i+ 1] ;
               codes.insert(c) ;
            
        }
        cout<<codes.size()<<endl ; 
    }
	// your code goes here
	return 0;
}
