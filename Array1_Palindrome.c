/* This program finds if the string is a palindrome or not
Date: 12/11/18
Author: GK*/

#include<stdio.h>
//#include<string.h>

int main()
{
    char str[20];
    printf("Enter the string:");
    gets(str); // getting the string from user
    int j=0;
    while(str[j]!='\0')
    {
        printf("%c",str[j]);
        j++;
    }
    int len=strlen(str);
    //printf("\nLength=%d", len);

    // checking for palindrome
    int i=0, k=len;
    char flag;
    for (i=0,k=len-1;i<=len-1, k>=0;i++, k--)
    {
        //printf("\n %c %c",str[i],str[k]); not needed

        if (str[i]==str[k])

            flag='1';
        else if(str[i]!=str[k])
           {
            flag='0';
            break;
            }
    }

    if(flag=='1')
        printf("\nThe word is a palindrome");
    else if (flag=='0')
        printf("\nThe word is not a palindrome");

    return 0;
}



