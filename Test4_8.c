#include <stdio.h>

int main(void) {
	//1.
	char fn[20];
	char ln[20];

	printf("������������֣�\n");
	scanf_s("%s", &fn, 20);
	printf("������������ϣ�\n");
	scanf_s("%s", &ln, 20);
	printf("%s,%s\n", fn, ln);

	//2.
	printf("\"%s,%s\"\n", fn, ln);
	printf("\"%20s,%s\"\n", fn, ln);
	printf("\"%-20s,%-20s\"\n", fn, ln);

	return 0;
}