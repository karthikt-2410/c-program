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
//3.find largest value 
{
     int a,b,c;
     printf("Enter value for a:");
     scanf("%d",&a);
     printf("Enter value for b:");
     scanf("%d",&b);
     printf("Enter value for c:");
     scanf("%d",&c);
     if(a>b && a>c){
        printf("The largest value od three is:%d\n",a);
     }else if(a<b && b>c){
        printf("The largest value od three is:%d\n",b);
     }else{
        printf("The largest value od three is:%d\n",c);
     }
}
//4.star patten
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            for(int j=n;j>i;j--){
                printf("  ");
            }
            for(int k=1;k<=(2*i-1);k++){
                printf("* ");
            }
            printf("\n");
}
