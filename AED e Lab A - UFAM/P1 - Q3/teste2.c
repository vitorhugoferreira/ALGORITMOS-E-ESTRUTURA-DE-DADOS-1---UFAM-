#include <stdio.h>

int main(void)
{
	int N;
	int *p1, *p2;
	int num1, num2;
	int i;
	
    printf("p1 = %p\np2 = %p\nnum1 = %p\nnum2 = %p", p1, p2, num1, num2);

	// Altere APENAS as atribuições de p1 e p2 abaixo
	p1 = &num1;
	p2 = &num2;
	// Não altere nada mais neste código!
	
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d%d", &num1, &num2);
		printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);
	}

    printf("p1 = %p\np2 = %p\nnum1 = %p\nnum2 = %p", p1, p2, &num1, &num2);

}