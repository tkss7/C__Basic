//file2.c

#include "file.h"
/*
void myName(); //���Ϻ��� �Լ� ������ �ʿ���
void myAge();
void mySal(); //��� �θ��� �𸣴ϱ� �ϴ� ��������
*/
int salary = 3500000; // �ȵǴ� �����Ϸ��� �� ����
//extern int salary;
/*
int salary; ==> �̷��� ���������� ������ �ΰ��̹Ƿ� �ߺ�����ó����
extern ���� ������ ������ �޸��Ҵ��� ���� �ʰ�
�����Ϸ����� �ڷ����� �˸���.
*/

void mySal()
{
	//printf("����: %d \n", SUDANG);
	salary += SUDANG;

	//myName();
	//myAge();
}