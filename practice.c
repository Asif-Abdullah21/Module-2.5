// #include<stdio.h>
// int main()
// {
//     printf("Recently I heard that you've achieved 95%% marks in your exam.\n");
//     printf("This is brilliant!\n"); 
//     printf("I wish you'll shine in your life!\tGood luck with all the barriers(/\\) in\nyour life.\n");
//     printf("\"Assalamu Alaikum\"\n");

//     printf("Alhamdulillah for everything\n");

//     return 0;
// }

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float div = a*1.0/b;
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %.2f\n",a,b,a*1.0/b);

    return 0;
}