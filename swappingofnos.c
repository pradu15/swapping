#include<stdio.h>
int main(){
    int x,y;
    printf("enter two nos\n");
    scanf("%d",&x);
    scanf("%d",&y);
    //input from user
    printf("values of x and y before swapping x=%d,y=%d",x,y);
    x=x+y;
    y=x-y;//here after calculation y will become equal to x
    x=x-y;//here after calculation x will become equal to y
    printf("\nafter swapping values are x= %d  y= %d",x,y);
    return 0;

}