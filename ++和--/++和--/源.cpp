#include <stdio.h>

void main() {
	int x = 0;
	++x;
	++ ++x;
	--x = 10;
	(x = 5) = 10;
	(x += 5) = 7;
	//(x++)--�Ƿ�����Ϊx++��һ����ֵ
	/*��ֵ=��+=��*=��ǰ��++��--*/
	printf("%d %d", x, x++);
	getchar();
}