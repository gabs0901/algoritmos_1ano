#include <stdio.h>
#include <string.h>

#define CLEAR "\033[h\033[2J"

char board[3][3] = {{'_', '_', '_'}, {'_', '_', '_'}, {'_', '_', '_'}};
char player[2] = {'X', 'O'};
short wins[2]={0, 0};
short currentplayer = 0;
short l=0, c=0;
short jogada;

void clrscr(){
    printf(CLEAR); //limpa a tela
 return;
}

void wait(){
    printf("Tecle ENTER");
    getchar();
    getchar();
}

void printheader(){
    printf("\tJogo da Velha\n\n");
    printf("Jogador 1=X\t%hd virórias\n", wins[0]);
    printf("Jogador 2=O\t%hd virórias\n", wins[1]);
    printf("Jogador atual = %hd\n", currentplayer+1);
    printf("Jogada Atual = %hd\n\n", jogada);
}

void printboard(){
    printf("\t   0   1   2\n");
    printf("\t  ___ ___ ___\n");
    for(int i = 0; i < 3; i++) {
        printf("\t%d|", i);
        for(int j = 0; j < 3; j++){
            printf("_%c_|", board[i][j]);
        }
        printf("\n");
    }
}

int playerwin(char playersymb){

    //vertifica se o jogador ganhou apos a sua jogada
    
    //testa as linhas
    if(board[0][0] == playersymb && board[0][0] == playersymb && board[0][2] == playersymb){
        return 1;    
    } else if (board[1][0] == playersymb && board[1][1] == playersymb && board[1][2] == playersymb){
        return 1;
    } else if (board[2][0] == playersymb && board[2][1] == playersymb && board[2][2] == playersymb){
        return 1;

    //testa as colunas
    } else if (board[0][0] == playersymb && board[1][0] == playersymb && board[2][0] == playersymb){
        return 1;
    } else if (board[0][1] == playersymb && board[1][1] == playersymb && board[2][1] == playersymb){
        return 1;
    } else if (board[0][2] == playersymb && board[1][2] == playersymb && board[2][2] == playersymb){
        return 1;

    //testa as diagonais
    } else if (board[0][0] == playersymb && board[1][1] == playersymb && board[2][2] == playersymb){
        return 1;
    } else if (board[0][2] == playersymb && board[1][1] == playersymb && board[2][0] == playersymb){
        return 1;
    //nao ganhou
    } else {
        return 0;
    }
}

int predict(char playersymb){
    
}

/*******************************
*Função valida(int l, int col): valida a jogada
*parametros: linha e coluna onde se deseja jogar
*retorna: 0 movimento valido; 1 movimento valido
*******************************/

int valida(int l, int c){
    if(board[l][c] == '_'){
        return 1;
    } else {
        return 0;
    }
}

/****************************
* Função getmovement(): recebe a jogada *
****************************/

int getmovement(){
    printf("Posição desejada:\n");
    printf("Linha(0-2): ")/
    scanf("%hd", &l);
    printf("Coluna(0-2): ");
    scanf("%hd", &c);
    if(valida(l, c)){
        board[l][c] = player[currentplayer];
        return 1;
    } else {
        return 0;        
    }
}

/**********************************
* Função para preditar a jogada
**********************************/
int predict(currentplayer){

}
//para toda L e D verificar se existem duas marcas de player X e verificar se ele eh o proximo
//E a jogada tem que estar dentro das 9

/*********************
* Função principal *
*********************/
int main(){
    char newgame = 's';
    jogada = 0;

    while(newgame == 's'){
        clrscr();
        jogada++;   //incrementa a jogada
        printheader();
        printboard();
        printf("\n");
        if(jogada > 9){ //verifica empate
            printf("Jogo empatado!");
            printf("Novo jogo? (s/n) >> ");
                getchar();  //limpa o buffer
                scanf("%c", &newgame);
                if(newgame == 'n') {
                    break;
                } else {
                    memset(board, '_', sizeof(board[0][0])*3*3);  //limpa board
                    currentplayer = 0;  //zera o jogador atual
                    jogada = 0; //zera a jogada
                }
        } else {
            if(!getmovement()){ //testa movimento invalido
                printf("Movimento invalido! - tente novamente.");
                jogada--;
                wait();
            } else { //movimento invalido
                    clrscr();
                    printheader();
                    printboard();
                    putchar('\n');
                    if(playerwin(player[currentplayer])){   //verifica se ha vitoria
                        wins[currentplayer]++;
                        printf("*** JOGADOR %d GANHOU!!!***\n\n", currentplayer + 1);
                        printf("Novo jogo? (s/n) >> ");
                        getchar(); //limpa o buffer
                        scanf("%c", &newgame);
                        if(newgame == 'n'){ //deseja novo jogo?
                            break;
                        } else {
                            memset(board, '_', sizeof(board[0][0])*3*3);  //limpa board
                            currentplayer = 0;  //zera o jogador atual
                            jogada = 0; //zera a jogada
                        }
                    } else {    //ainda nao hove vitoria
                        currentplayer = (currentplayer + 1)%2;
                    }
            }             
        }
    }
}

