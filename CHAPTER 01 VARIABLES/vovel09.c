#include<stdio.h>
int main()
{

char ch;
printf("enter the word\n");
scanf("%c",&ch);
if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u' ){
    printf("this  is vovel\n");
}
else{
    printf("this is  consonant");
    }
    return 0;
}