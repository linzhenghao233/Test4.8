#include <stdio.h>
#include <string.h>

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
	float f;
	printf("输入一个浮点数：\n");
	scanf_s("%f", &f);
	printf("小数点计数法：%f\n", f);
	printf("指数计数法：%e\n", f);


	return 0;
}