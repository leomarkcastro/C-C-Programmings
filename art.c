#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

    int game = 1;
    int yx, yy, ys;
    int a,b;
    int zone2[10];
    int zone;
    char inp;

    yx = yy = ys = 0;

    system("COLOR 04");



    char map002[37][81] = {
"+--------------------------------------------------------------------------+",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                  |                                                       |",
"|          N Y C T ||                                                      |",
"|               P H|| B I A                                                |",
"|                  ||                                                      |",
"|                   |                                                      |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"+--------------------------------------------------------------------------+",
    };

        system("cls");



        for(a=0; a < 37; a++){
            for(b=0; b < 81; b++) {
                printf("%c", map002[a][b]);}
            printf("\n");}

        getch();

        system("COLOR 07");
        system("COLOR 04");
        system("COLOR 07");
        system("COLOR 40");
        system("COLOR 07");
        system("COLOR 40");
        system("COLOR 04");

        while(game == 1){

            char map001[37][81] = {
"+--------------------------------------------------------------------------+",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                   .. .                                   |",
"|                        ....              .    .    .                     |",
"|                       ....                      ..                       |",
"|                    .                                  ....               |",
"|                                    ..,,*.                                |",
"|                       ..      .*/(##((&&%(,                ..            |",
"|                   ...,...                                                |",
"|        .  .*      .,,,,,,  .,,,,,.                                       |",
"|         ...,.  ...,,,*/*,  .........     .                               |",
"|            ...,,,,,*///(,.  ..... .  .                                   |",
"|              .,***((/**//*,    .,....            ..                      |",
"|                 ...//#///(*,.  .*,.,,.   .      ...,                     |",
"|                     ..,*#%(****.            ..,**,,..                    |",
"|                           ,**%&%(/(((/*,,**///(((/////*,.                |",
"|                                ,(///%#%%%&&%%%#(***,,,.                  |",
"|                                      .....,.*...,,..                     |",
"|                               .                     .                    |",
"|                                                                          |",
"|                  |                                                       |",
"|          N Y C T ||                                                      |",
"|              P H || B I A                                                |",
"|                  ||                                                      |",
"|                  ||                                                      |",
"|                   |                                                      |",
"|                                                                          |",
"|                                                                          |",
"|                                                                          |",
"|                                                         sTArt            |",
"|                                                         LoAd             |",
"|                                                         dIaRY            |",
"|                                                                          |",
"|  VAGUVIX 2018                                                            |",
"+--------------------------------------------------------------------------+",
    };

        system("cls");

        if(ys == 0){yx = 31; yy = 55; }
        else if(ys == 1){yx = 32; yy = 55; }
        else if(ys == 2){yx = 33; yy = 55; }

        map001[yx][yy] = 'X';


        for(a=0; a < 37; a++){
            for(b=0; b < 81; b++) {
                printf("%c", map001[a][b]);}
            printf("\n");}

                inp = getch();

        switch (inp)
        {
        case 'w':
            if(ys > 0){ ys--; }
            break;
        case 's':
            if(ys < 2){ ys++; }
            break;
        case 'p':
            goto select;
            break;}

        }

    select:

    switch (ys)
    {
    case 0:
        system("COLOR 07");
        system("COLOR 04");
        system("COLOR 07");
        system("COLOR 40");
        system("COLOR 07");
        system("COLOR 40");
        system("COLOR 04");
        system("cls");
        printf("You could not do this.");
        getch();
        system("cls");
        break;
    case 1:
        system("COLOR 07");
        system("COLOR 04");
        system("COLOR 07");
        system("COLOR 40");
        system("COLOR 07");
        system("COLOR 40");
        system("COLOR 04");
        system("cls");
        printf("Loading letters");
        getch();
        system("cls");
        break;
    case 2:
        system("COLOR 07");
        system("COLOR 04");
        system("COLOR 07");
        system("COLOR 40");
        system("COLOR 07");
        system("COLOR 40");
        system("COLOR 04");
        system("cls");
        printf("This is the book containing your memories");
        getch();
        system("cls");
        break;}


    getch();
    return;
}
