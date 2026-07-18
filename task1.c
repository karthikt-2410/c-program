#include<stdio.h>
int main()

//2.pre,post increment
/*{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("%d\n",++a);
    printf("%d\n",a++);
    return 0;
}*/
//3.pre,post decrement
/*{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("%d\n",--a);
    printf("%d\n",a--);
    return 0;
    
}*/
//4.speed
/*{
    int d;
    int t;
    printf("Enter Distance :");
    scanf("%d",&d);
    printf("Enter Time :");
    scanf("%d",&t);
    printf("The  speed is :%d\n",d/t);
    return 0;
}*/
//5.remainder for 2 value
/*{
    int a;
    int b;
    printf("Enter the value A :");
    scanf("%d",&a);
    printf("Enter the value B :");
    scanf("%d",&b);
    printf("The Remainder is :%d\n",a%b);
    return 0;
    
}*/
//6.Average for 3 number
/*{
    int a;
    int b;
    int c;
    
    printf("Enter the value A :");
    scanf("%d",&a);
    printf("Enter the value B :");
    scanf("%d",&b);
    printf("Enter the value C :");
    scanf("%d",&c);
    int d=a+b+c;
    printf("The average is :%d\n",d/3);
    return 0;
    
}*/
//7.perimeter and area for rec,squ,cir
/*{
    int shape;
    printf("1.Rectangle\n2.square\n3.circle");
    printf("\nEnter choice :");
    scanf("%d",&shape);
   
    switch(shape){
        case 1:
        int l;
        int b;
        printf("Enter Length :");
        scanf("%d",&l);
        printf("Enter Breadth :");
        scanf("%d",&b);
        printf("Perimeter of Rectangle is :%d\n", 2*(l+b));
        printf("Area of rectangle is :%d\n", l*b);
        break;
        case 2:
        int s;
        printf("Enter side length :");
        scanf("%d",&s);
        printf("Perimeter of Square is :%d\n",4*s);
        printf("Area of Square is :%d\n",s*s);
        break;
        case 3:
        int r;
        printf("Enter radius :");
        scanf("%d",&r);
        float m=2*3.14*r;
        printf("Perimeter of circle is :%.2f\n",m);
        float n=3.14*(r*r);
        printf("Area of circle is :%.2f\n",n);
        break;
        default:
        printf("Invalid Shape");
        
    }
}*/

//8.Celsius  to Fahrenheit 
/*{
    int c;
    printf("Enter celsius :");
    scanf("%d",&c);
    float fa=(c*9.0/5.0)+32.0;
    printf("Fahrenheit is%f",fa);
    return 0;
}*/

//9.simpleinterst
/*{
    int p;
    int r;
    int t;
    printf("Amount :");
    scanf("%d",&p);
    printf("Rate of interst :");
    scanf("%d",&r);
    printf("Time :");
    scanf("%d",&t);
    int si=(p*r*t)/100;
    printf("Interst is :%d\n",si);
    
}*/

//10.percentage of 5 subject
/*{
    int a;
    int b;
    int c;
    int d;
    int f;
    printf("Enter Tamil mark :");
    scanf("%d",&a);
     printf("Enter English mark :");
    scanf("%d",&b);
     printf("Enter maths mark :");
    scanf("%d",&c);
     printf("Enter physics mark :");
    scanf("%d",&d);
     printf("Enter chemistry mark :");
    scanf("%d",&f);
    float sum=a+b+c+d+f;
    float p= ( sum / 500 ) * 100;
    printf("Total mark is :%d\n",sum);
    printf("percentage is :%.2f%%\n",p);
    return 0;
}*/

//11.assignment operator 
/*{
    int a;
    int b;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter a number :");
    scanf("%d",&b);
    printf("%d\n",a=b);
    printf("%d\n",a+=b);
    printf("%d\n",a-=b);
    printf("%d\n",a*=b);
    printf("%d\n",a/=b);
    printf("%d\n",a%=b);
    return 0;
}*/

//12.find last 2 digit number
/*{
    int a;
    int b;
    printf("Enter number :");
    scanf("%d",&a);
    b=a%100;
    printf("The last two digit is :%d\n",b);
    return 0;
}*/

//13.comma operato
/*{
    int a=5,b=6;
    int c=a*a,d=a*a*a;
    int e=b*b,f=b*b*b;
    printf("squre of a is :%d\n",c);
    printf("cube of a is :%d\n",d);
    printf("squre of b is :%d\n",e);
    printf("cube of b is :%d\n",f);
   return 0;
    
}*/

//14.size of operator
/*{
    int a;
    float f;
    double d;
    char c;
    int arr[100];
    printf("size of a =%zu\n",sizeof(a));
    printf("size of f =%zu\n",sizeof(f));
    printf("size of d =%zu\n",sizeof(d));
    printf("size of c) =%zu\n",sizeof(c));
    printf("size of arr =%zu\n",sizeof(arr));
    return 0;
}*/











    
