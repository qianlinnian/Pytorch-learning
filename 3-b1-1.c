/*2353924 信18 冯俊财 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
const double Pi = 3.14159;
int main()
{
	printf("请输入半径和高度\n");
	double r,h, c, S, s, V, v;//分别为半径，高度，圆周长，圆面积，圆球表面积，圆球体积，圆柱体积

	scanf("%lf %lf",& r,& h);
	c = Pi * 2 * r;
	printf("圆周长     :%.2lf \n", c);
	S = Pi * r * r;
	printf("圆面积     :%.2lf \n", S);
	s = 4 * Pi * r * r;
	printf("圆球表面积 :%.2lf \n", s);
	V = 4.0 / 3 * Pi * r * r * r;
	printf("圆球体积   :%.2lf \n", V);
	v = Pi * r * r * h;
	printf("圆柱体积   :%.2lf \n", v);
}
