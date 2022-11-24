#include <stdio.h>

int main(void) {
    int n;
    int a,b,a1,b1,a2,b2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d %d %d %d",&a,&b,&a1,&b1,&a2,&b2);
        if((a1==a && b1==b)||(a1==b && b1==a))
        printf("1\n");
        else if((a2==a && b2==b)||(a2==b && b2==a))
        printf("2\n");
        else 
        printf("0\n");
    }// your code goes here
	return 0;
}

