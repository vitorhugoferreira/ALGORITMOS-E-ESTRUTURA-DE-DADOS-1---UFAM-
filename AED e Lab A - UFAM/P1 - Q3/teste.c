#include <stdio.h>

int main(void)
{
	int num;
	int *p1 = NULL;
	int **p2;
	
	scanf("%d", &num);

	p2 = &p1;
	
	// Modifique APENAS o lado direito da atribuição abaixo
	*p2 = &num;
	// Modifique APENAS o lado direito da atribuição acima
	
	printf("O numero digitado foi %d\n", **p2);

    printf("P1 = %p\nP2 = %p\nnum = %p", p1, p2, num);
}