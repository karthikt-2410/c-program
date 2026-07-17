#include <stdio.h>

int main()
 {
    int a;
    printf("Enter student mark :");
    scanf("%d",&a);
    if(a>90){
        printf("Grade a");
    }else if(a>70){
        printf("Grade B");
    }else if(a>50){
        printf("Grade C");
    }else{
        printf("Grade D");
    }
    
    return 0;
}
