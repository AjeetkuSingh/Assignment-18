//Assignment 18 sol 1//
/*
#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  int length;

  printf("Enter a string to calculate its length\n");
  gets(a);

  length = strlen(a);

  printf("Length of the string = %d\n", length);

  return 0;
}
*/

//Sol 2//
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40]; // declare the size of character string
    printf (" \n Enter a string to be reversed: ");
    scanf ("%s", str);

    // use strrev() function to reverse a string
    printf (" \n After the reverse of a string: %s ", strrev(str));
    return 0;
}
*/

//Sol 3//
/*
#include <stdio.h>
#include<string.h>
int main()
{
   char str1[20];  // declaration of char array
   char str2[20];  // declaration of char array
   int value; // declaration of integer variable
   printf("Enter the first string : ");
   scanf("%s",str1);
   printf("Enter the second string : ");
   scanf("%s",str2);
   // comparing both the strings using strcmp() function
   value=strcmp(str1,str2);
   if(value==0)
   printf("strings are same");
   else
   printf("strings are not same");
   return 0;
}
*/

//Sol 4//
/*
#include <stdio.h>
#include <string.h>
int main() {
   char s[100];
   int i;
   printf("\nEnter a string : ");
   gets(s);
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] -32;
      }
   }
   printf("\nString in Upper Case = %s", s);
   return 0;
}
*/

//Sol 5//
/*
#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100];
  	int i;

  	printf("\n Please Enter a String to Convert into Lowercase :  ");
  	gets(Str1);

  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'A' && Str1[i] <= 'Z')
  		{
  			Str1[i] = Str1[i] + 32;
		}
  	}

  	printf("\n The given String in Lower Case = %s", Str1);

  	return 0;
}
*/

//sOL 6//
/*
#include<stdio.h>
#include<ctype.h>

int main()
{
    char a;
    scanf( "%c", &a );
    if( isalnum(a) )
        printf( "This is an alphanumeric character: %c\n", a );
    else
        printf( "This is NOT an alphanumeric character: %c\n", a );
    return 0;
}
*/

//Sol 7//
/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[20];
    int i, len, temp=0;
    int flag = 0;
    printf("Enter a string:");
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i < len ;i++){
        if(str[i] != str[len-i-1]){
            temp = 1;
        break;
   }
}

    if (temp==0) {
        printf("String is a palindrome");
    }
    else {
        printf("String is not a palindrome");
    }
    return 0;
}
*/

//Sol 8//
/*
#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int count = 0, i;

    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;
    }
    printf("Number of words in given string are: %d\n", count + 1);
return 0;
}
*/

//Sol 9//
/*
#include <stdio.h>
void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}
void reverseWords(char* s)
{
    char* word_begin = s;
    char* temp = s;
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    reverse(s, temp - 1);
}
int main()
{
    char s[] = "i like this program very much";
    char* temp = s;
    reverseWords(s);
    printf("%s", s);
    return 0;
}
*/

//Sol 10//
#include <stdio.h>
#include <string.h>

int findRepeatFirstN2(char* s)
{
    int p = -1, i, j;
    for (i = 0; i < strlen(s); i++) {
        for (j = i + 1; j < strlen(s); j++) {
            if (s[i] == s[j]) {
                p = i;
                break;
            }
        }
        if (p != -1)
            break;
    }

    return p;
}
int main()
{
    char str[] = "geeksforgeeks";
    int pos = findRepeatFirstN2(str);
    if (pos == -1)
        printf("Not found");
    else
        printf("%c", str[pos]);
    return 0;
}
