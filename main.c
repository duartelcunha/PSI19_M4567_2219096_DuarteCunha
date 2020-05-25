#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#include <conio.h>
#include <locale.h>
#include <time.h>

struct utilizador
{
 char user[15];
 int pin;
};

struct utilizador p;

void login()
{
textcolor(WHITE);
system("cls");
gotoxy(20,2);
printf(">>LOGIN<<");
Sleep(500);
gotoxy(20,4);
printf("Utilizador: ");
gets(p.user);
Sleep(300);
gotoxy(20,6);
printf("Código PIN: ");
scanf("%i",&p.pin);
Sleep(300);
fflush(stdin);
if(strcmp(p.user,"Carla")==0 || strcmp(p.user,"Duarte")==0)
{
if(p.pin==8006 || p.pin==123)
{
system("cls");
gotoxy(20,4);
textcolor(GREEN);
printf("LOGIN EFETUADO COM SUCESSO");
Sleep(900);
//acesso
}
else
{
system("cls");
gotoxy(20,4);
textcolor(RED);
printf("CÓDIGO INCORRETO\n\n");
system("pause");
main();
}
}
else
{
system("cls");
gotoxy(20,4);
textcolor(RED);
printf("UTILIZADOR INEXISTENTE\n\n");
system("pause");
main();
}
}






int main()
{
setlocale(LC_ALL, "Portuguese");
int n;

//------------------------------------------------------------------------------------
system("cls");
login();
system("cls");
//------------------------------------------------------------------------------------
bemvindo();
gotoxy(24, 4);
textcolor(GREEN);
printf(" %s",p.user);
Sleep(900);
//menu--------------------------------------------------------------------------------
menu();
gotoxy(56, 20);
printf("9: Sair");
gotoxy(35, 20);
printf("Digite o Nº: ");
scanf("%i",&n);
if(n==9)
{
saida();
}
else
{
//continua
}
switch(n)
{
case 1:
system("cls");
instrumentosfaturatalao();
break;
case 2:
;
}

return 0;
}


void bemvindo()
{
//bem-vindo-------------------------------------------------------------------------
textcolor(WHITE);
gotoxy(15, 4);
printf("B");
Sleep(100);
gotoxy(16, 4);
printf("e");
Sleep(100);
gotoxy(17, 4);
printf("m");
Sleep(100);
gotoxy(18, 4);
printf("-");
gotoxy(19, 4);
printf("V");
Sleep(100);
gotoxy(20, 4);
printf("i");
Sleep(100);
gotoxy(21, 4);
printf("n");
Sleep(100);
gotoxy(22, 4);
printf("d");
Sleep(100);
gotoxy(23, 4);
printf("o");
Sleep(100);
}



void menu()
{
system("cls");
textcolor(WHITE);
//logo------------------------------------------------------------------------
lojatexto();
gotoxy(35, 4);
printf("--_-_-_-_---");
Sleep(100);
gotoxy(35, 5);
printf("   -_-_-_");
Sleep(100);
gotoxy(35, 6);
printf("    -_-_-");
Sleep(100);
gotoxy(35, 7);
printf("     -__-");
Sleep(100);
gotoxy(35, 8);
printf("    _-_");
Sleep(100);
gotoxy(35, 9);
printf("   _-");
Sleep(100);
gotoxy(35, 10);
printf("   -_");
Sleep(100);
gotoxy(35, 11);
printf("    _-_");
Sleep(100);
//linha-esquerda----------------------------------------------------------------------
gotoxy(10,2);
printf("|");
Sleep(30);
gotoxy(10,3);
printf("|");
Sleep(30);
gotoxy(10, 4);
printf("||");
Sleep(30);
gotoxy(10, 5);
printf("||");
Sleep(30);
gotoxy(10, 6);
printf("||");
Sleep(30);
gotoxy(10, 7);
printf("||");
Sleep(30);
gotoxy(10, 8);
printf("||");
Sleep(30);
gotoxy(10, 9);
printf("||");
Sleep(30);
gotoxy(10, 10);
printf("||");
Sleep(30);
gotoxy(10, 11);
printf("||");
Sleep(30);
gotoxy(10, 12);
printf("||");
Sleep(30);
gotoxy(10, 13);
printf("||");
Sleep(30);
gotoxy(10, 14);
printf("||");
Sleep(30);
gotoxy(10, 15);
printf("||");
Sleep(30);
gotoxy(10, 16);
printf("||");
Sleep(30);
gotoxy(10, 17);
printf("||");
Sleep(30);
gotoxy(10, 18);
printf("||");
Sleep(30);
gotoxy(10, 19);
printf("||");
Sleep(30);
gotoxy(10, 20);
printf("||");
Sleep(30);
gotoxy(10, 21);
printf("||");
Sleep(30);
gotoxy(10, 22);
printf("||");
Sleep(30);
gotoxy(10, 23);
printf("|");
Sleep(30);
//linha-direita-------------------------------------------------------------------------
gotoxy(80,2);
printf(" |");
Sleep(30);
gotoxy(80,3);
printf(" |");
Sleep(30);
gotoxy(80, 4);
printf("||");
Sleep(30);
gotoxy(80, 5);
printf("||");
Sleep(30);
gotoxy(80, 6);
printf("||");
Sleep(30);
gotoxy(80, 7);
printf("||");
Sleep(30);
gotoxy(80, 8);
printf("||");
Sleep(30);
gotoxy(80, 9);
printf("||");
Sleep(30);
gotoxy(80, 10);
printf("||");
Sleep(30);
gotoxy(80, 11);
printf("||");
Sleep(30);
gotoxy(80, 12);
printf("||");
Sleep(30);
gotoxy(80, 13);
printf("||");
Sleep(30);
gotoxy(80, 14);
printf("||");
Sleep(30);
gotoxy(80, 15);
printf("||");
Sleep(30);
gotoxy(80, 16);
printf("||");
Sleep(30);
gotoxy(80, 17);
printf("||");
Sleep(30);
gotoxy(80, 18);
printf("||");
Sleep(30);
gotoxy(80, 19);
printf("||");
Sleep(30);
gotoxy(80, 20);
printf("||");
Sleep(30);
gotoxy(80, 21);
printf("||");
Sleep(30);
gotoxy(80, 22);
printf("||");
Sleep(30);
gotoxy(80, 23);
printf(" |");
Sleep(30);
//linha-baixo-------------------------------------------------------------------------
gotoxy(12, 22);
printf("____________________________________________________________________");
Sleep(300);
gotoxy(11, 23);
printf("______________________________________________________________________");
Sleep(300);
//art-------------------------------------------------------------------------
gotoxy(16, 6);
printf("1. Instrumentos");
gotoxy(18, 8);
printf("     _");
Sleep(100);
gotoxy(18, 9);
printf("    / 7");
Sleep(100);
gotoxy(18, 10);
printf("   /_(");
Sleep(100);
gotoxy(18, 11);
printf("   |_|");
Sleep(100);
gotoxy(18, 12);
printf("   |_|");
Sleep(100);
gotoxy(18, 13);
printf("   |_|");
Sleep(100);
gotoxy(18, 14);
printf("   |_| /\\");
Sleep(100);
gotoxy(18, 15);
printf(" /\\|=|/ /");
Sleep(100);
gotoxy(18, 16);
printf("  \\|_| /");
Sleep(100);
gotoxy(18, 17);
printf("  ) _  \\");
Sleep(100);
gotoxy(18, 18);
printf(" / |_|  \\");
Sleep(100);
gotoxy(18, 19);
printf("/  -=-o /");
Sleep(100);
gotoxy(18, 20);
printf("\\  /~\_/");
Sleep(100);
gotoxy(18, 21);
printf(" \\/");
Sleep(100);
//acessorios---------------------------------------------------------------------------------
gotoxy(55, 6);
printf("2. Outros");
gotoxy(54, 9);
printf("   ______________");
Sleep(100);
gotoxy(54, 10);
printf("  |`.____________`.");
Sleep(100);
gotoxy(54, 11);
printf("  | |_''_o_o__o =.|");
Sleep(100);
gotoxy(54, 12);
printf("  | | ,--.   ,--. :");
Sleep(100);
gotoxy(54, 13);
printf("  | |( () ) ( () )|");
Sleep(100);
gotoxy(54, 14);
printf("  `.|_`-_'___`-_'_|");
Sleep(100);

}



void layout()
{
//linha-esquerda----------------------------------------------------------------------
gotoxy(10, 2);
printf("|");
gotoxy(10, 3);
printf("||");
gotoxy(10, 4);
printf("||");
gotoxy(10, 5);
printf("||");
gotoxy(10, 6);
printf("||");
gotoxy(10, 7);
printf("||");
gotoxy(10, 8);
printf("||");
gotoxy(10, 9);
printf("||");
gotoxy(10, 10);
printf("||");
gotoxy(10, 11);
printf("||");
gotoxy(10, 12);
printf("||");
gotoxy(10, 13);
printf("||");
gotoxy(10, 14);
printf("||");
gotoxy(10, 15);
printf("||");
gotoxy(10, 16);
printf("||");
gotoxy(10, 17);
printf("||");
gotoxy(10, 18);
printf("||");
gotoxy(10, 19);
printf("||");
gotoxy(10, 20);
printf("||");
gotoxy(10, 21);
printf("||");
gotoxy(10, 22);
printf("||");
gotoxy(10, 23);
printf("|");
//linha-direita-------------------------------------------------------------------------
gotoxy(80, 2);
printf(" |");
gotoxy(80, 3);
printf("||");
gotoxy(80, 4);
printf("||");
gotoxy(80, 5);
printf("||");
gotoxy(80, 6);
printf("||");
gotoxy(80, 7);
printf("||");
gotoxy(80, 8);
printf("||");
gotoxy(80, 9);
printf("||");
gotoxy(80, 10);
printf("||");
gotoxy(80, 11);
printf("||");
gotoxy(80, 12);
printf("||");
gotoxy(80, 13);
printf("||");
gotoxy(80, 14);
printf("||");
gotoxy(80, 15);
printf("||");
gotoxy(80, 16);
printf("||");
gotoxy(80, 17);
printf("||");
gotoxy(80, 18);
printf("||");
gotoxy(80, 19);
printf("||");
gotoxy(80, 20);
printf("||");
gotoxy(80, 21);
printf("||");
gotoxy(80, 22);
printf("||");
gotoxy(80, 23);
printf(" |");
//linha-cima-------------------------------------------------------------------------
gotoxy(11, 1);
printf("______________________________________________________________________");
gotoxy(12, 2);
printf("____________________________________________________________________");
//linha-baixo-------------------------------------------------------------------------
gotoxy(12, 22);
printf("____________________________________________________________________");
gotoxy(11, 23);
printf("______________________________________________________________________");
//------------------------------------------------------------------------------------
}



void instrumentosfaturatalao()
{
int n2,n3,qt1,qt2,qtotal,q1,q2;
char cc[10],cvc[4],vldd[3],vldm[3];
FILE *ficheiro;
FILE *ficheiro2;
q1=0;
q2=0;
qt1=0;
qt2=0;
//linha-esquerda----------------------------------------------------------------------
do {
system("cls");
layout();
//------------------------------------------------------------------------------------
gotoxy(25, 8);
printf("1-Guitarra");
gotoxy(25, 9);
printf("2-Piano");
gotoxy(25, 10);
printf("3-Violino");
gotoxy(25, 11);
printf("4-Flauta");
gotoxy(25, 12);
printf("5-Saxofone");
gotoxy(25, 13);
printf("6-Tambor");
gotoxy(25, 16);
printf("Digite o Nº: ");
scanf("%i",&n2);
switch(n2)
{
case 1:
system("cls");
gotoxy(8, 1);
printf("        ___");
gotoxy(8, 2);
printf("      o|* *|o");
gotoxy(8, 3);
printf("      o|* *|o");
gotoxy(8, 4);
printf("      o|* *|o");
gotoxy(8, 5);
printf("       \\===/");
gotoxy(8, 6);
printf("        |||");
gotoxy(8, 7);
printf("        |||");
gotoxy(8, 8);
printf("        |||");
gotoxy(8, 9);
printf("        |||");
gotoxy(8, 10);
printf("     ___|||___");
gotoxy(8, 11);
printf("    /   |||   \\");
gotoxy(8, 12);
printf("   /    |||    \\");
gotoxy(8, 13);
printf("  |    |||     |");
gotoxy(8, 14);
printf("   \\   (|||)  /");
gotoxy(8, 15);
printf("    |   |||   |");
gotoxy(8, 16);
printf("   /    |||    \\");
gotoxy(8, 17);
printf("  /     |||     \\");
gotoxy(8, 18);
printf(" /      |||      \\");
gotoxy(8, 19);
printf(" |     [===]     |");
gotoxy(8, 20);
printf("  \\             /");
gotoxy(8, 21);
printf("   '.         .'");
gotoxy(8, 22);
printf("     '-------'");
gotoxy(30, 6);
printf("PREÇO: 175$");
gotoxy(30, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&qt1);
q1=175*qt1;
q2=860*qt2;
gotoxy(30, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO? 1:Sim | 2:Não\n");
gotoxy(52, 11);
scanf("%i",&n3);
break;
case 2:
system("cls");
gotoxy(8, 1);
printf(" _____________________________________");
gotoxy(8, 2);
printf("|\\                                    \\");
gotoxy(8, 3);
printf("| \\                                    \\");
gotoxy(8, 4);
printf("|  \\____________________________________\\");
gotoxy(8, 5);
printf("|  |       __---_ _---_                 |");
gotoxy(8, 6);
printf("|  |      |======|=====|                |");
gotoxy(8, 7);
printf("|  |      |======|=====|                |");
gotoxy(8, 8);
printf("|  |  ____|__---_|_---_|______________  |");
gotoxy(8, 9);
printf("|  | |                                | |");
gotoxy(8, 10);
printf("| \\ \\                               \\ \\");
gotoxy(8, 11);
printf("|  \\||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\| |");
gotoxy(8, 12);
printf("|  |\\ ,-------------------------------- |");
gotoxy(8, 13);
printf("|  ||| |                            | | |");
gotoxy(8, 14);
printf(" \\ ||| |           -  -             | | |");
gotoxy(8, 15);
printf("  \\'|| |-----------\\-\\--------------| | |");
gotoxy(8, 16);
printf("    \\|_|            "  "               \\|_|/");
gotoxy(52, 6);
printf("PREÇO: 860$");
gotoxy(52, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&qt2);
gotoxy(52, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO? 1:Sim | 2:Não\n");
gotoxy(52, 11);
scanf("%i",&n3);
break;
}
}while(n3==1);
{
q1=175*qt1;
q2=860*qt2;
qtotal=q1+q2
system("cls");
ficheiro = fopen("Fatura.txt", "w+" );
ficheiro2 = fopen("Talão de Troca.txt", "w+" );
printf("CHECKOUT\n");
printf("CARTÃO DE CRÉDITO: ");
scanf("%s",&cc);
printf("\nCVC: ");
scanf("%s",&cvc);
printf("\nValidade (DIA):  ");
scanf("%s",&vldd);
printf("\nValidade (MÊS):  ");
scanf("%2s",&vldm);
fflush(stdin);
//ficheiros------------------------------------------------------
SYSTEMTIME t;
GetLocalTime(&t);
fprintf(ficheiro, "--FATURA--\n");
fprintf(ficheiro,"COMPRA FEITA POR: %s\n",p.user);
fprintf(ficheiro,"DATA: %i/%i/%i\n",t.wDay,t.wMonth,t.wYear);
fprintf(ficheiro,"------------------------\n");
fprintf(ficheiro,"QTD:\n");
fprintf(ficheiro,"%i-Guitarra\n%i-Piano\n",qt1,qt2);
fprintf(ficheiro,"------------------------\n");
fprintf(ficheiro, "CARTÃO DE CRÉDITO: ****%s****\n",cc);
fprintf(ficheiro, "CVC: ****%s****\n",cvc);
fprintf(ficheiro, "VALIDADE: ****%s/",vldd);
fprintf(ficheiro, "%s****\n",vldm);
fprintf(ficheiro,"------------------------\n");
fprintf(ficheiro, "TOTAL: %i$",qtotal);
fclose(ficheiro);
fprintf(ficheiro2,"--TALÃO DE TROCA--\n");
fprintf(ficheiro2,"COMPRA FEITA POR: %s\n",p.user);
fprintf(ficheiro2,"DATA DA COMPRA: %i/%i/%i\n",t.wDay,t.wMonth,t.wYear);
fprintf(ficheiro2,"PODE REALIZAR A TROCA OU DEVOLUÇÃO ATÉ: %i/%i/%i",t.wDay+7,t.wMonth,t.wYear);
fclose(ficheiro2);
}
SYSTEMTIME t;
GetLocalTime(&t);
FILE *ficheiro3;
ficheiro3=fopen("GANHOS.txt","a+");
fprintf(ficheiro3,"TOTAL=%i no DIA: %i às %i:%i - Compra de: %s\n",qtotal,t.wDay,t.wHour,t.wMinute,p.user);
gotoxy(8, 27);
system("pause");
}



void saida()
{
system("cls");
textcolor(YELLOW);
gotoxy(15, 4);
printf("O");
Sleep(70);
gotoxy(16, 4);
printf("b");Sleep(90);
gotoxy(17, 4);
printf("r");Sleep(90);
gotoxy(18, 4);
printf("i");Sleep(90);
gotoxy(19, 4);
printf("g");Sleep(90);
gotoxy(20, 4);
printf("a");Sleep(90);
gotoxy(21, 4);
printf("d");Sleep(90);
gotoxy(22, 4);
printf("o");Sleep(90);
gotoxy(24, 4);
printf("e");Sleep(90);
gotoxy(26, 4);
printf("V");Sleep(90);
gotoxy(27, 4);
printf("o");Sleep(90);
gotoxy(28, 4);
printf("l");Sleep(90);
gotoxy(29, 4);
printf("t");Sleep(90);
gotoxy(30, 4);
printf("e");Sleep(90);
gotoxy(32, 4);
printf("S");Sleep(90);
gotoxy(33, 4);
printf("e");Sleep(90);
gotoxy(34, 4);
printf("m");Sleep(90);
gotoxy(35, 4);
printf("p");Sleep(90);
gotoxy(36, 4);
printf("r");Sleep(90);
gotoxy(37, 4);
printf("e");Sleep(90);
Sleep(1000);
textcolor(WHITE);
return 0;
}



void lojatexto()
{
gotoxy(5, 1);
printf("               ____  ____  _______    _______ _     _ _______ _____ _     _");
Sleep(100);
gotoxy(5, 2);
printf("       |      |    |   |   |_____|    |  |  | |     | |______   |   |____/ ");
Sleep(100);
gotoxy(5, 3);
printf("       |____  |____| __|   |     |    |  |  | |_____| ______| __|__ |    \\_ ");
Sleep(100);

}
