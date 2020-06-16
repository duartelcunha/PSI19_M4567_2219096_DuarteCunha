#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include "layouts.h"
#define a 11
#define b 4



typedef struct
{
 char user[15];
 int pin;
}utilizador;

typedef struct
{
char cc[7];
char cvc[3];
int vldd;
int vldm;
char local[25];
}checkout;

typedef struct
{
int nv[10],i;
//instrumentos
int qt1,qt2,qt3,qt4,qt5,qt6;
int q1,q2,q3,q4,q5,q6;
//outros
int qtcs,qtp,qtc,qta;
int qcs,qp,qc,qa;
//total
int qtotal;
}qtd;

qtd q;
checkout f;
utilizador p;

//sistema login

void login()
{
textcolor(WHITE);
system("cls");
layoutlogin();
textologin();
gotoxy(12,9);
textcolor(YELLOW);
fflush(stdin);
printf("Utilizador: ");
textcolor(WHITE);
gets(p.user);
Sleep(300);
gotoxy(12,11);
textcolor(YELLOW);
printf("Código PIN: ");
textcolor(WHITE);
scanf("%i",&p.pin);
Sleep(300);
fflush(stdin);
textcolor(WHITE);
if(strcmp(p.user,"Duarte")==0 || strcmp(p.user,"Rui")==0)
{
if(p.pin==8006 || p.pin==1234)
{
textcolor(WHITE);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
textcolor(GREEN);
gotoxy(63,10);
printf("LOGIN EFETUADO COM SUCESSO");
Sleep(1000);
//acesso
}
else
{
textcolor(WHITE);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
textcolor(RED);
printf("CÓDIGO INCORRETO\n\n");
Sleep(1800);
textcolor(WHITE);
main();
}
}
else
{
textcolor(WHITE);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
printf("\\");
Sleep(240);
gotoxy(63,10);
printf("/");
Sleep(240);
gotoxy(63,10);
textcolor(RED);
printf("UTILIZADOR INEXISTENTE\n\n");
Sleep(1800);
textcolor(WHITE);
main();
}
}



//--------------------------------------------------



int main()
{
setlocale(LC_ALL, "Portuguese");

//------------------------------------------------------------------------------------
system("cls");
login();
system("cls");
//------------------------------------------------------------------------------------
bemvindo();
gotoxy(24, 4);
textcolor(YELLOW);
printf(" %s",p.user);
Sleep(1300);
//menu--------------------------------------------------------------------------------
menu:
menu1();
gotoxy(54, 20);
printf("8: Carrinho");
gotoxy(68, 20);
printf("9: Sair");
gotoxy(31, 20);
printf("Digite o Nº: ");
scanf("%i",&q.nv[1]);
switch(q.nv[1])
{
case 1:
system("cls");
//instrumentos
instrumentos:
do {
system("cls");
textomenu2();
layoutmenu2();
//------------------------------------------------------------------------------------
gotoxy(25, 8);
printf("1: Guitarra");
gotoxy(25, 10);
printf("2: Piano");
gotoxy(25, 12);
printf("3: Violino");
gotoxy(25, 14);
printf("4: Flauta");
gotoxy(25, 16);
printf("5: Saxofone");
gotoxy(25, 18);
printf("6: Tambor");
gotoxy(42, 20);
printf("9: Menu Principal");
gotoxy(42, 13);
printf("Digite o Nº: ");
scanf("%i",&q.nv[2]);
switch(q.nv[2])
{
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
//guitarra
case 1:
system("cls");
guitarra();
gotoxy(30, 6);
printf("PREÇO: 175$");
gotoxy(30, 8);
printf("QUANTIDADE: ");
scanf("%i",&q.qt1);
q.q1=175*q.qt1;
gotoxy(30, 11);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(30, 13);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(30, 14);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto instrumentos;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto instrumentos;
}
break;
//piano
case 2:
system("cls");
piano();
gotoxy(52, 6);
printf("PREÇO: 860$");
gotoxy(52, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qt2);
q.q2=860*q.qt2;
gotoxy(52, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(52, 11);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(52, 12);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto instrumentos;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto instrumentos;
}
break;
//violino
case 3:
system("cls");
violino();
gotoxy(35, 6);
printf("PREÇO: 645$");
gotoxy(35, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qt3);
q.q3=645*q.qt3;
gotoxy(35, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(35, 11);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(35, 12);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto instrumentos;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto instrumentos;
}
break;
//flauta
case 4:
system("cls");
flauta();
gotoxy(25, 6);
printf("PREÇO: 80$");
gotoxy(25, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qt4);
q.q4=80*q.qt4;
gotoxy(25, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(25, 11);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(25, 12);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto instrumentos;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto instrumentos;
}
break;
//saxofone
case 5:
system("cls");
saxofone();
gotoxy(45, 6);
printf("PREÇO: 840$");
gotoxy(45, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qt5);
q.q5=840*q.qt5;
gotoxy(45, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(45, 11);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(45, 12);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto instrumentos;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto instrumentos;
}
break;
//tambor
case 6:
system("cls");
tambor();
gotoxy(55, 6);
printf("PREÇO: 106$");
gotoxy(55, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qt6);
q.q6=106*q.qt6;
gotoxy(55, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(55, 11);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(55, 12);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto instrumentos;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto instrumentos;
}
break;
//voltar-atrás
case 9:
goto menu;
break;
default:
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto instrumentos;
break;
}
}while(q.nv[3]==1);
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto instrumentos;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto instrumentos;;
}
}


//----------------


case 2:
system("cls");
//outros
outros:
do {
system("cls");
textomenu2();
layoutmenu2();
gotoxy(25, 8);
printf("1: Coluna de Som");
gotoxy(25, 10);
printf("2: Palheta");
gotoxy(25, 12);
printf("3: Capo");
gotoxy(25, 14);
printf("4: Amplificador");
gotoxy(42, 20);
printf("9: Menu Principal");
gotoxy(42, 11);
printf("Digite o Nº: ");
scanf("%i",&q.nv[2]);
switch(q.nv[2])
{
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
//coluna de som
case 1:
system("cls");
colunadesom();
gotoxy(54, 4);
printf("PREÇO: 240$");
gotoxy(54, 6);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qtcs);
q.qcs=240*q.qtcs;
gotoxy(54, 8);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(54, 9);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(54, 10);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto outros;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto outros;
}
break;
//palheta
case 2:
system("cls");
palheta();
gotoxy(40, 6);
printf("PREÇO: 3$");
gotoxy(40, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qtp);
q.qp=3*q.qtp;
gotoxy(40, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(40, 11);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(40, 12);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto outros;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto outros;
}
break;
//capo
case 3:
system("cls");
capo();
gotoxy(45, 6);
printf("PREÇO: 15$");
gotoxy(45, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qtc);
q.qc=15*q.qtc;
gotoxy(45, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(45, 11);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(45, 12);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto outros;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto outros;
}
break;
//amplificador
case 4:
system("cls");
amplificador();
gotoxy(35, 6);
printf("PREÇO: 330$");
gotoxy(35, 8);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qta);
q.qa=330*q.qta;
gotoxy(35, 10);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(35, 11);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(35, 12);
scanf("%i",&q.nv[3]);
if(q.nv[3]==3)
{
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto outros;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
}
}
else if(q.nv[3]==1 || q.nv[3]==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto outros;
}
break;
default:
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto outros;
break;
case 9:
goto menu;
break;
}
}while(q.nv[3]==1);
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto outros;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
textcolor(WHITE);
Sleep(1000);
goto outros;
}
}
break;
//------------
case 3:
developer();
system("pause");
goto menu;
break;

case 8:
carrinho:
carrinho();
if(q.nv[4]==3)
{
system("cls");
q.q1=0;
q.q2=0;
q.qt1=0;
q.qt2=0;
q.q3=0;
q.qt3=0;
q.q4=0;
q.qt4=0;
q.q5=0;
q.qt5=0;
q.q6=0;
q.qt6=0;
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
textcolor(GREEN);
gotoxy(15,3);
printf("CARRINHO APAGADO");
Sleep(1500);
textcolor(WHITE);
goto menu;
}
else if(q.nv[4]==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
if(q.i==0)
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("PARA PROCEDER TEM DE ADICIONAR AO CARRINHO PELO MENOS 1 ITEM");
textcolor(WHITE);
Sleep(1800);
goto menu;
}
else
{
//continua
}
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE:");
textcolor(YELLOW);
printf(" %i ITENS",q.i);
textcolor(WHITE);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.nv[5]);
if(q.nv[5]==1)
{
fatura();
return 0;
}
else if(q.nv[5]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto carrinho;
}
}
else if(q.nv[4]==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto carrinho;
}
break;
//------------
case 9:
saida();
break;
default:
system("cls");
gotoxy(15, 3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO\n");
Sleep(900);
textcolor(WHITE);
system("pause");
goto menu;
break;
}
return 0;
}



//--------------------------------------------------



//bem-vindo

void bemvindo()
{
//bem-vindo-------------
textcolor(WHITE);
gotoxy(15, 4);
printf("B");
Sleep(110);
gotoxy(16, 4);
printf("e");
Sleep(110);
gotoxy(17, 4);
printf("m");
Sleep(110);
gotoxy(18, 4);
printf("-");
Sleep(110);
gotoxy(19, 4);
printf("V");
Sleep(110);
gotoxy(20, 4);
printf("i");
Sleep(110);
gotoxy(21, 4);
printf("n");
Sleep(110);
gotoxy(22, 4);
printf("d");
Sleep(110);
gotoxy(23, 4);
printf("o:");
Sleep(110);
}


//layout do 1º menu

void menu1()
{
system("cls");
textcolor(WHITE);
//logo------------------------------------------------------------------------
mainlayout();
logo();
textoloja();
//art-------------------------------------------------------------------------
gotoxy(16, 7);
printf("1. Instrumentos");
gotoxy(18, 8);
printf("     _");
gotoxy(18, 9);
printf("    / 7");
gotoxy(18, 10);
printf("   /_(");
gotoxy(18, 11);
printf("   |_|");
gotoxy(18, 12);
printf("   |_|");
gotoxy(18, 13);
printf("   |_|");
gotoxy(18, 14);
printf("   |_| /\\");
textcolor(RED);
gotoxy(18, 15);
printf(" /\\|=|/ /");
gotoxy(18, 16);
printf("  \\|_| /");
gotoxy(18, 17);
printf("  ) _  \\");
gotoxy(18, 18);
printf(" / |_|  \\");
gotoxy(18, 19);
printf("/  -=-o /");
gotoxy(18, 20);
printf("\\  /~\\_/");
textcolor(WHITE);
gotoxy(18, 21);
printf(" \\/");
Sleep(600);
//acessorios---------------------------------------------------------------------------------
gotoxy(56, 7);
printf("2. Outros");
gotoxy(55, 10);
printf("   ______________");
gotoxy(55, 11);
printf("  |`.____________`.");
gotoxy(55, 12);
printf("  | |_''_o_o__o =.|");
textcolor(YELLOW);
gotoxy(55, 13);
printf("  | | ,--.   ,--. |");
gotoxy(55, 14);
printf("  | |( () ) ( () )|");
gotoxy(55, 15);
printf("  | | `- '   `- ' |");
textcolor(WHITE);
gotoxy(55, 16);
printf("  `.|_  _ ___  _ _|");
Sleep(600);
}


//carrinho de compras

void carrinho()
{
system("cls");
textocarrinho();
layoutcarrinho();
gotoxy(23,10);
printf("Instrumentos:");
gotoxy(23,8);
printf("QUANTIDADES");
gotoxy(26,11);
printf("Guitarra: %i",q.qt1);
gotoxy(26,12);
printf("Piano: %i",q.qt2);
gotoxy(26,13);
printf("Violino: %i",q.qt3);
gotoxy(26,14);
printf("Flauta: %i",q.qt4);
gotoxy(26,15);
printf("Saxofone: %i",q.qt5);
gotoxy(26,16);
printf("Tambor: %i",q.qt6);
gotoxy(44,10);
printf("Outros:");
gotoxy(46,11);
printf("Coluna de Som: %i",q.qtcs);
gotoxy(46,12);
printf("Palheta: %i",q.qtp);
gotoxy(46,13);
printf("Capo: %i",q.qtc);
gotoxy(46,14);
printf("Amplificador: %i",q.qta);
gotoxy(26,18);
printf("Deseja FINALIZAR a COMPRA?");
gotoxy(26,19);
printf("SIM: 1 | NÃO: 2 | 3: Apagar Carrinho");
gotoxy(26,20);
scanf("       %i",&q.nv[4]);
}


//fatura | talão | ganhos

void fatura()
{
FILE *ficheiro;
FILE *ficheiro2;
//preços--------------------------------------------------------
//instrumentos
q.q1=175*q.qt1;
q.q2=860*q.qt2;
q.q3=645*q.qt3;
q.q4=80*q.qt4;
q.q5=840*q.qt5;
q.q6=106*q.qt6;
//outros
q.qcs=240*q.qtcs;
q.qp=3*q.qtp;
q.qc=15*q.qtc;
q.qa=330*q.qta;
q.qtotal=q.q1+q.q2+q.q3+q.q4+q.q5+q.q6+q.qcs+q.qp+q.qc+q.qa;
//cartão--------------------------------------------------------
ficheiro = fopen("Fatura.txt", "w+" );
ficheiro2 = fopen("Talão_de_Troca.txt", "w+" );
system("cls");
textofinal();
comprafinal();
fflush(stdin);
gotoxy(35,11);
printf("Local De Entrega: ");
gotoxy(53,11);
gets(f.local);
fflush(stdin);
gotoxy(35,13);
printf("(10) NÚMERO DO CARTÃO: **********");
fflush(stdin);
gotoxy(58,13);
fgets(f.cc,a,stdin);
gotoxy(35,15);
printf("(3) CVC: ***");
fflush(stdin);
gotoxy(44,15);
fgets(f.cvc,b,stdin);
fflush(stdin);
vld:
textofinal();
comprafinal();
gotoxy(35,17);
printf("(MÊS) Validade:  ");
gotoxy(51,17);
scanf("%i",&f.vldd);
if(f.vldd<=12)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("INTRODUZA UM MÊS VÁLIDO\n");
textcolor(WHITE);
system("pause");
system("cls");
goto vld;
}
gotoxy(35,19);
printf("(ANO 20-30) Validade:  ");
gotoxy(57,19);
scanf("%i",&f.vldm);
if(f.vldm<=30 && f.vldm>=20)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("INTRODUZA UM ANO VÁLIDO\n");
textcolor(WHITE);
system("pause");
system("cls");
goto vld;
}
Sleep(400);
//ficheiros------------------------------------------------------
SYSTEMTIME t;
GetLocalTime(&t);
//fatura
fprintf(ficheiro, "           --------------------------------------------------------------------------------\n");
fprintf(ficheiro, "                                                      -FATURA-                             \n");
fprintf(ficheiro, "           --------------------------------------------------------------------------------\n");
fprintf(ficheiro, "           COMPRA FEITA POR: %s                              \n",p.user);
fprintf(ficheiro, "           DATA: %i/%i/%i                                    \n",t.wDay,t.wMonth,t.wYear);
fprintf(ficheiro, "           --------------------------------------------------------------------------------\n");
fprintf(ficheiro, "           QTD                                                \n");
fprintf(ficheiro, "            Instrumentos:\n");
fprintf(ficheiro, "              %i - Guitarra\n              %i - Piano\n              %i - Violino\n              %i - Flauta\n              %i - Saxofone\n              %i - Tambor\n",q.qt1,q.qt2,q.qt3,q.qt4,q.qt5,q.qt6);
fprintf(ficheiro, "            Outros:\n");
fprintf(ficheiro, "              %i - Coluna de Som\n              %i - Palheta\n              %i - Capo\n              %i - Amplificador\n",q.qtcs,q.qtp,q.qtc,q.qta);
fprintf(ficheiro, "           --------------------------------------------------------------------------------\n");
fprintf(ficheiro, "           LOCAL DE ENTREGA: %s                              \n",f.local);
fprintf(ficheiro, "           CARTÃO DE CRÉDITO: ***%s***\n",f.cc);
fprintf(ficheiro, "           CVC: ***%s***\n",f.cvc);
if(f.vldd<=9)
{
fprintf(ficheiro, "           VALIDADE: ***0%i/",f.vldd);
}
else
{
fprintf(ficheiro, "           VALIDADE: ***%i/",f.vldd);
}
fprintf(ficheiro, "%i***\n",f.vldm);

fprintf(ficheiro, "            -------------------------------------------------------------------------------\n");
fprintf(ficheiro, "            TOTAL: %i$                                         \n",q.qtotal);
fprintf(ficheiro, "            -------------------------------------------------------------------------------");
fclose(ficheiro);
//talão
fprintf(ficheiro2,"                         -TALÃO DE TROCA-                  \n");
fprintf(ficheiro2,"----------------------------------------------------------------------------\n\n");
fprintf(ficheiro2," COMPRA FEITA POR: %s\n\n",p.user);
fprintf(ficheiro2," DATA DA COMPRA: %i/%i/%i\n\n",t.wDay,t.wMonth,t.wYear);
fprintf(ficheiro2," PODE REALIZAR A TROCA OU DEVOLUÇÃO ATÉ: %i/%i/%i\n\n",t.wDay+7,t.wMonth,t.wYear);
fprintf(ficheiro2,"----------------------------------------------------------------------------");
fclose(ficheiro2);
FILE *ficheiro3;
ficheiro3=fopen("Ganhos.txt","a+");
fprintf(ficheiro3,"DIA: %i às %i:%i | TOTAL = %i$ - Compra feita por: %s\n--------------------------------------------------------------------------\n",q.qtotal,t.wDay,t.wHour,t.wMinute,p.user);
gotoxy(76,15);
printf("\\");
Sleep(240);
gotoxy(76,15);
printf("/");
Sleep(240);
gotoxy(76,15);
printf("\\");
Sleep(240);
gotoxy(76,15);
printf("/");
Sleep(240);
gotoxy(76,15);
printf("\\");
Sleep(240);
gotoxy(76,15);
printf("/");
Sleep(240);
gotoxy(76,15);
printf("\\");
Sleep(240);
gotoxy(76,15);
printf("/");
Sleep(240);
gotoxy(76,15);
textcolor(GREEN);
printf("COMPRA EFETUADA");
Sleep(1000);
textcolor(WHITE);
gotoxy(1,23);
fclose(ficheiro3);
Sleep(1000);
system("Fatura.txt");
system("Talão_de_Troca.txt");
saida();
return 0;
}


//sair do programa

saida()
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
printf("e\n\n\n");Sleep(90);
Sleep(1000);
textcolor(WHITE);
return 0;
}


textofinal()
{
gotoxy(34,2);
printf("   ___");gotoxy(34,3);
printf("  / __\\___  _ __ ___  _ __  _ __ __ _");gotoxy(34,4);
printf(" / /  / _ \\| '_ ` _ \\| '_ \\| '__/ _` |");gotoxy(34,5);
printf("/ /__| (_) | | | | | | |_) | | | (_| |");gotoxy(34,6);
printf("\\____/\\___/|_| |_| |_| .__/|_|  \\__,_|");gotoxy(34,7);
printf("                     |_|");
}


textocarrinho()
{
gotoxy(26,1);
printf("   ___                _       _");
gotoxy(26,2);
printf("  / __\\__ _ _ __ _ __(_)_ __ | |__   ___");
gotoxy(26,3);
printf(" / /  / _` | '__| '__| | '_ \\| '_ \\ / _ \\");
gotoxy(26,4);
printf("/ /__| (_| | |  | |  | | | | | | | | (_) |");
gotoxy(26,5);
printf("\\____/\\__,_|_|  |_|  |_|_| |_|_| |_|\\___/");
}

//titulo do 2º menu

textomenu2()
{
gotoxy(28,1);
printf("  /\\/\\   ___ _ __  _   _");
gotoxy(28,2);
printf(" /    \\ / _ \\ '_ \\| | | |");
gotoxy(28,3);
printf("/ /\\/\\ \\  __/ | | | |_| |");
gotoxy(28,4);
printf("\\/    \\/\\___|_| |_|\\__,_|");
}


textologin()
{
gotoxy(8,1);
printf("   __             _");
gotoxy(8,2);
printf("  / /  ___   __ _(_)_ __");
gotoxy(8,3);
printf(" / /  / _ \\ / _` | | '_ \\");
gotoxy(8,4);
printf("/ /__| (_) | (_| | | | | |");
gotoxy(8,5);
printf("\\____/\\___/ \\__, |_|_| |_|");
gotoxy(8,6);
printf("            |___/");
}


textoloja()
{
 gotoxy(23,6);
printf("         |__/");Sleep(70);
gotoxy(23,5);
printf("\\____/\\___// |\\__,_| \\/    \\/\\__,_|___/_|_|\\_\\""");Sleep(70);
gotoxy(23,4);
printf("/ /__| (_) | | (_| | / /\\/\\ \\ |_| \\__ \\ |   <");Sleep(70);
gotoxy(23,3);
printf(" / /  / _ \\| |/ _` |  /    \\| | | / __| | |/ /");Sleep(70);
gotoxy(23,2);
printf("  / /  ___ (_) __ _    /\\/\\  _   _ ___(_) | __");Sleep(70);
gotoxy(23,1);
printf("   __       _                          _ _");Sleep(70);
}


logo()
{
textcolor(LIGHTBLUE);
gotoxy(41, 13);
printf("     -");
Sleep(80);
gotoxy(41, 12);
printf("   -_");
Sleep(80);
gotoxy(41, 11);
printf("   _-");
Sleep(80);
gotoxy(41, 10);
printf("    _-_");
Sleep(80);
gotoxy(41, 9);
printf("     -__-");
Sleep(80);
gotoxy(41, 8);
printf("    -_-_-");
Sleep(80);
gotoxy(41, 7);
printf("   -_-_-_");
Sleep(80);
gotoxy(41, 6);
printf("--_-_-_-_---");
Sleep(80);
textcolor(WHITE);
}


//art instrumentos

guitarra()
{
gotoxy(8, 4);
printf("        ___");Sleep(60);
gotoxy(8, 5);
printf("      o|* *|o");Sleep(60);
gotoxy(8, 6);
printf("      o|* *|o");Sleep(60);
gotoxy(8, 7);
printf("      o|* *|o");Sleep(60);
gotoxy(8, 8);
printf("       \\===/");Sleep(60);
gotoxy(8, 9);
printf("        |||");Sleep(60);
gotoxy(8, 10);
printf("        |||");Sleep(60);
gotoxy(8, 11);
printf("        |||");Sleep(60);
gotoxy(8, 12);
printf("        |||");Sleep(60);
gotoxy(8, 13);
printf("     ___|||___");Sleep(60);
gotoxy(8, 14);
printf("    /   |||   \\");Sleep(60);
gotoxy(8, 15);
printf("   /    |||    \\");Sleep(60);
gotoxy(8, 16);
printf("  |     |||     |");Sleep(60);
gotoxy(8, 17);
printf("   \\   (|||)   /");Sleep(60);
gotoxy(8, 18);
printf("    |   |||   |");Sleep(60);
gotoxy(8, 19);
printf("   /    |||    \\");Sleep(60);
gotoxy(8, 20);
printf("  /     |||     \\");Sleep(60);
gotoxy(8, 21);
printf(" /      |||      \\");Sleep(60);
gotoxy(8, 22);
printf(" |     [===]     |");Sleep(60);
gotoxy(8, 23);
printf("  \\             /");Sleep(60);
gotoxy(8, 24);
printf("   '.         .'");Sleep(60);
gotoxy(8, 25);
printf("     '-------'");Sleep(60);
}


piano()
{
gotoxy(8, 4);
printf(" _____________________________________");Sleep(60);
gotoxy(8, 5);
printf("|\\                                    \\");Sleep(60);
gotoxy(8, 6);
printf("| \\                                    \\");Sleep(60);
gotoxy(8, 7);
printf("|  \\____________________________________\\");Sleep(60);
gotoxy(8, 8);
printf("|  |       __---_ _---_                 |");Sleep(60);
gotoxy(8, 9);
printf("|  |      |======|=====|                |");Sleep(60);
gotoxy(8, 10);
printf("|  |      |======|=====|                |");Sleep(60);
gotoxy(8, 11);
printf("|  |  ____|__---_|_---_|______________  |");Sleep(60);
gotoxy(8, 12);
printf("|  | |                                | |");Sleep(60);
gotoxy(8, 13);
printf("| \\ \\                                  \\|");Sleep(60);
gotoxy(8, 14);
printf("|  \\||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||");Sleep(60);
gotoxy(8, 15);
printf("|  |\\ ,-------------------------------- |");Sleep(60);
gotoxy(8, 16);
printf("|  ||| |                            | | |");Sleep(60);
gotoxy(8, 17);
printf(" \\ ||| |           -  -             | | |");Sleep(60);
gotoxy(8, 18);
printf("  \\'|| |-----------\\-\\--------------| | |");Sleep(60);
gotoxy(8, 19);
printf("    \\|_|            "  "               \\|_|/");Sleep(60);
}


violino()
{
gotoxy(8, 4);
printf("             ,;,");Sleep(60);
gotoxy(8, 5);
printf("            #(|)#");Sleep(60);
gotoxy(8, 6);
printf("            #|||#");Sleep(60);
gotoxy(8, 7);
printf("             |||");Sleep(60);
gotoxy(8, 8);
printf("             |||");Sleep(60);
gotoxy(8, 9);
printf("             |||");Sleep(60);
gotoxy(8, 10);
printf("            _|||_");Sleep(60);
gotoxy(8, 11);
printf("          /  |||  \\");Sleep(60);
gotoxy(8, 12);
printf("         /   |||   \\");Sleep(60);
gotoxy(8, 13);
printf("         |   |||   |");Sleep(60);
gotoxy(8, 14);
printf("         |_  |||  _|");Sleep(60);
gotoxy(8, 15);
printf("         |_  |||  _|");Sleep(60);
gotoxy(8, 16);
printf("         |   |||   |");Sleep(60);
gotoxy(8, 17);
printf("        /    |||    \\");Sleep(60);
gotoxy(8, 18);
printf("       |    _| |_    |""");Sleep(60);
gotoxy(8, 19);
printf("       |    \\~~~/    |""");Sleep(60);
gotoxy(8, 20);
printf("        \\    \\ /    /");Sleep(60);
gotoxy(8, 21);
printf("         \\_.__Y__._/");Sleep(60);
gotoxy(8, 22);
printf("             \\|/");Sleep(60);
gotoxy(8, 23);
printf("              |");Sleep(60);
}


flauta()
{
gotoxy(8, 4);
printf("    -.");gotoxy(8, 5);Sleep(60);
printf("    | \\");gotoxy(8, 6);Sleep(60);
printf("    /  |");gotoxy(8, 7);Sleep(60);
printf(" _.'   |");gotoxy(8, 8);Sleep(60);
printf("|      |");gotoxy(8, 9);Sleep(60);
printf(" \\ __ /");gotoxy(8, 10);Sleep(60);
printf(" |    |");gotoxy(8, 11);Sleep(60);
printf(" |    |");gotoxy(8, 12);Sleep(60);
printf(" |    |");gotoxy(8, 13);Sleep(60);
printf(" |    |");gotoxy(8, 14);Sleep(60);
printf(" /    \\");gotoxy(8, 15);Sleep(60);
printf("|      |");gotoxy(8, 16);Sleep(60);
printf("|      |");gotoxy(8, 17);Sleep(60);
printf(" \\ __ /");gotoxy(8, 18);Sleep(60);
printf(" |    |");gotoxy(8, 19);Sleep(60);
printf(" )    (");gotoxy(8, 20);Sleep(60);
printf(" |    |");gotoxy(8, 21);Sleep(60);
printf(" |    (");gotoxy(8, 21);Sleep(60);
printf(" |    |");Sleep(60);

}


saxofone()
{
gotoxy(1, 4);
printf("  _,-----,____;===;,__");gotoxy(1, 5);Sleep(60);
printf(" <'.._____,-------__   \\");gotoxy(1, 6);Sleep(60);
printf("                    \\   \\");gotoxy(1, 7);Sleep(60);
printf("                     \\   \\");gotoxy(1, 8);Sleep(60);
printf("                      \\   \\___");gotoxy(1, 9);Sleep(60);
printf("                       \\      \\");gotoxy(1, 10);Sleep(60);
printf("                        \\  O   \\");gotoxy(1, 11);Sleep(60);
printf("                         \\  O   \\");gotoxy(1, 12);Sleep(60);
printf("                          \\  O   \\");gotoxy(1, 13);Sleep(60);
printf("                           \\      \\");gotoxy(1, 14);Sleep(60);
printf("                            |  O  |");gotoxy(1, 15);Sleep(60);
printf("                            |   O |");gotoxy(1, 16);Sleep(60);
printf("                            |     |      ____________");gotoxy(1, 17);Sleep(60);
printf("                            |     |      \\          /");gotoxy(1, 18);Sleep(60);
printf("                            |     |       \\        /");gotoxy(1, 19);Sleep(60);
printf("                            |      \\      /       /");gotoxy(1, 20);Sleep(60);
printf("                            [       |    /       /");gotoxy(1, 21);Sleep(60);
printf("                            [       |__-/       /");gotoxy(1, 22);Sleep(60);
printf("                             [                 /");gotoxy(1, 23);Sleep(60);
printf("                              [               /");gotoxy(1, 24);Sleep(60);
printf("                               \\',          _/");gotoxy(1, 25);Sleep(60);
printf("                                  ' ; _ . '-");Sleep(60);
}


tambor()
{
gotoxy(8, 4);
printf("         ,                           ,");gotoxy(8, 5);Sleep(60);
printf("        `\\`\\                       /'/'");gotoxy(8, 6);Sleep(60);
printf("          `\\`\\                   /'/'");gotoxy(8, 7);Sleep(60);
printf("            `\\`\\ ............. /'/'");gotoxy(8, 8);Sleep(60);
printf("       ..,;;;;`\\`\\'''''''''''/'/';;;,..");gotoxy(8, 9);Sleep(60);
printf("    .:''        `\\`\\_     _/'/'       ``;.");gotoxy(8, 10);Sleep(60);
printf("    :::.          `(_)   (_)'         ,;;:");gotoxy(8, 11);Sleep(60);
printf("    ::.``;;;,....            ....,;;;'',;:");gotoxy(8, 12);Sleep(60);
printf("    :\\\\ ``;;;;. ````::::::::'''''.;;;;'';:");gotoxy(8, 13);Sleep(60);
printf("    : \\\\      ```:::::::::::::'''  \\\\   ::");gotoxy(8, 14);Sleep(60);
printf("    :  \\\\             \\\\          \\\\    ::");gotoxy(8, 15);Sleep(60);
printf("    :   \\\\             \\\\          \\\\   ::");gotoxy(8, 16);Sleep(60);
printf("    :    \\\\             \\\\          \\\\  ::");gotoxy(8, 17);Sleep(60);
printf("    :     \\\\             \\\\          \\\\ ;:");gotoxy(8, 18);Sleep(60);
printf("    ::.    \\\\             \\\\          .;::");gotoxy(8, 19);Sleep(60);
printf("    `:.``:::.....          \\\\   ....;;;''.'");gotoxy(8, 20);Sleep(60);
printf("       ``:::... ```::::::.:''' ...;;;''");gotoxy(8, 21);Sleep(60);
printf("              ````::::::::::''''");Sleep(60);
}

//art outros

colunadesom()
{
gotoxy(1, 4);
printf("                 _______________");gotoxy(1, 5);Sleep(60);
printf(" _________________l___________l________________");gotoxy(1, 6);Sleep(60);
printf(" l    ___    l oo [::::] [] [] oo l    ___    l");gotoxy(1, 7);Sleep(60);
printf(" l  /:::::\\  l--------------------l  /:::::\\  l");gotoxy(1, 8);Sleep(60);
printf(" l |:::::::| l  l   __    __   l  l |:::::::| l");gotoxy(1, 9);Sleep(60);
printf(" l |:::::::| l  l _(__)__(__)_ l  l |:::::::| l");gotoxy(1, 10);Sleep(60);
printf(" l  \\:::::/  l  l______________l  l  \\:::::/  l");gotoxy(1, 11);Sleep(60);
printf(" l___________l____________________l___________l");Sleep(60);
}


palheta()
{
gotoxy(1, 4);
printf("         ___________________");gotoxy(1, 5);Sleep(60);
printf("       _/@@@@@@@@@@@@@@@@@@@\\_");gotoxy(1, 6);Sleep(60);
printf("      /@@@@@@@@@@@@@@@@@@@@@@@\\");gotoxy(1, 7);Sleep(60);
printf("     /@@@@@@@@@@@@@@@@@@@@@@@@@\\");gotoxy(1, 8);Sleep(60);
printf("    /@@@@@@@@@@@@@@@@@@@@@@@@@@@\\");gotoxy(1, 9);Sleep(60);
printf("    |@@@@@@@@@@@@@@@@@@@@@@@@@@@|");gotoxy(1, 10);Sleep(60);
printf("     \\@@@@@@@@@@@@@@@@@@@@@@@@@/");gotoxy(1, 11);Sleep(60);
printf("      \\@@@@@@@@@@@@@@@@@@@@@@@/");gotoxy(1, 12);Sleep(60);
printf("       \\@@@@@@@@@@@@@@@@@@@@@/");gotoxy(1, 13);Sleep(60);
printf("        \\@@@@@@@@@@@@@@@@@@@/");gotoxy(1, 14);Sleep(60);
printf("         \\@@@@@@@@@@@@@@@@@/");gotoxy(1, 15);Sleep(60);
printf("          \\@@@@@@@@@@@@@@@/");gotoxy(1, 16);Sleep(60);
printf("           \\@@@@@@@@@@@@@/");gotoxy(1, 17);Sleep(60);
printf("            \\@@@@@@@@@@@/");gotoxy(1, 18);Sleep(60);
printf("             \\;@@@@@@@;/");gotoxy(1, 19);Sleep(60);
printf("               \\_____/");Sleep(60);
}


capo()
{
gotoxy(1, 4);
printf("             ______________");gotoxy(1, 5);Sleep(60);
printf("            /((/((@((/@@@@\\\\");gotoxy(1, 6);Sleep(60);
printf("          ,/(@@@___/,@@@@@@@@(");gotoxy(1, 7);Sleep(60);
printf("         ///-/  @@@         /@@@@@@@/,");gotoxy(1, 8);Sleep(60);
printf("        ///    /@@@@               |");gotoxy(1, 9);Sleep(60);
printf("       ///    /@@@@@@@@@@@@@@@@@@@@/");gotoxy(1, 10);Sleep(60);
printf("      ///    /@/@/(@@      ((.");gotoxy(1, 11);Sleep(60);
printf("     ///                   (/");gotoxy(1, 12);Sleep(60);
printf("    ///                    (,");gotoxy(1, 13);Sleep(60);
printf("   |///                     (,");gotoxy(1, 14);Sleep(60);
printf("   ///                      (");gotoxy(1, 15);Sleep(60);
printf("  /(|                        (");gotoxy(1, 16);Sleep(60);
printf("  |*|                         (");gotoxy(1, 17);Sleep(60);
printf("  |_/                         /");Sleep(60);
}


amplificador()
{
gotoxy(2, 4);
printf("  _________________________");gotoxy(2, 5);Sleep(60);
printf(" |\\________________________\\");gotoxy(2, 6);Sleep(60);
printf(" | | O  o o o  =|=  |  =    |");gotoxy(2, 7);Sleep(60);
printf(" | | O  o o o   |  =|=  >#  |");gotoxy(2, 8);Sleep(60);
printf(" | |________________________|");gotoxy(2, 9);Sleep(60);
printf(" | |________________________|");gotoxy(2, 10);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 11);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 12);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 13);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 14);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 15);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 16);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 17);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 18);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 19);Sleep(60);
printf(" | |XXXXXXXXXXXXXXXXXXXXXXXX|");gotoxy(2, 20);Sleep(60);
printf(" \\_|________________________|");Sleep(60);
}
