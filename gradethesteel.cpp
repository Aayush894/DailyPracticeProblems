#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        float h,c,s;
        cin>>h>>c>>s;
       
        int grade;
        grade = (h>50)?((c<0.7)?((s>5600)?(10):(9)):((s>5600)?(7):(6))):((c<0.7)?((s>5600)?(8):(6)):((s>5600)?(6):(5)));
        cout<<grade<<endl;
    }
	// your code goes here
	return 0;
}
