#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#include <conio.h>
#include <locale.h>

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
printf("CÓDIGO PIN INCORRETO\n\n");
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
textcolor(RED);
printf(" %s",p.user);
Sleep(900);
//menu--------------------------------------------------------------------------------
menu();
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
//linha-esquerda----------------------------------------------------------------------
gotoxy(10, 2);
printf("|");
Sleep(30);
gotoxy(10, 3);
printf("||");
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
gotoxy(80, 2);
printf(" |");
Sleep(30);
gotoxy(80, 3);
printf("||");
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
//linha-cima-------------------------------------------------------------------------
gotoxy(11, 1);
printf("______________________________________________________________________");
Sleep(300);

gotoxy(12, 2);
printf("____________________________________________________________________");
Sleep(300);
//linhaprintf("")-baixo-------------------------------------------------------------------------
gotoxy(12, 22);
printf("____________________________________________________________________");
Sleep(300);
gotoxy(11, 23);
printf("______________________________________________________________________");
Sleep(300);
//art-------------------------------------------------------------------------
gotoxy(16, 4);
printf("1. Instrumentos");
gotoxy(18, 5);
printf("     _");
Sleep(100);
gotoxy(18, 6);
printf("    / 7");
Sleep(100);
gotoxy(18, 7);
printf("   /_(");
Sleep(100);
gotoxy(18, 8);
printf("   |_|");
Sleep(100);
gotoxy(18, 9);
printf("   |_|");
Sleep(100);
gotoxy(18, 10);
printf("   |_|");
Sleep(100);
gotoxy(18, 11);
printf("   |_| /\\");
Sleep(100);
gotoxy(18, 12);
printf(" /\\|=|/ /");
Sleep(100);
gotoxy(18, 13);
printf("  \\|_| /");
Sleep(100);
gotoxy(18, 14);
printf("  ) _  \\");
Sleep(100);
gotoxy(18, 15);
printf(" / |_|  \\");
Sleep(100);
gotoxy(18, 16);
printf("/  -=-o /");
Sleep(100);
gotoxy(18, 17);
printf("\\  /~\_/");
Sleep(100);
gotoxy(18, 18);
printf(" \\/");
Sleep(100);
//acessorios---------------------------------------------------------------------------------
gotoxy(55, 4);
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



void instrumentos()
{
int n2;
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
gotoxy(12, 6);
printf("Guitarra");
gotoxy(12, 7);
printf("Piano");
gotoxy(12, 8);
printf("Violino");
gotoxy(12, 9);
printf("Flauta");
gotoxy(12, 10);
printf("Saxofone");
gotoxy(12, 11);
printf("Tambor");
gotoxy(12, 12);
printf("Digite o Nº: ");
scanf("%i",&n2);
switch(n2)
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
printf("   |     |||   |");
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
printf("Preço: 165$");
gotoxy(30, 10);
printf("Deseja adicionar ao carrinho?");
gotoxy(8, 27);
system("pause");
}



