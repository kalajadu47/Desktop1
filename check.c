#include <stdio.h>
int main()
{
	int count = 0;
	for (;;) {
		if (count == 10)
			break;
		printf("%d ", ++count);
	}
	return 0;
}