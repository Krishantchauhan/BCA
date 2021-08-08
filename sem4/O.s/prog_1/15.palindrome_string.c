#include <stdio.h>
#include <string.h>

void main(){
    char string1[20];
    int i, len;
    int check=0;

    printf("Enter a string: ");
    scanf("%s", string1);

    len = strlen(string1);

    for(i=0;i < len ;i++){
        if(string1[i] != string1[len-i-1]){
            check = 1;
            break;
   }
}

    if (check)
        printf("%s is not a palindrome\n", string1);
    else
        printf("%s is a palindrome\n", string1);
}
