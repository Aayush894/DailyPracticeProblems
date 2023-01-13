#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin>>t ;
    while(t--)
    {
        int score[11] ;
        for(int i = 0 ; i< 11;i++)
        cin>>score[i] ;
        int k ;
        cin>>k ;
        sort(score , score + 11) ;
        int max_score = 0 ,counter = 0 ;
        for(int i = 10 ; i >= 11 - k ; i--)
        {
            max_score = max_score + score[i] ;
            if(score[11-k] == score[i])
            counter++ ;
        }
        int same_no = count(score,score + 11 , score[11-k]) ;
        
        int remaining = same_no - counter ;
       
        int x = 1  ;
        for(int i = same_no ;i > 1 ; i--) 
        x = x * i ;
        for(int i = remaining ;i > 1 ; i--) 
        x = x / i ;
        for(int i = same_no - remaining ;i > 1 ; i--) 
        x = x / i ;
        cout<<x<<endl ;
}
	// your code goes here
	return 0;
}
