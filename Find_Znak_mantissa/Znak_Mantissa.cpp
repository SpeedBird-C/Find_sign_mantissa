#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
union
{
	float num;
	unsigned int a;//����� ����������� ����� ������� ������ ������� � ���������� ��������, ��� ��� �� ���������� ����� � ������� ��������� �������
}union1;
int main()
{
	
	scanf("%f",&union1.num);
	unsigned int mantissa = union1.a & 0x7FFFFF; //0x7FFFFF - 11111111111111111111111, ��� 23 ����, ����� ��������, �������� �� ���������
	unsigned int exp = (union1.a >> 23) & 0xFF; //0xFF - 11111111, ��� 8 ���, ������ ����������, �������� �� �������� ������ 
	unsigned int sgn = (union1.a >> 31) & 0x1; //����, �������� �� �������� � ���������� ������
	printf("\n\n\n%d", sgn);
	printf("\n\n\n%d", exp);
	printf("\n\n\n%d", mantissa);
	_getch();
	return 0;
}