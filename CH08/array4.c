//array4.c
#include<stdio.h>
#include<string.h>
/* ���ڿ�(���ڹ迭)
ch 32 == ���鹮��
ch 0 == NULL ���� , ����� �ٸ�!!
%s == ���� ���� �ּҷ� ���� NULL���ڱ��� ����ٰ�!!!

char str[10] ="King\0dom" //���� �ϸ� NULL���� ������ �����Ƿ� %s, str�� ������ KIng�� �����!!!!!!
�迭�� �ٽþ� �� ���� �ʱ�ȭ �ϰ� ���°� �ƴ϶� ������ ȿ������ 
"kingdom" �Է� �� "cam"�� ���� cam\0dom�� ���Ƽ� �������κп� ������ ���� ����ȴ�.

gets()�� ������ [enter]�Է��� ã�� �� ���� NULL�� �����Ѵ�.

C���� �迭�� ��踦 �˻��ϴ°� �������� ���̴�.
ex) �Է¹����� �迭�� �����ּҿ� �Է¹����Ƿ� �Ҵ��� �޸𸮸� ����� ��Ÿ�� ������ ���� ���μ����� �״´�.

*/

int main()
{
	char ch = 'A';
	char str[10] = "King dom";
	char tmp[100];
	//char str[10] ="King\0dom" //���� �ϸ� NULL���� ������ �����Ƿ� %s, str�� ������ KIng�� �����!!!!!!
								// �Է¹޴°� NULL���� ���� ����

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]),sizeof(str) );
	printf("%c, %c, %p, %p \n", ch, str[0], &str[0], str);

	printf("%p, %s %s \n\n", str, str, str + 4); //%s�� str+4 �� �迭�� �����ּ� +4�� ���� NULL����(��)���� ����
	do {
		printf("input string ? ");
		//scanf("%s", str); //cam pus[enter] => scanf�� �������� �����ϹǷ� cam , pus �ΰ��� �Է��ߴ� �����ؼ� cam�� ���
		gets(tmp); //cam pus[enter] -> \0

	} while (strlen(tmp)>=sizeof(str)); // ���ڿ��� ���� �Է¹����ʰ� �ӽ� ���۸��� �� �Է¹ް� ���ϴ°� ����.
	strcpy(str, tmp);

	printf("str : %s \n", str);
	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("%p, %c, %d \n", &str[i], str[i], str[i]);



	return 0;
}