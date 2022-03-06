#include<stdio.h>

int main()
{

    int pound; float kg;
    char ch;

    printf("P)pound->kg, K)kg -> pound ? ");
    ch = getchar();
    if (ch == 'P' || ch == 'p')
    {
        printf("파운드 입력 ? ");
        scanf("%d", &pound);
        printf("%d 파운드는 %0.3f 킬로그램이다.", pound, pound * 0.45359237F);
    }
    else if (ch == 'K' || ch == 'k')
    {
        printf("킬로그램 입력 ? ");
        scanf("%f", &kg);
        printf("%0.3f 킬로그램은 %0.3f 파운드이다.", kg, kg / 0.45359237F);
    }
    else
        printf("unKnown command. \n");

    return 0;
}