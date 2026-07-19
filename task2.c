#include<stdio.h>
int main()
1.find positive or negative number
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n<0){
        printf("The number is negative %d\n",n);
    }else if(n==0){
        printf("The number is zero %d\n",n);
    }else{
        printf("The number is positive %d\n",n);
        return 0;
    }
    
}
2.even or odd
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%2==0){
        printf("The number is even%d\n ",n);
    }else{
        printf("The number is odd%d\n ",n);
    }
    return 0;
}
