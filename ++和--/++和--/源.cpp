#include <stdio.h>

void main() {
	int x = 0;
	++x;
	++ ++x;
	--x = 10;
	(x = 5) = 10;
	(x += 5) = 7;
	//(x++)--非法，因为x++是一个右值
	/*左值=，+=，*=，前置++，--*/
	printf("%d %d", x, x++);
	getchar();
}