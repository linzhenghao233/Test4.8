#include <stdio.h>
#include <string.h>

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
	float f;
	printf("����һ����������\n");
	scanf_s("%f", &f);
	printf("С�����������%f\n", f);
	printf("ָ����������%e\n", f);


	return 0;
}