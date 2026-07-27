#include<stdio.h>
int main()
//1.find positive or negative number
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
//2.even or odd
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
//5.leap year
 {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0){
        printf("%d  Leap Year", year);
    }else{
        printf("%d Not a Leap Year", year);
    }
    return 0;
}
//6.vowel and consonant
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}
//7. Simple Calculator Using Switch
 {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+':
            printf("Result = %d", a+b);
            break;

        case '-':
            printf("Result = %d", a-b);
            break;

        case '*':
            printf("Result = %d", a*b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %d", a/b);
            else
                printf("Division by zero not possible");
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
//8. Display Month Using Switch
 {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid Month");
    }

    return 0;
}
//9. Print Numbers from 1 to N
 {
    int n, i=1;

    printf("Enter N: ");
    scanf("%d", &n);

    while(i<=n) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
//10. Print Even Numbers from 1 to N
 {
    int n, i=2;

    printf("Enter N: ");
    scanf("%d", &n);

    while(i<=n) {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}
//11. Sum of First N Natural Numbers
{
    int n, i, sum=0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        sum += i;

    printf("Sum = %d", sum);

    return 0;
}
//12. Factorial of a Number
{
    int n, i;
    long long fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        fact *= i;

    printf("Factorial = %lld", fact);

    return 0;
}
//13. Find the Last Two Digits
 {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Last two digits = %02d", n % 100);

    return 0;
}
//14. Check Whether a Number is Palindrome
{
    int n, a, b, c=0;

    printf("Enter number: ");
    scanf("%d", &n);

    a = n;

    while(a != 0) {
        b = a % 10;
        c= c * 10 + b;
        a = a / 10;
    }

    if(c == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
//15. Check Whether a Number is Prime
{
    int n, i, count=1;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n <= 1)
        count = 0;
    else {
        for(i=2; i<n; i++) {
            if(n % i == 0) {
                count = 0;
                break;
            }
        }
    }

    if(count)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}
