#include <iostream>
#include <cmath>
using namespace std;
int binarytodecimal(int n)
{
    int d, sum =0, k = 0;  
    while(n>0)
    {
        d = n%10;
        sum = sum + (d * pow(2,k));
        n /= 10;
        k++;
    }
    return sum;

}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
         int ans;
        ans = binarytodecimal(a);
        cout<<ans<<endl;
        
    }// Write C++ code here
    return 0;
}