// WAP to find gain or loss and gain percentage or loss percentage

#include<stdio.h>

void main()
{
    float CP,SP,G,L,GP,LP;

    printf("Enter Cost Price ");
    scanf("%f",&CP);

    printf("Enter Selling Price  ");
    scanf("%f",&SP);

    if(CP>SP)
    {
        L=(CP-SP);
        printf("Loss amount is %f\n",L);
        LP=(L/CP*100);
        printf("Loss percentage is %f",LP);
    }
    else
    {

        G=(SP-CP);
        printf("Gain amount is %f\n",G);
        GP=(G/CP*100);
        printf("Gain percentage is %f",GP);
    }

}
