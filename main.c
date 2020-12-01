#include <stdlib.h>
#include <stdio.h>
#include <gconio.h>
#include <unistd.h>
#include <time.h>

int main(){
    imprimirMenu();
    int opcao1 = opcoes();
    if(opcao1 == 2){ //Resumo
        clear();
        resumo();
    }else if(opcao1 == 3){ //Creditos
        clear();
        creditos();
    }else if(opcao1 == 1){ //Iniciar
        clear();
        introducao();
        dragaoInicio();
        int continuar = introducao2();
        while(continuar != 0){
            clear();
            introducao();
            dragaoInicio();
            continuar = introducao2();
        }
        clear();
        batalha1(); //Falta implementar

    }else{
        clear();
        main();
    }
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
    int i = 0;
    char text[] = "O clube dos Garanhoes foi formado no ano de 1980 por um grupo de 3 adolescentes,Fabrício, Arthur, Rafael, onde na escola se teve a ideia de formar este grupo para combater o mau a fora, na hora, não passava de 3 adolescentes com sonhos estranhos, mau sabiam que iam se tornar o clube de maior reputação em Tyrondir..";

    for(int i = 0; i < sizeof(text)/sizeof(char);i++){
        printf("%c", text[i]);
        delay(1);
        usleep(1);
    }
    printf("\n");
    printf("\n");

    imprimirLogo();
}


void imprimirMenu(){
    printf("─▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▄                                    ─▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▄ \n");
    printf("█░░░█░░░░░░░░░░▄▄░██░█-----------------------------------█░░░█░░░░░░░░░░▄▄░██░█\n");
    printf("█░▀▀█▀▀░▄▀░▄▀░░▀▀░▄▄░█         Clube dos Garanhoes       █░▀▀█▀▀░▄▀░▄▀░░▀▀░▄▄░█\n");
    printf("█░░░▀░░░▄▄▄▄▄░░██░▀▀░█-----------------------------------█░░░▀░░░▄▄▄▄▄░░██░▀▀░█\n");
    printf("─▀▄▄▄▄▄▀─────▀▄▄▄▄▄▄▀                                    ─▀▄▄▄▄▄▀─────▀▄▄▄▄▄▄▀\n\n");

}

void imprimirLogo(){
    int voltar;
    printf("                            ░░░░░▄▄▀▀▀▀▀▀▀▀▀▄▄░░░░░\n");
    printf("                            ░░░░█░░░░░░░░░░░░░█░░░░\n");
    printf("                            ░░░█░░░░░░░░░░▄▄▄░░█░░░\n");
    printf("                            ░░░█░░▄▄▄░░▄░░███░░█░░░\n");
    printf("                            ░░░▄█░▄░░░▀▀▀░░░▄░█▄░░░\n");
    printf("                            ░░░█░░▀█▀█▀█▀█▀█▀░░█░░░\n");
    printf("                            ░░░█░░░░░░░░░░▄▄▄░░█░░░\n");
    printf("                            ░▄█░█▀▀█▀▀▀█▀▀▀█▀▀█░█▄░\n");
    printf("                            ▄▀░▄▄▀▄▄▀▀▀▄▀▀▀▄▄▀▄▄░▀▄\n");
    printf("                             █░░░░▀▄░█▄░░░▄█░▄▀░░░░█\n");
    printf("                            ░▀▄▄░█░░█▄▄▄▄▄█░░█░▄▄▀░\n");
    printf("                            ░░░▀██▄▄███████▄▄██▀░░░\n");
    printf("                            ░░░████████▀████████░░░\n");
    printf("                            ░░▄▄█▀▀▀▀█░░░█▀▀▀▀█▄▄░░\n");
    printf("                            ░░▀▄▄▄▄▄▀▀░░░▀▀▄▄▄▄▄▀░\n");
    printf("\n");
    printf("                                0 -> Voltar\n");
    printf("                                  -> ");
    scanf("%d",&voltar);
    if(voltar == 0){
        clear();
        main();
    }
}

void creditos(){
    int voltar;
    printf(".   ║\.\n");
    printf("    ║▒\.            ---------------------------------- \n");
    printf("    ║▒▒                         GRUPO\n");
    printf("    ║░▒ ║           ----------------------------------\n");
    printf("    ║░▒║\n");
    printf("    ║░▒ ║                      .Fabrício Moura\n");
    printf("    ║░▒║                       .Arthur Amaral\n");
    printf("    ║░▒║                       .Rafael Petrucci\n");
    printf("    ║░▒ ║\n");
    printf("    ║░▒║\n");
    printf("    ║░▒ ║\n");
    printf("    ║░▒║\n");
    printf("▓▓▓▓▓▓▓\n");
    printf("     ]█▓[\n");
    printf("     ]█▓[\n");
    printf("     ]█▓[\n");
    printf("\n");
    printf("\n");
    printf("                                0 -> Voltar\n");
    printf("                                  -> ");
    scanf("%d",&voltar);
    if(voltar == 0){
        clear();
        main();
    }
}

void dragaoInicio(){
    printf("                                             __----~~~~~~~~~~~------___\n");
    printf("                                  .  .   ~~//====......          __--~ ~~\n");
    printf("                  -.            \_|//     |||\\  ~~~~~~::::... /~\n");
    printf("               ___-==_       _-~o~  \/    |||  \\            _/~~-\n");
    printf("       __---~~~.==~||\=_    -_--~/_-~|-   |\\   \\        _/~\n");
    printf("   _-~~     .=~    |  \\-_    '-~7  /-   /  ||    \      /\n");
    printf(" .~       .~       |   \\ -_    /  /-   /   ||      \   /\n");
    printf("/  ____  /         |     \\ ~-_/  /|- _/   .||       \ /\n");
    printf("|~~    ~~|--~~~~--_ \     ~==-/   | \~--===~~        .\"\n");
    printf("         '         ~-|      /|    |-~\~~       __--~~\n");
    printf("                     |-~~-_/ |    |   ~\_   _-~            /\"\n");
    printf("                          /  \     \__   \/~                \__\n");
    printf("                      _--~ _/ | .-~~____--~-/                  ~~==.\n");
    printf("                     ((->/~   '.|||' -_|    ~~-/ ,              . _||\n");
    printf("                                -_     ~\      ~~---l__i__i__i--~~_/\n");
    printf("                                _-~-__   ~)  \--______________--~~\n");
    printf("                              //.-~~~-~_--~- |-------~~~~~~~~\n");
    printf("                                     //.-~~~--\"\n");
}

void introducao(){
    printf("Campanha onde o Clube dos Garanhões são contratados para uma simples escolta de um comerciante, saindo da fronteira de Deheon e indo para Cosamhir, capital de Tyrondir. Mas no caminho ficam presos numa cidade sendo atacada por dragões da Aliança Negra que conseguiram furar o bloqueio do Exército do Reinado. Mas a verdade é bem pior e eles acabam descobrindo um grande plano da Aliança Negra para invadir Dozza por passagens subterrâneas. Cabe aos clube dos garanhões fazer algo para que a AN não realize seu plano.");
    printf("\n");
    printf("\n");
    printf("\n");
}

int introducao2(){
    int continuar;
    printf("\n");
    printf("\n");
    printf("Depois de escoltarem o comerciante, o Clube dos Garanhões procuram um lugar para dormir na cidade quando se deparam com uma criatura estranha, algo não estava certo...");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                             0 -> Continuar\n");
    printf("                               -> ");
    scanf("%d", &continuar);
    return continuar;
}

batalha1(){ //Falta implementar
    printf("batalha1");
}

void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
