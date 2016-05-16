#include <iostream>

int main(void) {
	printf("%.*s", 7, &"1234" /* 2233 */ "6781" "1314"[3]);

	//output sizeof type
	printf("%d\n", sizeof("abcdefgh"));
	printf("%d\n", sizeof(&"abcdefg"[1]));
	printf("%d\n", sizeof(strlen("gfw")));
	printf("%d\n", sizeof(sqrt(strlen("gfw"))));
	printf("%d\n", sizeof(sqrt(2 * strlen("gwf"))));
	printf("%d\n", sizeof(sqrt(2.0 * strlen("gfw"))));
	double x;
	//scanf_s("%lf", &x);
	//printf("%e", x);
	int y = 0;
	printf("%d\n", sizeof(x));
	printf("%d\n", sizeof(y));
	//output a path like c:\windows\

	//printf("apache path: %s\n", "\etc\apache2\");
	printf("missing %s%s", ", ", "something" "?");
	return 0;
}