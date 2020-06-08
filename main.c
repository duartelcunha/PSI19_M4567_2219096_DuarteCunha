#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#include <conio.h>
#include <locale.h>
#include <time.h>
#define a 11
#define b 4


typedef struct
{
 char user[15];
 int pin;
}utilizador;

struct fatura
{
int cc;
int cvc;
int vldd;
int vldm;
char local[20];
};

typedef struct
{
int n2,n3,n4,n5,i;
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
struct fatura f;
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
if(strcmp(p.user,"Carla")==0 || strcmp(p.user,"Duarte")==0)
{
if(p.pin==8006 || p.pin==123)
{
gotoxy(63,10);
textcolor(GREEN);
printf("LOGIN EFETUADO COM SUCESSO");
Sleep(2000);
//acesso
}
else
{
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
gotoxy(63,10);
textcolor(RED);
printf("UTILIZADOR INEXISTENTE\n\n");
Sleep(1800);
textcolor(WHITE);
main();
}
}


//--------------------------------------------------



//contem os instrumentos e outros

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
scanf("%i",&n);
switch(n)
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
scanf("%i",&q.n2);
switch(q.n2)
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
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
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
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
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
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
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
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
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
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
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
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
Sleep(1000);
goto instrumentos;
}
break;
//voltar-atrás
case 9:
goto menu;
break;
}
}while(q.n3==1);
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
Sleep(1000);
goto outros;
}
}
break;

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
scanf("%i",&q.n2);
switch(q.n2)
{
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
case 1:
system("cls");
colunadesom();
gotoxy(50, 4);
printf("PREÇO: 240$");
gotoxy(50, 6);
printf("Indique a QUANTIDADE: ");
scanf("%i",&q.qtcs);
q.qcs=240*q.qtcs;
gotoxy(50, 8);
printf("DESEJA ADICIONAR MAIS AO CARRINHO");
gotoxy(50, 9);
printf("SIM: 1 | NÃO: 2 | Ver Carrinho: 3");
gotoxy(50, 10);
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
Sleep(1000);
goto outros;
}
break;
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
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
Sleep(1000);
goto outros;
}
break;

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
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
Sleep(1000);
goto outros;
}
break;

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
scanf("%i",&q.n3);
if(q.n3==3)
{
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
else if(q.n3==1 || q.n3==2)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
Sleep(1000);
goto outros;
}
break;
case 9:
goto menu;
break;
}
}while(q.n3==1);
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{

goto menu;
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("ERRO DE NUMERAÇÃO");
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
carrinho();
if(q.n4==3)
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
q.qcs=0;
q.qtcs=0;
q.qp=0;
q.qtp=0;
q.qc=0;
q.qtc=0;
q.qa=0;
q.qta=0;
goto menu;
}
else if(q.n4==1)
{
q.i=q.qt1+q.qt2+q.qt3+q.qt4+q.qt5+q.qt6+q.qtcs+q.qtp+q.qtc+q.qta;
system("cls");
gotoxy(8,3);
printf("DESEJA PROCEDER COM A COMPRA DE %i ITENS",q.i);
gotoxy(8,4);
printf("SIM: 1 | NÃO: 2");
gotoxy(8,5);
scanf("%i",&q.n5);
if(q.n5==1)
{
fatura();
return 0;
}
else if(q.n5==2)
{
goto menu;
}
}
else if(q.n4==2)
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
}
return 0;
}



//--------------------------------------------------



//bem-vindo

bemvindo()
{
//bem-vindo-------------
textcolor(WHITE);
gotoxy(15, 4);
printf("B");
Sleep(90);
gotoxy(16, 4);
printf("e");
Sleep(90);
gotoxy(17, 4);
printf("m");
Sleep(90);
gotoxy(18, 4);
printf("-");
Sleep(90);
gotoxy(19, 4);
printf("V");
Sleep(90);
gotoxy(20, 4);
printf("i");
Sleep(90);
gotoxy(21, 4);
printf("n");
Sleep(90);
gotoxy(22, 4);
printf("d");
Sleep(90);
gotoxy(23, 4);
printf("o:");
Sleep(90);
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

//layout do 2º menu

layoutmenu2()
{
//linha-esquerda----------------------------------------------------------------------
gotoxy(24,1);
printf("__---");
gotoxy(20,2);
printf("   /");
gotoxy(20,3);
printf("  /");
gotoxy(20, 4);
printf("||");
gotoxy(20, 5);
printf("||");
gotoxy(20, 6);
printf("||");
gotoxy(20, 7);
printf("||");
gotoxy(20, 8);
printf("||");
gotoxy(20, 9);
printf("||");
gotoxy(20, 10);
printf("||");
gotoxy(20, 11);
printf("||");
gotoxy(20, 12);
printf("||");
gotoxy(20, 13);
printf("||");
gotoxy(20, 14);
printf("||");
gotoxy(20, 15);
printf("||");
gotoxy(20, 16);
printf("||");
gotoxy(20, 17);
printf("||");
gotoxy(20, 18);
printf("||");
gotoxy(20, 19);
printf("||");
gotoxy(20, 20);
printf("||");
gotoxy(20, 21);
printf("||");
gotoxy(20, 22);
printf("||");
gotoxy(20, 23);
printf("|");
//linha-direita-------------------------------------------------------------------------
gotoxy(53,1);
printf("---__");
gotoxy(58,2);
printf("\\");
gotoxy(59,3);
printf("\\");
gotoxy(60, 4);
printf("||");
gotoxy(60, 5);
printf("||");
gotoxy(60, 6);
printf("||");
gotoxy(60, 7);
printf("||");
gotoxy(60, 8);
printf("||");
gotoxy(60, 9);
printf("||");
gotoxy(60, 10);
printf("||");
gotoxy(60, 11);
printf("||");
gotoxy(60, 12);
printf("||");
gotoxy(60, 13);
printf("||");
gotoxy(60, 14);
printf("||");
gotoxy(60, 15);
printf("||");
gotoxy(60, 16);
printf("||");
gotoxy(60, 17);
printf("||");
gotoxy(60, 18);
printf("||");
gotoxy(60, 19);
printf("||");
gotoxy(60, 20);
printf("||");
gotoxy(60, 21);
printf("||");
gotoxy(60, 22);
printf("||");
gotoxy(60, 23);
printf(" |");
//linha-baixo-------------------------------------------------------------------------
gotoxy(22, 22);
printf("______________________________________");
gotoxy(21, 23);
printf("________________________________________");
}

//layout principal

mainlayout()
{
//linhas-------------------------------------------------------------------------
gotoxy(70,1);
printf("---____");
Sleep(20);
gotoxy(15,1);
printf("____---");
Sleep(20);
gotoxy(77,2);
printf("\\");
Sleep(20);
gotoxy(10,2);
printf("    /");
Sleep(20);
gotoxy(79,3);
printf("\\");
Sleep(20);
gotoxy(10,3);
printf("  /");
Sleep(20);
gotoxy(80, 4);
printf("||");
Sleep(20);
gotoxy(10, 4);
printf("||");
Sleep(20);
gotoxy(80, 5);
printf("||");
Sleep(20);
gotoxy(10, 5);
printf("||");
Sleep(20);
gotoxy(80, 6);
printf("||");
Sleep(20);
gotoxy(10, 6);
printf("||");
Sleep(20);
gotoxy(80, 7);
printf("||");
Sleep(20);
gotoxy(10, 7);
printf("||");
Sleep(20);
gotoxy(80, 8);
printf("||");
Sleep(20);
gotoxy(10, 8);
printf("||");
Sleep(20);
gotoxy(80, 9);
printf("||");
Sleep(20);
gotoxy(10, 9);
printf("||");
Sleep(20);
gotoxy(80, 10);
printf("||");
Sleep(20);
gotoxy(10, 10);
printf("||");
Sleep(20);
gotoxy(80, 11);
printf("||");
Sleep(20);
gotoxy(10, 11);
printf("||");
Sleep(20);
gotoxy(80, 12);
printf("||");
Sleep(20);
gotoxy(10, 12);
printf("||");
Sleep(20);
gotoxy(80, 13);
printf("||");
Sleep(20);
gotoxy(10, 13);
printf("||");
Sleep(20);
gotoxy(80, 14);
printf("||");
Sleep(20);
gotoxy(10, 14);
printf("||");
Sleep(20);
gotoxy(80, 15);
printf("||");
Sleep(20);
gotoxy(10, 15);
printf("||");
Sleep(20);
gotoxy(80, 16);
printf("||");
Sleep(20);
gotoxy(10, 16);
printf("||");
Sleep(20);
gotoxy(80, 17);
printf("||");
Sleep(20);
gotoxy(10, 17);
printf("||");
Sleep(20);
gotoxy(80, 18);
printf("||");
Sleep(20);
gotoxy(10, 18);
printf("||");
Sleep(20);
gotoxy(80, 19);
printf("||");
Sleep(20);
gotoxy(10, 19);
printf("||");
Sleep(20);
gotoxy(80, 20);
printf("||");
Sleep(20);
gotoxy(10, 20);
printf("||");
Sleep(20);
gotoxy(80, 21);
printf("||");
Sleep(20);
gotoxy(10, 21);
printf("||");
Sleep(20);
gotoxy(80, 22);
printf("||");
Sleep(20);
gotoxy(10, 22);
printf("||");
Sleep(20);
gotoxy(80, 23);
printf(" |");
Sleep(20);
gotoxy(10, 23);
printf("|");
Sleep(20);
//linha-baixo-------------------------------------------------------------------------
gotoxy(12, 22);
printf("____________________________________________________________________");
Sleep(80);
gotoxy(11, 23);
printf("______________________________________________________________________");
Sleep(80);
}

//layout secundário

layoutsec()
{
//linha-esquerda----------------------------------------------------------------------
gotoxy(15,1);
printf("____--------------");
gotoxy(10,2);
printf("    /");
gotoxy(10,3);
printf("  /");
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
gotoxy(59,1);
printf("--------------____");
gotoxy(77,2);
printf("\\");
gotoxy(79,3);
printf("\\");
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
//linha-baixo-------------------------------------------------------------------------
gotoxy(12, 22);
printf("____________________________________________________________________");
gotoxy(11, 23);
printf("______________________________________________________________________");
}

//layout do carrinho de compras

void layoutcarrinho()
{
//linha-esquerda----------------------------------------------------------------------
gotoxy(17,1);
printf("____------");
gotoxy(10,2);
printf("    /");
gotoxy(10,3);
printf("  /");
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
gotoxy(65,1);
printf("------____");
gotoxy(77,2);
printf("\\");
gotoxy(79,3);
printf("\\");
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
//linha-baixo-------------------------------------------------------------------------
gotoxy(12, 22);
printf("____________________________________________________________________");

gotoxy(11, 23);
printf("______________________________________________________________________");
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
scanf("       %i",&q.n4);
}

//titulo do carrinho de compras

textocarrinho()
{
gotoxy(25,1);
printf("   ___                _       _");
gotoxy(25,2);
printf("  / __\\__ _ _ __ _ __(_)_ __ | |__   ___");
gotoxy(25,3);
printf(" / /  / _` | '__| '__| | '_ \\| '_ \\ / _ \\");
gotoxy(25,4);
printf("/ /__| (_| | |  | |  | | | | | | | | (_) |");
gotoxy(25,5);
printf("\\____/\\__,_|_|  |_|  |_|_| |_|_| |_|\\___/");
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
ficheiro = fopen("1 Fatura.txt", "w+" );
ficheiro2 = fopen("2 Talão de Troca.txt", "w+" );
checkout:
system("cls");
printf("FINALIZAÇÃO DA COMPRA\n");
printf("(10) NÚMERO DO CARTÃO DE CRÉDITO: ");
scanf("%i",&f.cc);
if(f.cc<=9999999999 && f.cc>=1000000000)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("INTRODUZA UM CC VÁLIDO");
Sleep(1000);
textcolor(WHITE);
system("pause");
goto checkout;
}
printf("\n(3) CVC: ");
scanf("%i",&f.cvc);
if(f.cvc<=999 && f.cvc>=100)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("INTRODUZA UM CVC VÁLIDO");
Sleep(1000);
textcolor(WHITE);
system("pause");
goto checkout;
}
vld:
printf("\n(DIA) Validade:  ");
scanf("%i",&f.vldd);
if(f.vldd<=31)
{
//continua
}
else
{
system("cls");
gotoxy(15,3);
textcolor(YELLOW);
printf("INTRODUZA UM DIA VÁLIDO\n");
textcolor(WHITE);
system("pause");
goto vld;
system("cls");
}

printf("\n(MÊS) Validade:  ");
scanf("%i",&f.vldm);
if(f.vldm<=12)
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
goto vld;
system("cls");
}
//ficheiros------------------------------------------------------
SYSTEMTIME t;
GetLocalTime(&t);
fprintf(ficheiro, "--FATURA--\n");
fprintf(ficheiro,"COMPRA FEITA POR: %s\n",p.user);
fprintf(ficheiro,"DATA: %i/%i/%i\n",t.wDay,t.wMonth,t.wYear);
fprintf(ficheiro,"-----------------------------------------\n");
fprintf(ficheiro,"QTD\n");
fprintf(ficheiro,"Instrumentos:\n");
fprintf(ficheiro,"%i - Guitarra\n%i - Piano\n%i - Violino\n%i - Flauta\n%i - Saxofone\n%i - Tambor\n",q.qt1,q.qt2,q.qt3,q.qt4,q.qt5,q.qt6);
fprintf(ficheiro,"Outros:\n");
fprintf(ficheiro,"%i - Coluna de Som\n%i - Palheta\n%i - Capo\n%i - Amplificador\n",q.qtcs,q.qtp,q.qtc,q.qta);
fprintf(ficheiro,"------------------------\n");
fprintf(ficheiro, "CARTÃO DE CRÉDITO: ***%s***\n",f.cc);
fprintf(ficheiro, "CVC: ***%s***\n",f.cvc);
if(f.vldd<=9)
{
fprintf(ficheiro, "VALIDADE: ***0%i/",f.vldd);
}
else
{
fprintf(ficheiro, "VALIDADE: ***%i/",f.vldd);
}
if(f.vldm<=9)
{
fprintf(ficheiro, "0%i***\n",f.vldm);
}
else
{
fprintf(ficheiro, "%i***\n",f.vldm);
}
fprintf(ficheiro,"------------------------------------------\n");
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
printf("e");Sleep(90);
Sleep(1000);
textcolor(WHITE);
return 0;
}

//titulo da loja

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

//logo da loja

logo()
{
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
}

//titulo do login

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

//layout do login

layoutlogin()
{
//esquerdo------------
gotoxy(7,8);
printf("/");
gotoxy(6,9);
printf("|");
gotoxy(6,10);
printf("|");
gotoxy(6,11);
printf("|");
gotoxy(7,12);
printf("\\");
//direito------------
gotoxy(59,8);
printf("\\");
gotoxy(60,9);
printf("|");
gotoxy(60,10);
printf("|>");
gotoxy(60,11);
printf("|");
gotoxy(59,12);
printf("/");
//cima------------------------------------------------------------
gotoxy(8,7);
printf("___________________________________________________");
//baixo------------------------------------------------------------
gotoxy(8,12);
printf("___________________________________________________");
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
printf("                                  ' ; _ . '|");Sleep(60);
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

//developer art

developer()
{
system("cls");
printf("                        /|\n");Sleep(60);
printf("                      /'||\n");Sleep(60);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||                                   FEITO POR: Duarte Cunha\n");Sleep(120);
printf("                     |  ||                                   CURSO: TGPSI\n");Sleep(120);
printf("                     |  ||                                   TURMA: I\n");Sleep(120);
printf("                     |  ||                                   ANO: 10º\n");Sleep(120);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||\n");Sleep(60);
printf("                     |  ||         __.--._\n");Sleep(60);
printf("                     |  ||      /~~   __.-~\\ _\n");Sleep(60);
printf("                     |  ||  _.-~ / _---._ ~-\\/~\\\n");Sleep(60);
printf("                     |  || // /  /~/  .-  \  /~-\\\n");Sleep(60);
printf("                     |  ||((( /(/_(.-(-~~~~~-)_/ |\n");Sleep(60);
printf("                     |  || ) (( |_.----~~~~~-._\\ /\n");Sleep(60);
printf("                     |  ||    ) |              \\_|\n");Sleep(60);
printf("                     |  ||     (| =-_   _.-=-  |~)        ,\n");Sleep(60);
printf("                     |  ||      | `~~ |   ~~'  |/~-._-'/'/_,\n");Sleep(60);
printf("                     |  ||       \\    |        /~-.__---~ , ,\n");Sleep(60);
printf("                     |  ||       |   ~-''     || `\\_~~~----~\n");Sleep(60);
printf("                     |  ||_.ssSS$$\\ -====-   / )\\_  ~~--~\n");Sleep(60);
printf("             ___.----|~~~|%$$$$$$/ \\_    _.-~ /' )$s._\n");Sleep(60);
printf("    __---~-~~        |   |%%$$$$/ /  ~~~~   /'  /$$$$$$$s__\n");Sleep(60);
printf("  /~       ~\\    ============$$/ /        /'  /$$$$$$$$$$$SS-.\n");Sleep(60);
printf("/'      ./\\\\\\\\\\\\_( ~---._(_))$/ /       /'  /$$$$%$$$$$~      \\\n");Sleep(60);
printf("(      //////////(~-(..___)/$/ /      /'  /$$%$$%$$$$'         \\\n");Sleep(60);
printf(" \\    |||||||||||(~-(..___)$/ /  /  /'  /$$$%$$$%$$$            |\n");Sleep(60);
printf("  `-__ \\\\\\\\\\\\\\\\\\\\\\(-.(_____) /  / /'  /$$$$%$$$$$%$             |\n");Sleep(60);
printf("      ~~""""""""""-\.(____) /   /'  /$$$$$%%$$$$$$\\_            /\n");Sleep(60);
printf("                    $|===|||  /'  /$$$$$$$%%%$$$$$( ~         ,'|\n");Sleep(60);
printf("                __  $|===|%\\/'  /$$$$$$$$$$$%%%%$$|        ,''  |\n");Sleep(60);
printf("               ///\\ $|===|/'  /$$$$$$%$$$$$$$%%%%$(            /'\n");Sleep(60);
printf("                \\///\\|===|  /$$$$$$$$$%%$$$$$$%%%%$\\_-._       |\n");Sleep(60);
printf("                 `\\//|===| /$$$$$$$$$$$%%%$$$$$$-~~~    ~      /\n");Sleep(60);
printf("                   `\\|-~~(~~-`$$$$$$$$$%%%///////._       ._  |\n");Sleep(60);
printf("                   (__--~(     ~\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\        \\ \\\n");Sleep(60);
printf("                   (__--~~(       \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|        \\/\n");Sleep(60);
printf("                    (__--~(       ||||||||||||||||||/       _/\n");Sleep(60);
printf("                     (__.--._____//////////////////__..---~~\n");Sleep(60);
printf("                     |   """"'''''           ___,,,,ss$$$%\n");Sleep(60);
printf("                    ,%\\__      __,,,\\sssSS$$$$$$$$$$$$$$%%\n");Sleep(60);
printf("                  ,%%%%$$$$$$$$$$\\;;;;\\$$$$$$$$$$$$$$$$%%%$.\n");Sleep(60);
printf("                 ,%%%%%%$$$$$$$$$$%\\;;;;\\$$$$$$$$$$$$%%%$$$$\n");Sleep(60);
printf("               ,%%%%%%%%$$$$$$$$$%$$$\\;;;;\\$$$$$$$$$%%$$$$$$,\n");Sleep(60);
printf("              ,%%%%%%%%%$$$$$$$$%$$$$$$\\;;;;\\$$$$$$%%$$$$$$$$\n");Sleep(60);
printf("             ,%%%%%%%%%%%$$$$$$%$$$$$$$$$\\;;;;\\$$$%$$$$$$$$$$$\n");Sleep(60);
printf("             %%%%%%%%%%%%$$$$$$$$$$$$$$$$$$\\;;;$$$$$$$$$$$$$$$\n");Sleep(60);
printf("               ""==%%%%%%%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$SV""\n");Sleep(60);
printf("                           $$$$$$$$$$$$$$$$$$$$=========\n");Sleep(60);
printf("                             ----------------");Sleep(60);

}


//layout comprafinal

comprafinal()
{
//linha-esquerda----------------------------------------------------------------------
gotoxy(21,9);
printf("__________________________________________________________________");
gotoxy(20,10);
printf("|");
gotoxy(20,11);
printf("|");
gotoxy(20, 12);
printf("|");
gotoxy(20, 13);
printf("|");
gotoxy(20, 14);
printf("|");
gotoxy(20, 15);
printf("|");
gotoxy(20, 16);
printf("|");
gotoxy(20, 17);
printf("|");
gotoxy(20, 18);
printf("|");
//linha-direita-------------------------------------------------------------------------
gotoxy(80,10);
printf("       |");
gotoxy(80,11);
printf("       |");
gotoxy(80, 12);
printf("       |");
gotoxy(80, 13);
printf("       |");
gotoxy(80, 14);
printf("       |");
gotoxy(80, 15);
printf("       |");
gotoxy(80, 16);
printf("       |");
gotoxy(80, 17);
printf("       |");
gotoxy(80, 18);
printf("       |");
gotoxy(21,18);
printf("__________________________________________________________________\n\n\n");
}

textofinal()
{
gotoxy(18,2);
printf("   ___ _                ___          ___");gotoxy(18,3);Sleep(60);
printf("  / __(_)_ __ ___      /   \\__ _    / __\\___  _ __ ___  _ __  _ __ __ _");gotoxy(18,4);Sleep(60);
printf(" / _\\ | | '_ ` _ \\    / /\\ / _` |  / /  / _ \\| '_ ` _ \\| '_ \\| '__/ _` |");gotoxy(18,5);Sleep(60);
printf("/ /   | | | | | | |  / /_// (_| | / /__| (_) | | | | | | |_) | | | (_| |");gotoxy(18,6);Sleep(60);
printf("\\/    |_|_| |_| |_| /___,' \\__,_| \\____/\\___/|_| |_| |_| .__/|_|  \\__,_|");gotoxy(18,7);Sleep(60);
printf("                                                       |_|");Sleep(60);
}
