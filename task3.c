#include<stdio.h>
#include<string.h>

int main()
//1.find its length using strlen().
{
    char str[50];
    printf("Enter String:");
    scanf("%s",str);
    printf("String lenth is:%d",strlen(str));
    return 0;

}
//2..Copy one string to another using strcpy().
{
   char str[50];
   char str1[50];
   printf("Enter string:");
   scanf("%s",str);
   printf("before copy:\n",str1);
   strcpy(str1,str);
   printf("After copy:%s\n",str1);
   return 0;

}
//3..Concatenate (join) two strings using strcat().
   char str[50];
   char str1[50];
   printf("Enter string:");
    scanf("%s",str);
   printf("Enter String2:");
   scanf("%s",str1);
   printf("%s\n",strcat(str,str1));
   return 0;

}
//4.compare two strings using strcmp() and display whether they are equal, greater, or smaller.
{
   char str[50];
   char str1[50];
   int a,b;
   printf("Enter string1:");
    scanf("%s",str);
   printf("Enter String2:");
   scanf("%s",str1);
   a=strlen(str);
   b=strlen(str1);
   if(strcmp(str,str1)==0){
    printf("Equval");
   }else if(a>b){
    printf("string1 grater than strinig2");
   }else{
    printf("string2 grater than strinig1");
   }

}
//5.Convert a string to uppercase using toupper()
{
    char str[50];
    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }

    printf("uppercase: %s\n", str);
    return 0;
}
//6.Convert a string to lowercase using tolower()
{
    char str[50];
    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }

    printf("lowercase: %s\n", str);
    return 0;
}
//7.Print the multiplication table of a given number (up to 10).
 {
    int N;

    printf("Enter number: ");
    scanf("%d", &N);

    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", N, i, N * i);
    }

    return 0;
}
//8.Print numbers from 1 to 50, but stop when the number is 25 using break.
{
    int N;

    printf("Enter number: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if(i==25){
            break;
        }
        printf("%d\n",i);
    }

    return 0;
}
//9.Print numbers from 1 to 20, skipping all numbers divisible by 3 using continue.
{
    int N;

    printf("Enter number: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if(i%3==0){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}
//10.Ask the user to enter a positive number. If the number is invalid 
{
    int N;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &N);

        if (N <= 0) {
            printf("Invalid input! Please enter a positive number.\n");
        }
    } while (N <= 0);

    printf("Valid number entered: %d\n", N);
    return 0;
}
//11.Write a C program to find the sum of all divisors of a given number.
{
    int n,count=0;
    
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count=count+i;

        }
    }
        printf("%d",count);
    return 0;
}
//12.Write a C program to count the number of occurrences of a given character in a string.
{
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' occurs %d times.\n", ch, count);
    return 0;
}
//13.Write a C program to count the number of vowels in a given string and display the vowels found.
{
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    printf("No. of Vowels: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c ", str[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("None\n");
    } else {
        printf("\n");
    }

    printf("vowels are: %d\n", count);
    return 0;
}
//14.Write a C program to accept a sentence, convert it to uppercase, and print each word on a separate line.
{
    char sentence[200];
    char word[100];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    while (sentence[i] != '\0') {
        if (sentence[i] == ' ' || sentence[i] == '\t') {
            if (j > 0) {
                word[j] = '\0';
                for (int k = 0; word[k] != '\0'; k++) {
                    putchar(toupper((unsigned char)word[k]));
                }
                putchar('\n');
                j = 0;
            }
        } else {
            word[j++] = toupper((unsigned char)sentence[i]);
        }
        i++;
    }

    if (j > 0) {
        word[j] = '\0';
        for (int k = 0; word[k] != '\0'; k++) {
            putchar(toupper((unsigned char)word[k]));
        }
        putchar('\n');
    }

    return 0;
}

//15.Define a function to accept a string, print the string in reverse order, and count the number of vowels in it.
void reverseAndCountVowels(char str[]) {
    int vowels = 0, len = strlen(str);
    printf("Reversed string: ");

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
        char ch = tolower((unsigned char)str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    printf("\nNumber of vowels: %d\n", vowels);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverseAndCountVowels(str);

    return 0;
}
//16.Write a C program to find the longest word in a sentence and display its length.

{
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\t') {
            word[j++] = sentence[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
        }
        i++;
    }

    if (j > 0) {
        word[j] = '\0';
        if (j > maxLen) {
            maxLen = j;
            strcpy(longest, word);
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

