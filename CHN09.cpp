#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string str ;
        cin>>str ;
        int k = 0 ,l = 0 ;
        for(int i = 0 ; i< str.length() ;i++)
        {
            if(str[i] == 'a') 
            k++;
            else 
            l++;
        }
        cout<<min(k,l)<<endl;
    }
	// your code goes here
	return 0;
}
