#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    int yx, yy;
    int game = 1;
    int a,b;
    yy = 2;
    yx = 2;
    char inp;
    int text = 0;
    int light = 6;
    int y;

    system("COLOR 06");

    while(game == 1)
    {

    char map001[23][38] = {
    "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
    "O    O                      O        O",
    "O    O                      O    O   O",
    "O    O    OOOOOOOOOOOOOOO   O    O   O",
    "O    O    O                 O    O   O",
    "O    O    O      OOOOOOOOOOOO    O   O",
    "O         O      O              OO   O",
    "OOOOOOOOOOO      O              O    O",
    "O                O     OOOOOOOOO     O",
    "O               OO             O     O",
    "O   OOOOOOOOOOOOOOOOOOOOOO     O     O",
    "O   O                    O     O     O",
    "O   O                    O     O     O",
    "O   O     OOOOOOOOOOO    O     O     O",
    "O   O  O      O          O     O     O",
    "O   O  O      O          O     O     O",
    "O   OOOO      O          O     O     O",
    "O   O       OOO       OOOO     OO    O",
    "O   O     OO         OO         O    O",
    "O   O   OO          OO          O    O",
    "O       O                       O    O",
    "O       O                       O    O",
    "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    O",
    };

        system("cls");
        map001[yy][yx] = 'X';


        if(((rand()%3) == 2) || ((rand()%3) == 1)){
        for(a=0; a < 23; a++){
            for(b=0; b < 38; b++) {
                if( (b > (yx-light)) && ((yx+light) > b) && ((a > yy-light)) && ((yy+light) > a) ){ printf("%c ", map001[a][b]); }
                else{ printf(" ");

                }
                }
            printf("\n"); }}
        else
        {
        for(a=0; a < 23; a++){
            for(b=0; b < 38; b++) {
                printf(" ");
        }       printf("\n ");
        }}

        if(text > 1 && 7 > text){ printf("\n Leon: Fuck, the lights out"); }
        else if(text > 7 && 11 > text){ printf("\n Leon: I need to get the fuck out of here before this light dies on me"); }
        else if(text > 13 && 16 > text){ printf("\n Leon: Fucking flickering light"); }
        else if(text > 24 && 30 > text){ printf("\n Leon: It gets even fucking worse"); }
        else if(text > 50 && 56 > text){ printf("\n Leon: Why the fuck am I in this maze"); }
        else if(text > 78 && 84 > text){ printf("\n Leon: There is no going back, there is no going back."); }
        else if(text > 104 && 111 > text){ printf("\n Leon: The light is getting shorter"); }
        else if(text > 129 && 134 > text){ printf("\n Leon: Is somebody here!?"); }
        else if(text > 154 && 160 > text){ printf("\n Leon: HELP! I NEED HELP! FUCKING LIGHT"); }
        else if(text > 200 && 210 > text){ printf("\n Leon: I dont wanna die. I dont wanna die. I dont wanna die."); }
        else if(text > 239 && 1248 > text){ printf("\n Leon: Please God, be might light. I dont wanna die here"); }


        inp = getch();

        switch(inp)
        {
        case 'w':
            if (map001[yy-1][yx] != 'O' && map001[yy-1][yx] != '-' && map001[yy-1][yx] != '|')
            {
                yy -= 1;
            }
            break;
        case 's':
            if (map001[yy+1][yx] != 'O' && map001[yy+1][yx] != '-' && map001[yy+1][yx] != '|')
            {
                yy += 1;
            }
            break;
        case 'a':
            if (map001[yy][yx-1] != 'O' && map001[yy][yx-1] != '-' && map001[yy][yx-1] != '|')
            {
                yx -= 1;
            }
            break;
        case 'd':
            if (map001[yy][yx+1] != 'O' && map001[yy][yx+1] != '-' && map001[yy][yx+1] != '|')
            {
                yx += 1;
            }
            break;
        }


    if(yy > 23){ game = 0;}

    if(text%51 == 50){light -= 1;}
    if(light == 1){system("COLOR 04");}
    if(light == 0){game = -1;}

    text++;


    }

    int q;

    q = 0;


    while (game == -1)
    {
        while(q < 150){
        system("COLOR 04");
        printf("ṱ̡h̨̙͓e̝͉͈ ̪̱͓̦̭̩dͅa̬͕ͅr͔͍͕̖̳k̫̗̖̖̭n̮̯͖̟͉e͏̣̘s̤̜̩͜s҉̙̼͕̪̹̩ ͎̰̕d̟͕̙ͅi͈̩̼̖̫d̤͔͈͟ͅ ͉͍͜n͓͎̹̖̜̳͠ơ̤̰̹̥͚̠̻t̪̦̗͙ ̜̣̦̖̗̞ki̠̠͘l͍̯̺̥͚̻̖l̵͇͕͕ ̰̘̝̠y̠̖̞͢o̙͉͇ͅͅú̫̣̝͍̭,҉̝ ̀y͈͓̥o̟u ͝k̜̱͉̜̞͔i͈̝̺̯͟l̩l҉̝̘e̤͉̜̜͘d̗̬̯ ̠̲̳y̞͚̙̝̘ͅo͍ur̗͎͇̲̥͜s̡̼͕̬̮e̦̹͍͜lf͜,̛ y̡̫͈̟͈͓͓͔ou̶̙ ̭̜͓͡d̗̬͝e͚͖ś͉̻̖͙̞̳̫e̮̺͚ͅr̟̻v̵̯̦̮e͖̜͜ ̠͍̲̲̱͉̲i̫̤͖̪̪͖͙t̰,̝͖͖̰̙͈̭̕ ͈̻̘̥͕j͎̘̣̰̼̰̠u̦̬̭̦̰͈̹s͍͍͇͟t̖͕̭̠ ̣̖̙̺̞̘͢ḍ̙į̲͇̜ḛ̖̦̜̞");
        q = 0;
        }

        while(q < 1244){
        system("COLOR 40");
        printf("ṱ̡h̨̙͓e̝͉͈ ̪̱͓̦̭̩dͅa̬͕ͅr͔͍͕̖̳k̫̗̖̖̭n̮̯͖̟͉e͏̣̘s̤̜̩͜s҉̙̼͕̪̹̩ ͎̰̕d̟͕̙ͅi͈̩̼̖̫d̤͔͈͟ͅ ͉͍͜n͓͎̹̖̜̳͠ơ̤̰̹̥͚̠̻t̪̦̗͙ ̜̣̦̖̗̞ki̠̠͘l͍̯̺̥͚̻̖l̵͇͕͕ ̰̘̝̠y̠̖̞͢o̙͉͇ͅͅú̫̣̝͍̭,҉̝ ̀y͈͓̥o̟u ͝k̜̱͉̜̞͔i͈̝̺̯͟l̩l҉̝̘e̤͉̜̜͘d̗̬̯ ̠̲̳y̞͚̙̝̘ͅo͍ur̗͎͇̲̥͜s̡̼͕̬̮e̦̹͍͜lf͜,̛ y̡̫͈̟͈͓͓͔ou̶̙ ̭̜͓͡d̗̬͝e͚͖ś͉̻̖͙̞̳̫e̮̺͚ͅr̟̻v̵̯̦̮e͖̜͜ ̠͍̲̲̱͉̲i̫̤͖̪̪͖͙t̰,̝͖͖̰̙͈̭̕ ͈̻̘̥͕j͎̘̣̰̼̰̠u̦̬̭̦̰͈̹s͍͍͇͟t̖͕̭̠ ̣̖̙̺̞̘͢ḍ̙į̲͇̜ḛ̖̦̜̞");
        q = 0;
        }
        //printf("the darkness did not kill you, you killed yourself, you deserve it, just die ");
    }


    system("cls");
    system("COLOR 70");
    printf("You exitted the hall");
    getchar();
    return 0;
}
