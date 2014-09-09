#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mid,fin;
    printf("Please Enter midterm score: ");
    scanf("%d",&mid);
    printf("Please Enter final score: ");
    scanf("%d",&fin);
    if(mid<20||fin<30) {
        if((mid+fin)<60) printf("Result: failed with score %d\n",mid+fin);
        else printf("Result: passed with score %d\n",mid+fin);
    }
    else printf("Result: passed with score %d\n",mid+fin);
    return 0;
}
