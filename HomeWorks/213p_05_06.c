#include<stdio.h>

int main()
{

    int pound; float kg;
    char ch;

    printf("P)pound->kg, K)kg -> pound ? ");
    ch = getchar();
    if (ch == 'P' || ch == 'p')
    {
        printf("�Ŀ�� �Է� ? ");
        scanf("%d", &pound);
        kg = pound * 0.45359237F;
        printf("%d �Ŀ��� %0.3f ų�α׷��̴�.", pound, kg);
    }
    else if (ch == 'K' || ch == 'k')
    {
        printf("ų�α׷� �Է� ? ");
        scanf("%f", &kg);
        printf("%0.3f ų�α׷��� %0.3f �Ŀ���̴�.", kg, kg / 0.45359237F);
    }
    else
        printf("unKnown command. \n");

    return 0;
}