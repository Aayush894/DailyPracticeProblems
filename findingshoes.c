#include <stdio.h>

int main(void) {
    int t,n,m;
    scanf("%d",&t);
    for(int i=t;i>0;i--)
    {
        scanf("%d %d",&n,&m);
        if(m>=n)
        printf("%d\n",n);
        else 
        printf("%d\n",m + (2*(n-m)));
    }
	// your code goes here
	return 0;
}

