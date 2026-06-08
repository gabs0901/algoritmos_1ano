//beecrowd 1024
#include <stdio.h>
#include <string.h>     //funções sobre strings
#include <ctype.h>      ///funções sobre caracteres individuais

int main (){
	//declracao de variaveis
	char texto[1002]; //linha a ser criptografada,   dois caracteres pra conter o enter e o \0
	int n;  //numeo de casos de teste
	char aux;   //character auxiliar

	//leitura dos dados de entrada
	scanf("%d", &n);    //buffer de teclado, enter fica armazenado para a proxima entrada pq fica armazenado no buffer de teclado
	getchar(); //esvazia o buffer de teclado: le o character sem que de enter, vai ser o \n do enter do scanf anterior    

	//processa os casos de teste
	for(int i = 0; i < n; i++){
	fgets(texto, 1001, stdin);  //pega o ultimo enter e joga na cadeia    
		texto[strlen(texto)-1] = '\0';  //tira o "\n" do fim 

		//criptografia
		//primeiro passo
		int len = strlen(texto);
		for(int j = 0; j < len; j++){	//nao preciso chamar o len dentro do for,
			if(isalpha(texto[j])){
				texto[j] = (texto [j] + 3);
			}	//identificar o caracter na posicao j, se for alfabetico (isalpha)
		}

		//segundo passo
		for(int j = 0, k = len -1; j < k; j++, k--) {
			aux = texto[j];
			texto[j] = texto[k];
			texto[k] = aux;
		}
		
		//terceiro passo
		int k = len/2;	//calcula a metade truncada
		for(int j = len -1; j >= k; j--){
			texto [j] = texto[j] -1;
		} 
		
		//impressao do resultado
		printf("%s\n", texto);
	}
		return 0;
}
