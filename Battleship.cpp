#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>


using namespace std;

int main(){

    system("Color 0F");
    string line, collection;
    char table[15][15];
    int enemy[15][15];
    int ctr[10];
    int you[2];
    int game, score, shells,combo, wawaw[2];
    int evac;
    char inp;

    restart:

    evac = 3;
    wawaw[0] = 0;
    score = 0;
    combo = 0;
    shells = 100;

    Mainmenu:
    system("Color 0F"), system("cls");
    cout << "Artillery"<<endl, system("pause"), system("cls");
    cout << "Artillery\n\n\nPress any key to play\nPress h for help\nPress t for tips"<<endl;

    inp = getch();

    switch(inp){
    case 'h':
    system("cls");
    cout << "Artillery\n\n";
    cout << "Controls\n";
    cout << "  W   \n";
    cout << "A S D \n";
    cout << "\n\nPress q to evacuate";
    cout << "\n\nPress any unmentioned key to drop a bomb\n\n";
    getch();
    goto Mainmenu;
    break;

    case 't':
    system("cls");
    cout << "Artillery\n\n";
    cout << "Buildings: \n\n" << "X X X" << "\n\n" << "X X X X X" << "\n\n" << "X\nX\nX"<< "\n\n" << "X\nX\nX\nX\nX"<< "\n\n" << "X X\nX X";
    getch();
    system("cls");
    cout << "Artillery\n\n";
    cout << "Detection: This is you detection meter. If you were detected by enemy, they can bomb you and that'll end the game";
    cout << "\n\nEnemy Damage: This is the intensity of your damage to enemy. The more building you spotted and destroyed, the slower they will detect you";
    cout << "\n\nEvacuation: To avoid being bombed due to detection, you could evacuate from your place and find another sector to bomb. But note that you have a limited chance for evacuation. Press q to evacuate.";
    cout << "\n\nArtillery Ammo: Your supplies are limited, but the enemies are not. Learn some tactics in saving ammo so you can be a more efficient bomber.";
    cout << "\n\nScore: This is the tally of your score for the current gaming session. Try to score up high and beat your friends.";
    getch();
    system("cls");
    cout << "Artillery\n\n";
    cout << "Additional Tips:";
    cout << "\n\n* If you managed to deal 3 consequent enemy hits, you'll be rewarded with 8 additional ammo";
    cout << "\n\n* If you managed to clear a whole sector, you'll be rewarded with 30 additional ammo and 1 evacuation token";
    getch();
    goto Mainmenu;
    break;
    }

    getch();

    pinakauna:

    system("Color 0F"), system("cls");

    game = 1;

    you[0] = you[1] = 1;

    float alrt = 3.0;
    float life = 300;


    srand(time(0));

    for(ctr[0] = 0; ctr[0] < 15; ctr[0]++){
                for(ctr[1] = 0; ctr[1] < 15; ctr[1]++){
                    enemy[ctr[0]][ctr[1]] = 0; } } //ENEMY SETTER

                        //              BOAT PRODUCTION PHASE

    //Setting the small boats
    /*for(ctr[0] = 0; ctr[0] < 2; ctr[0]++){
        point1boat:
        ctr[2] = (rand() % 13 + 1);
        ctr[3] = (rand() % 13 + 1);
        if(enemy[ctr[2]][ctr[3]] == 0) enemy[ctr[2]][ctr[3]] = 1;
        else goto point1boat;
    }
    */

    //Setting the three length boats
    for(ctr[0] = 0; ctr[0] < 4; ctr[0]++){

        ctr[4] = (rand() % 2);
        if(ctr[4] == 0) // Vertical
        {
            point2aboat:
            ctr[2] = (rand() % 11 + 1);
            ctr[3] = (rand() % 13 + 1);
            if((enemy[ctr[2]][ctr[3]] == 0) && (enemy[(ctr[2] + 1)][(ctr[3])] == 0) && (enemy[(ctr[2] + 2)][ctr[3]] == 0))
            {
                for(ctr[1] = 0; ctr[1] < 5; ctr[1]++){
                    for(ctr[5] = 0; ctr[5] < 3; ctr[5]++){
                        enemy[(ctr[2] + ctr[1] - 1)][(ctr[3] + ctr[5] - 1)] = 9;}}

                enemy[ctr[2]][ctr[3]] = 1;
                enemy[(ctr[2] + 1)][(ctr[3])] = 1;
                enemy[(ctr[2] + 2)][(ctr[3])] = 1;
            }
            else goto point2aboat;

        }
        else
        {
            point2bboat:
            ctr[2] = (rand() % 13 + 1);
            ctr[3] = (rand() % 11 + 1);
            if((enemy[ctr[2]][ctr[3]] == 0) && (enemy[(ctr[2])][(ctr[3] + 1)] == 0) && (enemy[(ctr[2])][(ctr[3] + 2)] == 0))
            {
                for(ctr[1] = 0; ctr[1] < 3; ctr[1]++){
                    for(ctr[5] = 0; ctr[5] < 5; ctr[5]++){
                        enemy[(ctr[2] + ctr[1] - 1)][(ctr[3] + ctr[5] - 1)] = 9;}}

                enemy[ctr[2]][ctr[3]] = 1;
                enemy[(ctr[2])][(ctr[3] + 1)] = 1;
                enemy[(ctr[2])][(ctr[3] + 2)] = 1;
            }
            else goto point2bboat;
        }


    }

    //Setting the five length boats
    for(ctr[0] = 0; ctr[0] < 2; ctr[0]++){

        ctr[4] = (rand() % 2);
        if(ctr[4] == 0) // Vertical
        {
            point3aboat:
            ctr[2] = (rand() % 9 + 1);
            ctr[3] = (rand() % 13 + 1);
            if((enemy[ctr[2]][ctr[3]] == 0) && (enemy[(ctr[2] + 1)][(ctr[3])] == 0) && (enemy[(ctr[2] + 2)][ctr[3]] == 0) && (enemy[(ctr[2] + 3)][ctr[3]] == 0) && (enemy[(ctr[2] + 4)][ctr[3]] == 0))
            {
                for(ctr[1] = 0; ctr[1] < 7; ctr[1]++){
                    for(ctr[5] = 0; ctr[5] < 3; ctr[5]++){
                        enemy[(ctr[2] + ctr[1] - 1)][(ctr[3] + ctr[5] - 1)] = 9;}}

                enemy[ctr[2]][ctr[3]] = 1;
                enemy[(ctr[2] + 1)][(ctr[3])] = 1;
                enemy[(ctr[2] + 2)][(ctr[3])] = 1;
                enemy[(ctr[2] + 3)][(ctr[3])] = 1;
                enemy[(ctr[2] + 4)][(ctr[3])] = 1;
            }
            else goto point3aboat;

        }
        else
        {
            point3bboat:
            ctr[2] = (rand() % 13 + 1);
            ctr[3] = (rand() % 9 + 1);
            if((enemy[ctr[2]][ctr[3]] == 0) && (enemy[(ctr[2])][(ctr[3] + 1)] == 0) && (enemy[(ctr[2])][(ctr[3] + 2)] == 0) && (enemy[(ctr[2])][(ctr[3] + 3)] == 0) && (enemy[(ctr[2])][(ctr[3] + 4)] == 0))
            {
                for(ctr[1] = 0; ctr[1] < 3; ctr[1]++){
                    for(ctr[5] = 0; ctr[5] < 7; ctr[5]++){
                        enemy[(ctr[2] + ctr[1] - 1)][(ctr[3] + ctr[5] - 1)] = 9;}}

                enemy[ctr[2]][ctr[3]] = 1;
                enemy[(ctr[2])][(ctr[3] + 1)] = 1;
                enemy[(ctr[2])][(ctr[3] + 2)] = 1;
                enemy[(ctr[2])][(ctr[3] + 3)] = 1;
                enemy[(ctr[2])][(ctr[3] + 4)] = 1;
            }
            else goto point3bboat;
        }
    }


    //Setting the square bases
    for(ctr[0] = 0; ctr[0] < 2; ctr[0]++){

        point4boat:
        ctr[2] = (rand() % 12 + 1);
        ctr[3] = (rand() % 12 + 1);
        if((enemy[ctr[2]][ctr[3]] == 0) && (enemy[(ctr[2] + 1)][(ctr[3] + 1)] == 0) && (enemy[(ctr[2] + 1)][ctr[3]] == 0) && (enemy[(ctr[2])][(ctr[3] + 1)] == 0))
        {
            for(ctr[1] = 0; ctr[1] < 4; ctr[1]++){
                    for(ctr[5] = 0; ctr[5] < 4; ctr[5]++){
                        enemy[(ctr[2] + ctr[1] - 1)][(ctr[3] + ctr[5] - 1)] = 9;}}
            enemy[ctr[2]][ctr[3]] = 1;
            enemy[(ctr[2] + 1)][(ctr[3])] = 1;
            enemy[(ctr[2])][(ctr[3]+1)] = 1;
            enemy[(ctr[2] + 1)][(ctr[3] + 1)] = 1;
        }
        else goto point4boat;}


                            //                      PRINT LOOPER + CONTROL


    while(game == 1){
        system("cls");
        for(ctr[0] = 0; ctr[0] < 15; ctr[0]++){
                for(ctr[1] = 0; ctr[1] < 15; ctr[1]++){
                    if((ctr[0] == 0)||(ctr[0] == 14)||(ctr[1] == 0)||(ctr[1] == 14)){table[ctr[0]][ctr[1]] = '\'';}
                    else table[ctr[0]][ctr[1]] = ' '; }} //DEFAULT ASSIGNER

        table[you[0]][you[1]] = '+';


        for(ctr[0] = 0; ctr[0] < 15; ctr[0]++){
                for(ctr[1] = 0; ctr[1] < 15; ctr[1]++){
                    if (enemy[ctr[0]][ctr[1]] == 8) cout << '#' << ' ';
                    else if (table[ctr[0]][ctr[1]] == '+') cout << '+' << ' ';
                    //else if (enemy[ctr[0]][ctr[1]] == 7) cout << '.' << ' ';
                    //else if (enemy[ctr[0]][ctr[1]] == 1) cout << 'X' << ' ';
                    else cout << table[ctr[0]][ctr[1]] << ' ';
                    }

                if (ctr[0] == 0)
                {
                    cout << "Artillery";
                }
                if(ctr[0] == 2)
                {
                    if (life > (0.8*300)){cout << "Detection: Low";}
                    else if (life > (0.6*300)){cout << "Detection: Medium";}
                    else if (life > (0.4*300)){cout << "Detection: High";}
                    else if (life > (0.2*300)){cout << "Detection: ALERT!";}
                    else cout << "PRESS Q TO EVACUATE OR WE WILL BE BOMBED!";
                }
                if (ctr[0] == 3)
                {
                    if (alrt > (3 * 0.8)){cout << "Sector Damage: None";}
                    else if (alrt > (3 * 0.6)){cout << "Sector Damage: Low";}
                    else if (alrt > (3 * 0.4)){cout << "Sector Damage: Medium";}
                    else if (alrt > (3 * 0.2)){cout << "Sector Damage: High";}
                    else cout << "Sector Damage: Very High";
                }
                if (ctr[0] == 6)
                {
                    if(shells > 10){cout << "Remaining Ammo: " << shells;}
                    else{cout<<"WE ARE LOW IN AMMO SIR!!!";}

                    if(wawaw[0] == 1){cout << "( + 8 )", wawaw[0] = 0;}
                }
                if (ctr[0] == 7)
                {
                    if(evac != 0){cout << "Remaining Evacuation: " << evac;}
                    else cout<<"We cannot evacuate sir!";
                }

                if (ctr[0] == 9)
                {
                    cout << "Score: " << score;
                }

                cout << endl;} //PRINTER

        if(life>(300* 0.2)){system("Color 0F");}
        else system("Color 04");
        inp = getch();

        switch (inp){
            case 'w':
                if (you[0] > 1) you[0]--;
                break;
            case 's':
                if (you[0] < 13) you[0]++;
                break;
            case 'a':
                if (you[1] > 1) you[1]--;
                break;
            case 'd':
                if (you[1] < 13) you[1]++;
                break;
            case 'q':
                if (evac != 0)
                {game = 3;
                evac -= 1;}
                break;
            /*case 'p':
                goto pinakauna;
                break;*/
            default:
                system("Color 06");
                if ((enemy[you[0]][you[1]]) == 1) enemy[you[0]][you[1]] = 8, life += alrt ,alrt -= 0.1, score += 10, combo++;
                else if ((enemy[you[0]][you[1]]) == 8){}
                else enemy[you[0]][you[1]] = 7, combo = 0;;
                shells -= 1;
                break;}

        life -= alrt;
        if(combo%4 == 3){shells += 8, combo = 0, wawaw[0] = 1;}


        if (alrt <= 0.1) { game = 0; }
        else if(life <= 0){ game = 2; }
        else if(shells <= 0) {game = 4;}

        }

    system("Color 0F");
    if(game == 2){system("cls"), system("Color 04") ,cout << "We were detected.\n \n", system("pause");
        for(ctr[0]=0;ctr[0] < 5000; ctr[0]++){cout<<"WEWEREBOMBEDSIR!!!!";};}
    if(game == 0){system("cls") ,cout << "You destroyed the sector.\nGood Job Captain!\nMoving to next sector\n\n\n", evac+= 1, shells += 50,  system("pause");
        goto pinakauna;}
    if(game == 3){system("cls") ,cout << "We evacuated sir!\nMoving to next sector\n\n\n" , system("pause");
        goto pinakauna;}
    if(game == 4){system("cls") ,cout << "We have no ammo sir.\nWe have to retreat\n\n", cin >> inp;}


    system("cls");
    system("Color 0F");
    cout << "Artillery\nScore: " << score << "\n\n\n";
    cin >> inp;
    system("cls");

    if(inp == 'r'){goto restart;}



    return 0;
}

