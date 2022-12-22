#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s ;
        cin>>s;
        stack<char> v;
        for(int i = 0 ;i < s.length();i++)
        {
            if(s[i] >= 97 && s[i] <= 122)
            cout<<s[i] ;
            else if(s[i] != ')' )
            v.push(s[i]) ;
            
            if(s[i] == ')')
            while(!v.empty()) {
                char ch = v.top() ;
                if( ch == 40 )
                {
                v.pop();
                break;
                }
                else
                {
                    cout << v.top();
                    v.pop();
                }
            }
        }
        cout<<endl;
    }
    
	// your code goes here
	return 0;
}
