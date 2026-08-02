#include <stdio.h>
#include <string.h>

int main(void)
//1.Write a C program to find the length of a string using strlen() without using loops for counting manually.
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    printf("Length of the string is: %zu\n", strlen(str));

    return 0;
}
//2.Write a program to copy one string into another using strcpy() and display both strings.
{
    char str[100], str1[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    strcpy(str1, str);

    printf("Original string: %s\n", str);
    printf("Copied string: %s\n", str1);

    return 0;
}
//3.Write a program to compare two strings using strcmp() and print whether they are equal, greater, or smaller.
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    result = strcmp(str1, str2);

    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("String 1 is smaller than String 2.\n");
    else
        printf("String 1 is greater than String 2.\n");

    return 0;
}
//4.Write a program that accepts an integer and prints its square root using the sqrt() function.
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Square root is not defined for negative numbers.\n");
    }
    else
    {
        printf("Square root of %d is %.2f\n", num, sqrt(num));
    }

    return 0;
}

//5.A company stores employee names in different formats (uppercase/lowercase). Write a program using predefined string functions to:
void toUpperCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }
}

int main(void)
{
    char name1[50], name2[50];

    printf("Enter first employee name: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Enter second employee name: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

    toUpperCase(name1);
    toUpperCase(name2);

    if (strcmp(name1, name2) == 0)
        printf("The employee names are the same (ignoring case).\n");
    else
        printf("The employee names are different.\n");

    printf("Name 1 in uppercase: %s\n", name1);
    printf("Name 2 in uppercase: %s\n", name2);

    return 0;
}

int largest(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
//6.Write a user-defined function largest(int a, int b) that returns the larger of two numbers.
int main()
{
    int x , y ;
    printf("Enter a first number:");
    scanf("%d",&x);
    printf("Enter a second number:");
    scanf("%d",&y);

    printf("The larger number is: %d\n", largest(x, y));
    return 0;
}
//7.Write a user-defined function to check whether a number is even or odd.
int oddoreven(int a)
{
    if (a%2==0){
        printf("Number is Even");
    }else{
        printf("Number is odd");
    }
}

int main()
{
    int x ;
    printf("Enter a number:");
    scanf("%d",&x);

    oddoreven(x);
    
   
}
//8.Create a function swap() that swaps two numbers using call by reference (pointers).

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
   int x,y;
   printf("Enter value for X:");
   scanf("%d",&x);
   printf("Enter value for Y:");
   scanf("%d",&y);


    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
//9.Write a function that accepts an array and returns the maximum element.
int maxElement(int arr[], int n)
{
    int max = arr[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int arr[10];
    int i, size;

    printf("Enter 10 numbers in the array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum element is: %d\n", maxElement(arr, size));
    return 0;
}
//10.A shopping application calculates the final bill
float calculateTotal(float price[], int n)
{
    int i;
    float total = 0.0;

    for (i = 0; i < n; i++)
    {
        total += price[i];
    }

    return total;
}

float calculateGST(float total)
{
    return total * 0.18;
}

float calculateFinalAmount(float total)
{
    return total + calculateGST(total);
}

void displayBill(float price[], int n)
{
    int i;
    float total, gst, finalAmount;

    total = calculateTotal(price, n);
    gst = calculateGST(total);
    finalAmount = calculateFinalAmount(total);

    printf("\n===== SHOPPING BILL =====\n");
    printf("Item\tPrice\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%.2f\n", i + 1, price[i]);
    }

    printf("\nTotal Amount: %.2f\n", total);
    printf("GST (18%%): %.2f\n", gst);
    printf("Final Payable Amount: %.2f\n", finalAmount);
    printf("========================\n");
}

int main()
{
    int n, i;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    float price[n];

    printf("Enter the price of each item:\n");
    for (i = 0; i < n; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%f", &price[i]);
    }

    displayBill(price, n);
    return 0;
}

int searchElement(int arr[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;   // returns position/index
    }

    return -1;  // not found
}
//11.Write a function to search for an element in an array and return its position.
int main()
{
    int n, i, key, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    position = searchElement(arr, n, key);

    if (position != -1)
        printf("Element found at position: %d\n", position);
    else
        printf("Element not found in the array.\n");

    return 0;
}
//12.write a recursive function to find the sum of the first N natural numbers.
int sumNatural(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sumNatural(n - 1);
}

int main()
{
    int n, result;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    result = sumNatural(n);
    printf("Sum of first %d natural numbers is: %d\n", n, result);
    return 0;
}

//13.Write a recursive function to print numbers from 1 to N.
void printNumbers(int n)
{
    if (n == 0)
        return;

    printNumbers(n - 1);
    printf("%d ", n);
}

int main()
{
    int n;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("Numbers from 1 to %d are: ", n);
    printNumbers(n);
    printf("\n");
    return 0;
}

//14.Write a recursive function to find the Nth Fibonacci number.
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
    return 0;
}
//15.A person climbs a staircase where each move can be either 1 step or 2 steps.

int countWays(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else if (n < 0)
        return 0;
    else
        return countWays(n - 1) + countWays(n - 2);
}

int main()
{
    int n;

    printf("Enter the number of steps: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("Number of ways to climb %d steps is: %d\n", n, countWays(n));
    return 0;
}

