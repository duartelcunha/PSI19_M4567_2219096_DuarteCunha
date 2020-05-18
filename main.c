#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#include <locale.h>

struct utilizador
{
 char user[15];
 char pin[10];
}u;

login()
{
system("cls");

gotoxy(20,2);
printf(">>LOGIN<<");

gotoxy(20,4);
printf("Utilizador: ");
scanf("%s",&u.user);

gotoxy(20,6);
printf("Código PIN: ");
scanf("%s",&u.pin);

}


int main()
{
setlocale(LC_ALL, "Portuguese");
int n;
char user[20];
char pin[10];
//login--------------------------------------------------------------------
/*
system("cls");
gotoxy(20,2);
printf(">>LOGIN<<");
Sleep(500);
gotoxy(20,4);
printf("Utilizador: ");
scanf("%s",&user);
Sleep(300);
gotoxy(20,6);
printf("Código PIN: ");
scanf("%s",&pin);
Sleep(300);
fflush(stdin);
if(strcmp(user,"Carla")==0 || strcmp(user,"Duarte")==0)
{
if(strcmp(pin,"8006")==0)
{
}
else
{
system("cls");
gotoxy(20,4);
printf("CÓDIGO PIN INCORRETO\n\n");
system("pause");
return main();
}
}
else
{
system("cls");
gotoxy(20,4);
printf("UTILIZADOR INEXISTENTE\n\n");
system("pause");
return main();
}
*/


//---------------------------------------------------------------------------------

system("cls");

//bem-vindo-------------------------------------------------------------------------

gotoxy(20, 4);
printf("B");
Sleep(100);
gotoxy(21, 4);
printf("e");
Sleep(100);
gotoxy(22, 4);
printf("m");
Sleep(100);
gotoxy(24, 4);
printf("-");
gotoxy(26, 4);
printf("V");
Sleep(100);
gotoxy(27, 4);
printf("i");
Sleep(100);
gotoxy(28, 4);
printf("n");
Sleep(100);
gotoxy(29, 4);
printf("d");
Sleep(100);
gotoxy(30, 4);
printf("o");
Sleep(100);
gotoxy(31, 4);
printf(" %s",user);
Sleep(500);

//--------------------------------------------------------------------------

getch();
system("cls");

//logo--------------------------------------------------------------------------



//linha-esquerda-------------------------------------------------------------------------
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

//instrumentos-------------------------------------------------------------------------
gotoxy(16, 4);
printf("1. Instrumentos");

gotoxy(18, 5);
printf("     _");Sleep(100);
gotoxy(18, 6);
printf("    / 7");Sleep(100);
gotoxy(18, 7);
printf("   /_(");Sleep(100);
gotoxy(18, 8);
printf("   |_|");Sleep(100);
gotoxy(18, 9);
printf("   |_|");Sleep(100);
gotoxy(18, 10);
printf("   |_|");Sleep(100);
gotoxy(18, 11);
printf("   |_| /\\");Sleep(100);
gotoxy(18, 12);
printf(" /\\|=|/ /");Sleep(100);
gotoxy(18, 13);
printf("  \\|_| /");Sleep(100);
gotoxy(18, 14);
printf("  ) _  \\");Sleep(100);
gotoxy(18, 15);
printf(" / |_|  \\");Sleep(100);
gotoxy(18, 16);
printf("/  -=-o /");Sleep(100);
gotoxy(18, 17);
printf("\\  /~\_/");Sleep(100);
gotoxy(18, 18);
printf(" \\/");Sleep(100);

//acessorios---------------------------------------------------------------------------------

gotoxy(55, 4);
printf("2. Outros");

gotoxy(54, 9);
printf("   ______________");Sleep(100);
gotoxy(54, 10);
printf("  |`.____________`.");Sleep(100);
gotoxy(54, 11);
printf("  | |_''_o_o__o =.|");Sleep(100);
gotoxy(54, 12);
printf("  | | ,--.   ,--. :");Sleep(100);
gotoxy(54, 13);
printf("  | |( () ) ( () )|");Sleep(100);
gotoxy(54, 14);
printf("  `.|_`-_'___`-_'_|");Sleep(100);

gotoxy(35, 20);
printf("Digite o Nº: ");
scanf("%i",&n);





gotoxy(16,20);
system("pause");



    return 0;
}


