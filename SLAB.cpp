#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t ;
    while(t--)
    {
        long long salary ;
        cin>>salary ; 
        long long temp = salary ; 
        long long tax = 0 ; 
        if(salary > 1500000)
        {
            tax = tax + (3 * (salary - 1500000) / 10) ; 
            salary = 1500000 ;
        }
        if(salary > 1250000)
        {
            tax = tax + (25 *(salary - 1250000) / 100) ; 
            salary = 1250000 ;

        }
        if(salary > 1000000)
        {
            tax = tax + (2 *(salary - 1000000) / 10) ; 
            salary = 1000000 ;

        }
        if(salary > 750000)
        {
            tax = tax + (15 *(salary - 750000) / 100) ; 
            salary = 750000 ;

        }
        if(salary > 500000)
        {
            tax = tax + (1 *(salary - 500000) / 10) ; 
            salary = 500000 ; 

        }
        if(salary > 250000)
        {
            tax = tax + (5 *(salary - 250000) / 100) ; 
            salary = 250000 ; 

        }
        cout<<temp-tax<<endl ; 
    }
	// your code goes here
	return 0;
}
