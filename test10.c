#include <stdio.h>

void my_print(void)
{
	printf("%s\n", __func__);
}

int main()
{
	printf("Hello World!\n");

	return 0;
}
