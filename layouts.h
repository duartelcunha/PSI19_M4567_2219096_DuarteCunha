#ifndef LAYOUTS_H_INCLUDED
#define LAYOUTS_H_INCLUDED


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


//layout comprafinal

comprafinal()
{
//linha-esquerda----------------------------------------------------------------------
gotoxy(34,9);
printf("______________________________________");
gotoxy(33,10);
printf("|");
gotoxy(33,11);
printf("|");
gotoxy(33, 12);
printf("|");
gotoxy(33, 13);
printf("|");
gotoxy(33, 14);
printf("|");
gotoxy(33, 15);
printf("|");
gotoxy(33, 16);
printf("|");
gotoxy(33, 17);
printf("|");
gotoxy(33, 18);
printf("|");
gotoxy(33, 19);
printf("|");
gotoxy(33, 20);
printf("|");
gotoxy(33, 21);
printf("|");
//linha-direita-------------------------------------------------------------------------
gotoxy(65,10);
printf("       |");
gotoxy(65,11);
printf("       |");
gotoxy(65, 12);
printf("       |");
gotoxy(65, 13);
printf("       |");
gotoxy(65, 14);
printf("       |");
gotoxy(65, 15);
printf("       |");
gotoxy(65, 16);
printf("       | >");
gotoxy(65, 17);
printf("       |");
gotoxy(65, 18);
printf("       |");
gotoxy(65, 19);
printf("       |");
gotoxy(65, 20);
printf("       |");
gotoxy(65, 21);
printf("       |");
gotoxy(34,21);
printf("______________________________________\n\n\n");
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
printf("                     |  || // /  /~/  .-  \\  /~-\\\n");Sleep(60);
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
printf("      ~~""""""""""-\\.(____) /   /'  /$$$$$%%$$$$$$\\_            /\n");Sleep(60);
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

#endif // LAYOUTS_H_INCLUDED
