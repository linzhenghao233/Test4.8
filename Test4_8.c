#include <stdio.h>
#include <string.h>
#include <float.h>
#define L 3.785
#define km 1.609

int main(void) {
	//1.
	//char fn[20] = {0};	//将变量字符数组fn初始为0。不然使用strlen时会警告c6054。
	//char ln[20];

	//printf("请输入你的名字：\n");
	//scanf_s("%s", &fn, 20);
	//printf("请输入你的姓氏：\n");
	//scanf_s("%s", &ln, 20);
	//printf("%s,%s\n", fn, ln);

	//2.
	//int len = 0;
	//len = strlen(fn);

	//printf("\"%s\"\n", fn);
	//printf("\"%20s\"\n", fn);
	//printf("\"%-20s\"\n", fn);
	//printf("%*s\n", len + 3, fn);

	//3.
	//float f;
	//printf("输入一个浮点数：\n");
	//scanf_s("%f", &f);
	//printf("小数点计数法：%.1f\n", f);
	//printf("指数计数法：%.1e\n", f);

	//4.
	//char name[20];
	//float h;

	//printf("请输入你的名字：\n");
	//scanf_s("%s", name, 20);
	//printf("请输入你的身高（单位：厘米）：\n");
	//scanf_s("%f", &h);
	//printf("%s，你的身高是%.2f米", name, h / 100);

	//5.
	//float file;
	//float speed;

	//printf("要下载的文件的大小（单位：MB）：\n");
	//scanf_s("%f", &file);
	//printf("下载速度为（单位：MB/s）：\n");
	//scanf_s("%f", &speed);
	//printf("下载速度为：%.2fMB/s，文件大小为：%.2fMB\n", speed, file);
	//printf("在此速度下，下载此文件需要%.2f秒", file / speed);

	//6.
	//char fname[20] = { 0 }, lname[20] = { 0 };

	//printf("请输入你的名字：\n");
	//scanf_s("%s", fname, 20);
	//printf("请输入你的姓氏：\n");
	//scanf_s("%s", lname, 20);
	//printf("%s %s\n", fname, lname);
	//int len1 = strlen(fname);
	//int len2 = strlen(lname);
	//printf("%*d %*d\n", len1, len1, len2, len2);
	//printf("%s %s\n", fname, lname);
	//printf("%-*d %-*d\n", len1, len1, len2, len2);

	//7.
	//double num1 = 1.0 / 3.0;
	//float num2 = 1.0 / 3.0;

	//printf("%.6f, %.12f, %.16f\n", num1, num1, num1);
	//printf("%.6f, %.12f, %.16f\n", num2, num2, num2);
	//printf("%d %d", FLT_DIG, DBL_DIG);

	//8.
	float gallon;
	float mile;

	printf("请输入旅行的旅程（单位：英里）：\n");
	scanf_s("%f", &mile);
	printf("请输入此段旅行消耗的汽油量（单位：加仑）：\n");
	scanf_s("%f", &gallon);
	printf("每加仑汽油行驶了%.1f英里\n", mile / gallon);
	printf("%.1f英里/加仑等于%0.1f升/100公里\n", mile / gallon, (gallon * L) / (mile * km));


	return 0;
}