#include <stdio.h>
#include <math.h>
#include "pilha.h"
#include "fila.h"
#include "tokenizacao.h"

int main() {
	//Substitua esta fun��o pela implementa��o do seu trabalho.
	printf("Digite uma express�o:\n");
	Token t = token_proximo();
	
	while(t.tipo != FIM && t.tipo != ERRO) {
		printf("\nToken = ");
		token_imprimir(t);
		t = token_proximo();
	}
	
	return 0;
}
