#include <stdio.h>

void my_print(void)
{
	printf("Catalin!\n");
	printf("%s\n", __func__);
	printf("My custom hello world!\n");
}

int main()
{
	printf("Hello World!\n");

	return 0;
}
