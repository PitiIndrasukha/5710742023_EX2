#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Please enter coordinate x y: ");
    scanf("%d %d",&x,&y);
    if(x>0){
        if(y>0) printf("Result: Q1\n");
        else    printf("Result: Q4\n");
    }
    else if(x<0){
        if(y>0) printf("Result: Q2\n");
        else    printf("Result: Q3\n");
    }
    else printf("Result: Origin\n");
    return 0;
}
