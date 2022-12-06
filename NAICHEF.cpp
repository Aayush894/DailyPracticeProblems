#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
       float p_a=0,p_b=0;
        for( int i =0 ;i<n;i++)
        {
            if(arr[i] == a)
            p_a++;
            if(arr[i] == b)
            p_b++;
        }
        float prob;
        prob =( (p_a * p_b) / ( pow(n,2) ) );
        cout<<prob<<endl;
    }
	// your code goes here
	return 0;
}
