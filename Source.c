#include <stdio.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	
	puts("������� 1\n");

	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf(" c = %c , i = %d , f = %f , d = %le \n",c,i,f,d);


	puts("��\n");

	int t, m, s, v;
	scanf(" %d ", &m);
	scanf(" %d ", &t);
	scanf(" %d ", &s);
	printf("m = %d �����, t = %d �������, s = %d ������ ����� �������� \n", m,t,s);
	v = (s * t) / m;
	printf("�������� ������ = %d �/� \n", v);

	puts("������� 2 \n");

	int a = 11, b = 3, x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("%d , %f , %fe \n", x,y,z);
	a1 = (float)a/b;
	s1 = (double)a/b;
	printf("%f,%fe\n", s1,a1);

	puts("������� 3 \n");

	int n,summa,pervaya,poslednyaya, nn;
	scanf("%d", &n);
	pervaya = n / 100;
	poslednyaya = n % 10;
	nn = ((n % 100) - (n % 10)) / 10;
	summa = pervaya + nn + poslednyaya;
	printf("������ - %d , ��������� - %d , ����� ���� - %d", pervaya, poslednyaya, summa);
	printf("����� �������� %d%d%d", poslednyaya, nn, pervaya );





}