#include <stdio.h>

int main() {
    float x,a,b,c;

    printf("Enter the value of X(Constant)\n");
    scanf("%d",&x);

    printf("Enter the value of A\n");
    scanf("%d",&a);

    printf("Enter the value of B\n");
    scanf("%d",&b);

    printf("Enter the value of C\n");
    scanf("%d",&c);

    float d=0;
    d=a*(x*x)+(b*x)+c;

    printf("The solution is =%f",d);
    return 0;
}
