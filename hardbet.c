#include <stdio.h>

int main(void) {
    int T,A,B,C;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&A,&B,&C);
        if(A<B && A<C)
        printf("Draw\n");
        else if(B<A && B<C)
        printf("Bob\n");
        else 
        printf("Alice\n");
    }
    // your code goes here
	return 0;
}

