// coutletters.c
// Abre arquivos texto (em formato utf-8, com acentos) e conta as letras.
// Letras acentuadas contam como letras não-acentuadas.
// bibliotecas utilizadas 
#include <stdio.h>
#include <wchar.h> 	// funções para tratar caracteres longos (wchar)
#include <wctype.h> 	// versão de ctype para caracteres longos (wchar)
#include <locale.h>	// Implementa regras regionais para codificação e 
							// acentuação
//---------------------------------------------------------------------------
// Função para normalização dos caracteres acentuados
// Esta função recebe um caracter longo (wchar) e remove o acento, se houver
//---------------------------------------------------------------------------
wchar_t normalizar(wchar_t c) {
	switch (c) {
		case L'á': case L'à': case L'â': case L'ã': case L'ä':
		case L'Á': case L'À': case L'Â': case L'Ã': case L'Ä':
			return L'A';
		case L'é': case L'è': case L'ê': case L'ë':
		case L'É': case L'È': case L'Ê': case L'Ë':
   		return L'E';
		case L'í': case L'ì': case L'î': case L'ï':
		case L'Í': case L'Ì': case L'Î': case L'Ï':
			return L'I';
		case L'ó': case L'ò': case L'ô': case L'õ': case L'ö':
		case L'Ó': case L'Ò': case L'Ô': case L'Õ': case L'Ö':
			return L'O';
		case L'ú': case L'ù': case L'û': case L'ü':
		case L'Ú': case L'Ù': case L'Û': case L'Ü':
   		return L'U';
		case L'ç': case L'Ç':
			return L'C';
		default:
			return towupper(c);
   }
}
//---------------------------------------------------------------------------
// Função principal
// A função deve receber três parâmetros pela linha de comando:
// 	1. nome do programa
//		2. nome do arquivo de entrada
//		3. nome do arquivo de saída
//
// argc: conta o número de parâmetros (cadeias de caracteres) 
//			na linha de comando
//
// argv[]: vetor com as cadeias de caracteres digitadas na linha.
// 		  A posição 0 de argv[] é sempre o nome do programa. as outras 
//			  posições correspondem as outras cadeias digitadas depois dela
//         na linha de comando.
//---------------------------------------------------------------------------
int main(int argc, char *argv[]) {  //argc da o numero de elementos que estao na linha de comando,  argv: vetor de strings que contem as strings do numero de elementos (argv["./a.out","entrada.txt","saida.txt"])
	setlocale(LC_ALL, "");	// seta as regras locais para classificação, 
									// acentos, maiúsculas/minúsculas, etc.
	// verifica os parâmetros da linha de comando
	// Deve haver 3 strings na linha:
	// 1. nome do programa
	// 2. nome do arquivo de entrada
	// 3. nome do arquivo de saída
	if (argc != 3) { // número de parâmetros errado
		printf("Uso: %s <entrada.txt> <saida.txt>\n", argv[0]);
		return 1;
	}
	// Abre o arquivo de entrada (modo de leitura)
	FILE *entrada = fopen(argv[1], "r");
	if (!entrada) {
		printf("Erro ao abrir arquivo de entrada.\n");
		return 1;
	}
	// Abre o arquivo de saída (modo de escrita)        //W VAI APAGAR E CRIAR OUTRO COM ESSE NOME
	FILE *saida = fopen(argv[2], "w");
	if (!saida) {
		printf("Erro ao abrir arquivo de saída.\n");
		fclose(entrada);
		return 1;
	}
	// Inicializa o vetor para contagem das letras
	int contagem[26] = {0};
	// cria uma variável para conter cada letra lida do texto na entrada
	wchar_t c; // c é um caracter longo (utf-8)
	// processa cada caractere do arquivo de entrada
	while ((c = fgetwc(entrada)) != WEOF) { // WEOF = EOF para wchar
		if (iswalpha(c)) { 		// iswalpha() == isalpha() para wchar
			c = normalizar(c);	// chama a função de normalização
			// verifica se o caractere lido é uma letra. O 'L' antes do 
			// caractere indica que trata-se de um caractere utf-8 
			if (c >= L'A' && c <= L'Z') {
				contagem[c - L'A']++;	// se é uma letra, soma 1 na posição 
												// correspondente do vetor de contagem
			}
		}
	}
	// imprime a saída. Varre o vetor de contagem e imprime a quantidade de
	// cada letra no texto de entrada
	for (int i = 0; i < 26; i++) {
		fprintf(saida, "%c: %d\n", 'A' + i, contagem[i]);
	}
	// fecha os arquivos de entrada e de saída
	fclose(entrada);
	fclose(saida);
   return 0;
}
