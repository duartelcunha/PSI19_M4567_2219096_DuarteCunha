#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#include <conio.h>
#include <locale.h>
#include <time.h>
#define a 17
#define b 4
#define c 3
#define d 3



struct utilizador
{
 char user[15];
 int pin;
};

struct fatura
{
char cc[17];
char cvc[4];
char vldd[3];
char vldm[3];
};

struct qtd
{
int n2,n3,n4,qt1,qt2,qt3,qt4,qt5,qt6,q1,q2,q3,q4,q5,q6,qtotal;
};

struct qtd q;
struct fatura f;
struct utilizador p;

void login()
{
textcolor(WHITE);
system("cls");
gotoxy(20,2);
textcolor(GREEN+BLINK);
printf(">>LOGIN<<");
Sleep(500);
gotoxy(20,4);
textcolor(YELLOW+BLINK);
printf("Utilizador: ");
textcolor(WHITE);
gets(p.user);
Sleep(300);
gotoxy(20,6);
textcolor(YELLOW+BLINK);
printf("Código PIN: ");
textcolor(WHITE);
scanf("%i",&p.pin);
Sleep(300);
fflush(stdin);
textcolor(WHITE);
if(strcmp(p.user,"Carla")==0 || strcmp(p.user,"Duarte")==0)
{
if(p.pin==8006 || p.pin==123)
{
system("cls");
gotoxy(20,4);
textcolor(GREEN);
printf("LOGIN EFETUADO COM SUCESSO");
Sleep(1000);
//acesso
}
else
{
system("cls");
gotoxy(20,4);
textcolor(RED);
printf("CÓDIGO INCORRETO\n\n");
textcolor(WHITE);
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
textcolor(WHITE);
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
textcolor(WHITE);
printf(" %s",p.user);
Sleep(1000);
//menu--------------------------------------------------------------------------------
menu();
gotoxy(56, 20);
printf("9: Sair");
gotoxy(35, 20);
printf("Digite o Nº: ");
scanf("%i",&n);
switch(n)
{
case 1:
system("cls");
instrumentos();
break;
case 2:
;
break;
case 9:
saida();
break;
default:
system("cls");
gotoxy(15, 4);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
}
return 0;
}


void bemvindo()
{
//bem-vindo-------------------------------------------------------------------------
textcolor(GREEN);
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
textcolor(WHITE);
}



void menu()
{
system("cls");
textcolor(WHITE);
//logo------------------------------------------------------------------------
lojatexto();
logo();
layoutsec();
//art-------------------------------------------------------------------------
gotoxy(16, 7);
printf("1. Instrumentos");
gotoxy(18, 8);
printf("     _");
Sleep(70);
gotoxy(18, 9);
printf("    / 7");
Sleep(70);
gotoxy(18, 10);
printf("   /_(");
Sleep(70);
gotoxy(18, 11);
printf("   |_|");
Sleep(70);
gotoxy(18, 12);
printf("   |_|");
Sleep(70);
gotoxy(18, 13);
printf("   |_|");
Sleep(70);
gotoxy(18, 14);
printf("   |_| /\\");
Sleep(70);
gotoxy(18, 15);
printf(" /\\|=|/ /");
Sleep(70);
gotoxy(18, 16);
printf("  \\|_| /");
Sleep(70);
gotoxy(18, 17);
printf("  ) _  \\");
Sleep(70);
gotoxy(18, 18);
printf(" / |_|  \\");
Sleep(70);
gotoxy(18, 19);
printf("/  -=-o /");
Sleep(70);
gotoxy(18, 20);
printf("\\  /~\\_/");
Sleep(70);
gotoxy(18, 21);
printf(" \\/");
Sleep(70);
//acessorios---------------------------------------------------------------------------------
gotoxy(56, 7);
printf("2. Outros");
gotoxy(55, 10);
printf("   ______________");
Sleep(70);
gotoxy(55, 11);
printf("  |`.____________`.");
Sleep(70);
gotoxy(55, 12);
printf("  | |_''_o_o__o =.|");
Sleep(70);
gotoxy(55, 13);
printf("  | | ,--.   ,--. :");
Sleep(70);
gotoxy(55, 14);
printf("  | |( () ) ( () )|");
Sleep(70);
gotoxy(55, 15);
printf("  `.|_`-_'___`-_'_|");
Sleep(70);
}



void mainlayout()
{
//logo------------------------------------------------------------------------
lojatexto();
//linha-esquerda----------------------------------------------------------------------
gotoxy(10,1);
printf("      ____----");
gotoxy(10,2);
printf("    /");
Sleep(30);
gotoxy(10,3);
printf("  /");
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
gotoxy(68,1);
printf("----____");
gotoxy(77,2);
printf("\\");
Sleep(30);
gotoxy(79,3);
printf("\\");
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
Sleep(100);
gotoxy(11, 23);
printf("______________________________________________________________________");
Sleep(100);
}



void layoutsec()
{
//linha-esquerda----------------------------------------------------------------------
gotoxy(10,1);
printf("      ____----");
gotoxy(10,2);
printf("    /");
Sleep(30);
gotoxy(10,3);
printf("  /");
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
gotoxy(68,1);
printf("----____");
gotoxy(77,2);
printf("\\");
Sleep(30);
gotoxy(79,3);
printf("\\");
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
Sleep(100);
gotoxy(11, 23);
printf("______________________________________________________________________");
Sleep(100);
}



void instrumentos()
{
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
//linha-esquerda----------------------------------------------------------------------
menu:
do {
system("cls");
mainlayout();
//------------------------------------------------------------------------------------
gotoxy(25, 8);
printf("1 - Guitarra");
gotoxy(25, 10);
printf("2 - Piano");
gotoxy(25, 12);
printf("3 - Violino");
gotoxy(25, 14);
printf("4 - Flauta");
gotoxy(25, 16);
printf("5 - Saxofone");
gotoxy(25, 18);
printf("6 - Tambor");
gotoxy(25, 20);
printf("9 - VER CARRINHO DE COMPRAS");
gotoxy(44, 11);
printf("Digite o Nº: ");
scanf("%i",&q.n2);
switch(q.n2)
{

case 1:
system("cls");
gotoxy(8, 1);
printf("        ___");Sleep(60);
gotoxy(8, 2);
printf("      o|* *|o");Sleep(60);
gotoxy(8, 3);
printf("      o|* *|o");Sleep(60);
gotoxy(8, 4);
printf("      o|* *|o");Sleep(60);
gotoxy(8, 5);
printf("       \\===/");Sleep(60);
gotoxy(8, 6);
printf("        |||");Sleep(60);
gotoxy(8, 7);
printf("        |||");Sleep(60);
gotoxy(8, 8);
printf("        |||");Sleep(60);
gotoxy(8, 9);
printf("        |||");Sleep(60);
gotoxy(8, 10);
printf("     ___|||___");Sleep(60);
gotoxy(8, 11);
printf("    /   |||   \\");Sleep(60);
gotoxy(8, 12);
printf("   /    |||    \\");Sleep(60);
gotoxy(8, 13);
printf("  |     |||     |");Sleep(60);
gotoxy(8, 14);
printf("   \\   (|||)   /");Sleep(60);
gotoxy(8, 15);
printf("    |   |||   |");Sleep(60);
gotoxy(8, 16);
printf("   /    |||    \\");Sleep(60);
gotoxy(8, 17);
printf("  /     |||     \\");Sleep(60);
gotoxy(8, 18);
printf(" /      |||      \\");Sleep(60);
gotoxy(8, 19);
printf(" |     [===]     |");Sleep(60);
gotoxy(8, 20);
printf("  \\             /");Sleep(60);
gotoxy(8, 21);
printf("   '.         .'");Sleep(60);
gotoxy(8, 22);
printf("     '-------'");Sleep(60);
gotoxy(30, 6);
printf("PREÇO: 175$");
gotoxy(30, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qt1);
q.q1=175*q.qt1;
gotoxy(30, 11);
printf("DESEJA ADICIONAR MAIS AO CARRINHO?");
gotoxy(30, 13);
printf("SIM: 1 || NÃO: 2 | CARRINHO: 3");
gotoxy(30, 14);
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
}
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,5);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
Sleep(1000);
goto menu;
}
break;


case 2:
system("cls");
gotoxy(8, 1);
printf(" _____________________________________");Sleep(60);
gotoxy(8, 2);
printf("|\\                                    \\");Sleep(60);
gotoxy(8, 3);
printf("| \\                                    \\");Sleep(60);
gotoxy(8, 4);
printf("|  \\____________________________________\\");Sleep(60);
gotoxy(8, 5);
printf("|  |       __---_ _---_                 |");Sleep(60);
gotoxy(8, 6);
printf("|  |      |======|=====|                |");Sleep(60);
gotoxy(8, 7);
printf("|  |      |======|=====|                |");Sleep(60);
gotoxy(8, 8);
printf("|  |  ____|__---_|_---_|______________  |");Sleep(60);
gotoxy(8, 9);
printf("|  | |                                | |");Sleep(60);
gotoxy(8, 10);
printf("| \\ \\                                  \\ \\");Sleep(60);
gotoxy(8, 11);
printf("|  \\||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||");Sleep(60);
gotoxy(8, 12);
printf("|  |\\ ,-------------------------------- |");Sleep(60);
gotoxy(8, 13);
printf("|  ||| |                            | | |");Sleep(60);
gotoxy(8, 14);
printf(" \\ ||| |           -  -             | | |");Sleep(60);
gotoxy(8, 15);
printf("  \\'|| |-----------\\-\\--------------| | |");Sleep(60);
gotoxy(8, 16);
printf("    \\|_|            "  "               \\|_|/");Sleep(60);
gotoxy(52, 6);
printf("PREÇO: 860$");
gotoxy(52, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qt2);
q.q2=860*q.qt2;
gotoxy(52, 10);
printf("DESEJA ADICIONAR OUTRO INSTRUMENTO?");
gotoxy(52, 11);
printf("SIM: 1 || NÃO: 2 | CARRINHO: 3");
gotoxy(30, 14);
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
}
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,5);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
Sleep(1000);
goto menu;
}
break;


case 3:
system("cls");
gotoxy(8, 1);
printf("             ,;,");Sleep(60);
gotoxy(8, 2);
printf("            #(|)#");Sleep(60);
gotoxy(8, 3);
printf("            #|||#");Sleep(60);
gotoxy(8, 4);
printf("             |||");Sleep(60);
gotoxy(8, 5);
printf("             |||");Sleep(60);
gotoxy(8, 6);
printf("             |||");Sleep(60);
gotoxy(8, 7);
printf("            _|||_");Sleep(60);
gotoxy(8, 8);
printf("          /  |||  \\");Sleep(60);
gotoxy(8, 9);
printf("         /   |||   \\");Sleep(60);
gotoxy(8, 10);
printf("         |   |||   |");Sleep(60);
gotoxy(8, 11);
printf("         |_  |||  _|");Sleep(60);
gotoxy(8, 12);
printf("         |_  |||  _|");Sleep(60);
gotoxy(8, 13);
printf("         |   |||   |");Sleep(60);
gotoxy(8, 14);
printf("        /    |||    \\");Sleep(60);
gotoxy(8, 15);
printf("       |    _| |_    |""");Sleep(60);
gotoxy(8, 16);
printf("       |    \\~~~/    |""");Sleep(60);
gotoxy(8, 17);
printf("        \\    \\ /    /");Sleep(60);
gotoxy(8, 18);
printf("         \\_.__Y__._/");Sleep(60);
gotoxy(8, 19);
printf("             \\|/");Sleep(60);
gotoxy(8, 20);
printf("              |");Sleep(60);
gotoxy(35, 6);
printf("PREÇO: 645$");
gotoxy(35, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qt3);
q.q3=645*q.qt3;
gotoxy(35, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO?");
gotoxy(35, 11);
printf("SIM: 1 || NÃO: 2 | CARRINHO: 3");
gotoxy(30, 14);
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
}
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,5);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
Sleep(1000);
goto menu;
}
break;

}
}while(q.n3==1 || q.n4==2);
{
fatura();
}
}



void carrinho()
{
system("cls");
mainlayout();
gotoxy(30,8);
printf("CARRINHO DE COMPRAS");
gotoxy(30,10);
printf("QTD:");
gotoxy(30,12);
printf("Instrumentos:");
gotoxy(30,13);
printf("Guitarra: %i",q.qt1);
gotoxy(30,14);
printf("Piano: %i",q.qt2);
gotoxy(30,15);
printf("Violino: %i",q.qt3);
gotoxy(30,17);
printf("Deseja CONTINUAR com a COMPRA?");
gotoxy(30,18);
printf("SIM: Digitar 1 || NÃO: Digitar 2");
gotoxy(30,18);
scanf("%i",&q.n4);
}



void fatura()
{
FILE *ficheiro;
FILE *ficheiro2;
//preços--------------------------------------------------------
q.q1=175*q.qt1;
q.q2=860*q.qt2;
q.q3=645*q.qt3;
q.qtotal=q.q1+q.q2+q.q3;
//cartão--------------------------------------------------------
system("cls");
ficheiro = fopen("1 Fatura.txt", "w+" );
ficheiro2 = fopen("2 Talão de Troca.txt", "w+" );
checkout:
system("cls");
printf("CHECKOUT\n");
fflush(stdin);
printf("CARTÃO DE CRÉDITO: ");
fgets(f.cc, a, stdin);
fflush(stdin);
printf("\nCVC: ");
fgets(f.cvc, b, stdin);
fflush(stdin);
printf("\nValidade (DIA):  ");
fgets(f.vldd, c, stdin);
if(f.vldd<=31)
{
//continua
}
else
{
system("cls");
gotoxy(10,5);
textcolor(YELLOW);
printf("INTRODUZA UM DIA VÁLIDO");
Sleep(1000);
textcolor(WHITE);
goto checkout;
}
fflush(stdin);
printf("\nValidade (MÊS):  ");
fgets(f.vldm, d, stdin);
if(f.vldd<=12)
{
//continua
}
else
{
system("cls");
gotoxy(10,5);
textcolor(YELLOW);
printf("INTRODUZA UM MÊS VÁLIDO");
Sleep(1000);
textcolor(WHITE);
goto checkout;
}
//ficheiros------------------------------------------------------
SYSTEMTIME t;
GetLocalTime(&t);
fprintf(ficheiro, "--FATURA--\n");
fprintf(ficheiro,"COMPRA FEITA POR: %s\n",p.user);
fprintf(ficheiro,"DATA: %i/%i/%i\n",t.wDay,t.wMonth,t.wYear);
fprintf(ficheiro,"------------------------\n");
fprintf(ficheiro,"QTD:\n");
fprintf(ficheiro,"%i - Guitarra\n%i - Piano\n%i - Violino\n",q.qt1,q.qt2,q.qt3);
fprintf(ficheiro,"------------------------\n");
fprintf(ficheiro, "CARTÃO DE CRÉDITO: ***%s***\n",f.cc);
fprintf(ficheiro, "CVC: ***%s***\n",f.cvc);
fprintf(ficheiro, "VALIDADE: ***%s/",f.vldd);
fprintf(ficheiro, "%s***\n",f.vldm);
fprintf(ficheiro,"------------------------\n");
fprintf(ficheiro, "TOTAL: %i$",q.qtotal);
fclose(ficheiro);
fprintf(ficheiro2,"--TALÃO DE TROCA--\n");
fprintf(ficheiro2,"COMPRA FEITA POR: %s\n",p.user);
fprintf(ficheiro2,"DATA DA COMPRA: %i/%i/%i\n",t.wDay,t.wMonth,t.wYear);
fprintf(ficheiro2,"PODE REALIZAR A TROCA OU DEVOLUÇÃO ATÉ: %i/%i/%i",t.wDay+7,t.wMonth,t.wYear);
fclose(ficheiro2);
FILE *ficheiro3;
ficheiro3=fopen("3 GANHOS.txt","a+");
fprintf(ficheiro3,"TOTAL = %i$ no DIA: %i às %i:%i - Compra feita por: %s\n",q.qtotal,t.wDay,t.wHour,t.wMinute,p.user);
gotoxy(8, 27);
system("pause");
return 0;
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
gotoxy(23,1);
printf("   __       _                          _ _");Sleep(100);
gotoxy(23,2);
printf("  / /  ___ (_) __ _    /\\/\\  _   _ ___(_) | __");Sleep(100);
gotoxy(23,3);
printf(" / /  / _ \\| |/ _` |  /    \\| | | / __| | |/ /");Sleep(100);
gotoxy(23,4);
printf("/ /__| (_) | | (_| | / /\\/\\ \\ |_| \\__ \\ |   <");Sleep(100);
gotoxy(23,5);
printf("\\____/\\___// |\\__,_| \\/    \\/\\__,_|___/_|_|\\_\\""");Sleep(100);
gotoxy(23,6);
printf("         |__/");Sleep(100);
}



void logo()
{
gotoxy(41, 6);
printf("--_-_-_-_---");
Sleep(80);
gotoxy(41, 7);
printf("   -_-_-_");
Sleep(80);
gotoxy(41, 8);
printf("    -_-_-");
Sleep(80);
gotoxy(41, 9);
printf("     -__-");
Sleep(80);
gotoxy(41, 10);
printf("    _-_");
Sleep(80);
gotoxy(41, 11);
printf("   _-");
Sleep(80);
gotoxy(41, 12);
printf("   -_");
Sleep(80);
gotoxy(41, 13);
printf("     -");
Sleep(80);
}
