#include <stdio.h>
#include <string.h>
#include <float.h>
#define L 3.785
#define km 1.609

int main(void) {
	//1.
	//char fn[20] = {0};	//�������ַ�����fn��ʼΪ0����Ȼʹ��strlenʱ�ᾯ��c6054��
	//char ln[20];

	//printf("������������֣�\n");
	//scanf_s("%s", &fn, 20);
	//printf("������������ϣ�\n");
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
	//printf("����һ����������\n");
	//scanf_s("%f", &f);
	//printf("С�����������%.1f\n", f);
	//printf("ָ����������%.1e\n", f);

	//4.
	//char name[20];
	//float h;

	//printf("������������֣�\n");
	//scanf_s("%s", name, 20);
	//printf("�����������ߣ���λ�����ף���\n");
	//scanf_s("%f", &h);
	//printf("%s����������%.2f��", name, h / 100);

	//5.
	//float file;
	//float speed;

	//printf("Ҫ���ص��ļ��Ĵ�С����λ��MB����\n");
	//scanf_s("%f", &file);
	//printf("�����ٶ�Ϊ����λ��MB/s����\n");
	//scanf_s("%f", &speed);
	//printf("�����ٶ�Ϊ��%.2fMB/s���ļ���СΪ��%.2fMB\n", speed, file);
	//printf("�ڴ��ٶ��£����ش��ļ���Ҫ%.2f��", file / speed);

	//6.
	//char fname[20] = { 0 }, lname[20] = { 0 };

	//printf("������������֣�\n");
	//scanf_s("%s", fname, 20);
	//printf("������������ϣ�\n");
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

	printf("���������е��ọ́���λ��Ӣ���\n");
	scanf_s("%f", &mile);
	printf("������˶��������ĵ�����������λ�����أ���\n");
	scanf_s("%f", &gallon);
	printf("ÿ����������ʻ��%.1fӢ��\n", mile / gallon);
	printf("%.1fӢ��/���ص���%0.1f��/100����\n", mile / gallon, (gallon * L) / (mile * km));


	return 0;
}