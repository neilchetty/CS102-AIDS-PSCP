#include<stdio.h>
int main() {
char input;
printf("Enter the input: \n");
scanf("%c", &input);
if(input=='a' || input=='e' || input=='i' || input=='o' || input=='u') printf("It is a vowel");
else printf("It is not a vowel");
return 0;
}

