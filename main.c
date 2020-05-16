#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#include <locale.h>

struct utilizador
{
char user[15];
char pin[10];
}*ctrl;

void login_register()
{
FILE *fp
char nome[15];
char
}







int main()
{
setlocale(LC_ALL, "Portuguese");

//login--------------------------------------------------------------------
int conta,s;
char reg1[30];
char reg2[30];
char linha[128];

FILE *ficheiro=fopen("reg.txt","a+");


system("cls");
gotoxy(20,2);
printf("Tens uma CONTA?");
gotoxy(19,3);
printf("|1: Sim");
gotoxy(19,4);
printf("|2: Não");
gotoxy(19,5);
printf("|");
gotoxy(20,5);
scanf("%i",&conta);


switch(conta)
{

case 1:
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


if (ficheiro) {

while(fgets(linha, sizeof linha, ficheiro))
{
if(sscanf(linha,"%30s %30s", reg1, reg2) == 2)
{
if ((strcmp(user, reg1)==0) && (strcmp(pin, reg2)==0))
{
if((strcmp(user, reg1)==0) && (strcmp(pin, reg2)==0))
{
}
else
{
 printf("\nPin ou Utilizador - Incorreto\n");
}
}
else
{
printf("\nPin ou Utilizador - Incorreto\n");
system("PAUSE");
return main();
}
}
}
fclose(ficheiro);
}

break;

case 2:

system("cls");
gotoxy(20,2);
printf(">>REGISTAR<<");
Sleep(500);
gotoxy(20,4);
printf("Digite o NOME DE UTILIZADOR: ");
scanf("%s",&reg1);
fprintf(ficheiro,"%s",reg1);
fflush(ficheiro);
gotoxy(20,6);
printf("Digite o CÓDIGO PIN: ");
scanf("%s",&reg2);
fprintf(ficheiro," %s\n",reg2);
fflush(ficheiro);
gotoxy(20,8);
printf("Obrigado!");
Sleep(600);
gotoxy(20,10);
system("pause");
return main();
break;


default:
printf("ERRO DE NUMERAÇÃO");
Sleep(500);
}




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

//--------------------------------------------------------------------------




//linha-esquerda-------------------------------------------------------------------------
    gotoxy(20, 2);
    printf("|");
    Sleep(50);

    gotoxy(20, 3);
    printf("||");
    Sleep(50);

    gotoxy(20, 4);
    printf("||");
    Sleep(50);

    gotoxy(20, 5);
    printf("||");
    Sleep(50);

    gotoxy(20, 6);
    printf("||");
    Sleep(50);

    gotoxy(20, 7);
    printf("||");
    Sleep(50);

    gotoxy(20, 8);
    printf("||");
    Sleep(50);

    gotoxy(20, 9);
    printf("||");
    Sleep(50);

    gotoxy(20, 10);
    printf("||");
    Sleep(50);

    gotoxy(20, 11);
    printf("||");
    Sleep(50);

    gotoxy(20, 12);
    printf("||");
    Sleep(50);

    gotoxy(20, 13);
    printf("||");
    Sleep(50);

    gotoxy(20, 14);
    printf("||");
    Sleep(50);

    gotoxy(20, 15);
    printf("||");
    Sleep(50);

    gotoxy(20, 16);
    printf("||");
    Sleep(50);

    gotoxy(20, 17);
    printf("||");
    Sleep(50);

        gotoxy(20, 18);
    printf("||");
    Sleep(50);

    gotoxy(20, 19);
    printf("||");
    Sleep(50);

    gotoxy(20, 20);
    printf("||");
    Sleep(50);

    gotoxy(20, 21);
    printf("||");
    Sleep(50);

    gotoxy(20, 22);
    printf("||");
    Sleep(50);

    gotoxy(20, 22);
    printf("||");
    Sleep(50);

    gotoxy(20, 23);
    printf("|");
    Sleep(50);

//linha-direita-------------------------------------------------------------------------

    gotoxy(66, 2);
    printf("|");
    Sleep(50);

    gotoxy(65, 3);
    printf("||");
    Sleep(50);

    gotoxy(65, 4);
    printf("||");
    Sleep(50);

    gotoxy(65, 5);
    printf("||");
    Sleep(50);

    gotoxy(65, 6);
    printf("||");
    Sleep(50);

    gotoxy(65, 7);
    printf("||");
    Sleep(50);

    gotoxy(65, 8);
    printf("||");
    Sleep(50);

    gotoxy(65, 9);
    printf("||");
    Sleep(50);

    gotoxy(65, 10);
    printf("||");
    Sleep(50);

    gotoxy(65, 11);
    printf("||");
    Sleep(50);

    gotoxy(65, 12);
    printf("||");
    Sleep(50);

    gotoxy(65, 13);
    printf("||");
    Sleep(50);

    gotoxy(65, 14);
    printf("||");
    Sleep(50);

    gotoxy(65, 15);
    printf("||");
    Sleep(50);

    gotoxy(65, 16);
    printf("||");
    Sleep(50);

    gotoxy(65, 17);
    printf("||");
    Sleep(50);

    gotoxy(65, 18);
    printf("||");
    Sleep(50);

    gotoxy(65, 19);
    printf("||");
    Sleep(50);

    gotoxy(65, 20);
    printf("||");
    Sleep(50);

    gotoxy(65, 21);
    printf("||");
    Sleep(50);

    gotoxy(65, 22);
    printf("||");
    Sleep(50);

    gotoxy(66, 23);
    printf("|");
    Sleep(50);

//linha-cima-------------------------------------------------------------------------

    gotoxy(21, 1);
    printf("_____________________________________________");
    Sleep(500);

    gotoxy(22, 2);
    printf("___________________________________________");
    Sleep(500);

//linha-baixo-------------------------------------------------------------------------

    gotoxy(22, 22);
    printf("___________________________________________");
    Sleep(500);

    gotoxy(21, 23);
    printf("_____________________________________________");
    Sleep(500);

//-------------------------------------------------------------------------

    getch();



    return 0;
}
