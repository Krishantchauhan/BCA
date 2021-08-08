// S(S-A)(S-B)(S-C)

#include<stdio.h>
#include<math.h>
 int main()

{

        float S,A,B,C,Area;

        printf("Enter three values : \n");
        scanf("%f %f %f",&A,&B,&C);

        S = ((A+B+C)/2);
        printf("value of s %f\n",S);

        Area = (sqrt)(S*(S-A)*(S-B)*(S-C));
        printf("Area = %f",Area);

        return 0;

//        Enter three values :
//        3
//        4
//        3
//        value of s 5.000000
//        Area = 4.472136
//        Process returned 0 (0x0)   execution time : 7.066 s


}
