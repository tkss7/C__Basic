//double_pointer1.c
#include<stdio.h>
funcA(char** tmp);
int main()
{
	//���� ������ : ���չ��� �� -> ��
	//*p : ���������� :���� �������� �ּҸ� �ѹ��� �����ϸ� �����Ͱ� �־�� �Ѵ�.
	//**mip : ���������� : ���� �������� �ּҸ� �ѹ��� �����ϸ� �ּ�,
	//                            �ι� �����ؾ� �����Ͱ� �־���Ѵ�.
	//���������� : �����Ͱ� ����� �����ּҸ� �����ͷ� ����
	// Heap ���׸�Ʈ ex) �����Ҵ� �� ����Ҷ� ���������Ͱ� ���ȴ�.
	// ������ �迭�� ���̾����� �޸𸮰� ���Ե�� ȿ�������� �����ϴ�.
	//�����͹迭�� �θ��Լ����� �ѱ�� ���������ͷ� ������ ��
	int num, * ip, ** mip;
	printf("%d, %d, %d \n", sizeof(num), sizeof(ip), sizeof(mip));
	
	ip = &num;
	mip = &ip;

	**mip = 500;

	printf("%d, %d, %d \n\n", num, *ip, **mip);

	char* ptr[] = { "kingdom","multi campus","hello world"
	"one �ϳ�","two ��","seoul ����� ������ ���ﵿ 100"
, "busan �λ�� �ؿ�뱸 �ؿ�뵿 200",NULL };
	//printf("sizeof p1 : %d \n", sizeof(p2));
	// �����͸� ����ų������ �׻� �� �������� ũ�⸸ŭ�� ����Ŵ ==char �� 1 , int �� 4
	funcA(ptr);

	return 0;
}
//ptr�� ����� ���ڿ� ���
funcA(char **tmp)
{
	int i,len=0;
	char* ptr;
	//printf("funcA() : %p, %d \n",tmp,sizeof(tmp));
	printf("funcA() : %p, %x \n", tmp, *tmp);
	for (i = 0; *(tmp + i); i++)
	{

		ptr = *(tmp + i); // ex) 7000������ �ּҸ� ����
		while (*ptr!='\0')
		{
			len++;
			ptr++;
		}
		printf("%u : %u : %s, Length: %d \n", tmp + i, *(tmp + i), *(tmp + i),len);
		len = 0;
	}

}