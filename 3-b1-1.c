/*2353924 ��18 �뿡�� */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
const double Pi = 3.14159;
int main()
{
	printf("������뾶�͸߶�\n");
	double r,h, c, S, s, V, v;//�ֱ�Ϊ�뾶���߶ȣ�Բ�ܳ���Բ�����Բ��������Բ�������Բ�����

	scanf("%lf %lf",& r,& h);
	c = Pi * 2 * r;
	printf("Բ�ܳ�     :%.2lf \n", c);
	S = Pi * r * r;
	printf("Բ���     :%.2lf \n", S);
	s = 4 * Pi * r * r;
	printf("Բ������ :%.2lf \n", s);
	V = 4.0 / 3 * Pi * r * r * r;
	printf("Բ�����   :%.2lf \n", V);
	v = Pi * r * r * h;
	printf("Բ�����   :%.2lf \n", v);
}
