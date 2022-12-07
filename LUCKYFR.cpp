#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        int k = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(s[i] == '4')
            k++;
        }
        cout<<k<<endl;
    }
	// your code goes here
	return 0;
}
