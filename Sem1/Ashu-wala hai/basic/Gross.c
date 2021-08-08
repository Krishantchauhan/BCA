// Program to calculate Gross sallery

void main()
{
    float HRA,DA,PF,BS,GS;
    printf("Enter Basic Sallery : ");
    scanf("%f",&BS);

    HRA=0.12*BS;
    DA=0.21*BS;
    PF=0.12*BS;

    GS=HRA+DA+BS-PF;

    printf("Basic sallery will be  %f\n",BS);
    printf(" In HRA will be %f\n",HRA);
    printf(" In DA will be %f\n",DA);
    printf("  Profit will be %f\n",PF);
    printf(" Gross Sallery will be %f",GS);

}
