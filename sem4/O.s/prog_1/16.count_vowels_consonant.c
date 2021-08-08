#include <stdio.h>
void main()
{

   int i, vCount = 0, cCount = 0,spCount=0,d=0,sp=0;
   char str[] = "My name is Krishant$";
   for(i = 0; i < strlen(str); i++){
       str[i] = tolower(str[i]);
       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                 vCount++;
        else if(str[i] >= 'a' && str[i] <= 'z')
              cCount++;
        else if(str[i] >= '0' && str[i] <= '9')
            d++;
        else if(str[i]==' ')
         sp++;
        else
          spCount++;
   }
   printf("Number of vowels : %d\n", vCount);
   printf("Number of consonant : %d\n", cCount);
   printf("Number of special : %d\n", spCount);
}
