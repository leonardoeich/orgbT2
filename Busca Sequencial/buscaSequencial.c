#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	int k = NULL, *matriz = NULL;
    int i, target, achou = 0;

	printf("Tamanho do vetor: ");
	scanf("%i", &k);

	matriz = (int *)malloc(k * sizeof(int));

    //preenche o vetor com K números aleatórios
    srand(time(NULL));
	for (i = 0; i < k; i++){


		matriz[i] = rand() % k + 1;

		printf("Valor  %i : %i" , i+1,  matriz[i]);
		printf("\n");
	}


    //valor aleatorio a ser procurado no vetor
    target = rand() % k + 1;
    printf("Target: %i \n",target);
    //faz busca sequencial no vetor pelo valor target

    i = 0;
    while ((achou == 0) && (i < k))
    {
        if (matriz[i] == target)
            achou = 1;
        i++;
    }

    if (achou)
        printf("Encontrou target na posicao %i",i);
    else
        printf("Target nao existe no vetor");


	return 0;
}
