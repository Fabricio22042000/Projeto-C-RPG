#include <stdlib.h>
#include <stdio.h>
#include <gconio.h>
#include <unistd.h>
#include <time.h>

int main(){
    imprimirMenu();
    int opcao1 = opcoes();
    if(opcao1 == 2){
        clear();
        resumo();

    }
}

//Funcao para limpar o menu
void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}



int opcoes(){
    int escolha;
    printf("                            1 -> Iniciar\n");
    printf("                            2 -> Resumo\n");
    printf("                            3 -> Creditos\n\n");

    printf("                            -> ");
    scanf("%d", &escolha);
    return escolha;
}

//Ideia de imprimir caractere por caractere no resumo, para dar efeito de como se tivesse digitando
void resumo(){
    printf("COLCOAR O RESUMO AINDA");
}


void imprimirMenu(){
    printf("─▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▄                                    ─▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▄ \n");
    printf("█░░░█░░░░░░░░░░▄▄░██░█-----------------------------------█░░░█░░░░░░░░░░▄▄░██░█\n");
    printf("█░▀▀█▀▀░▄▀░▄▀░░▀▀░▄▄░█         Clube dos Garanhoes       █░▀▀█▀▀░▄▀░▄▀░░▀▀░▄▄░█\n");
    printf("█░░░▀░░░▄▄▄▄▄░░██░▀▀░█-----------------------------------█░░░▀░░░▄▄▄▄▄░░██░▀▀░█\n");
    printf("─▀▄▄▄▄▄▀─────▀▄▄▄▄▄▄▀                                    ─▀▄▄▄▄▄▀─────▀▄▄▄▄▄▄▀\n\n");

}

void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
