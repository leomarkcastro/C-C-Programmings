#include <stdio.h>
#include <conio.h>
#include <math.h>

            /*

            Tic tac toe logic

            The AI type I used here is a "circumstance consideral" mind where each step toook by you or the computer has
            its signifcance value that the AI will consider. Of course, this kind of method is very vague and might lead to both
            expected and unexpected bugs which I patched on its own right.

            I dont know if this will work perfect, but at the writing of this, I believe that this has a success rate of 98%.

            */


int main(){

    /*

    This is where the variables where declared

    */
    system("COLOR 07");
    system("cls");
    int grid[3][3];
    float ai[3][3];
    int ctr[3];
    int inp;
    int game = 2;
    float ai2[8];
    int swt[2];
    int ctr2;
    int cor, bug[5][2];
    int tries;

    tries = 0;

    /*

    Title Screen

     */

    printf("Tic tac toe baby");
    printf("\n\n7 8 9\n4 5 6\n1 2 3\n");
    printf("\nThis is an Unbeatable Tic Tac Toe AI");
    printf("\nI hope it lives up its name");

    printf("\n\nYou is 1");
    printf("\nCPU is 2");

    getch();

    start:

    swt[0] = 0;
    ctr2 = 0;

    /*

    Loop setting all grid, ai and bug settings to null

    */

    for(ctr[0]=0;ctr[0]<3;ctr[0]++){
        for(ctr[1]=0;ctr[1]<3;ctr[1]++){
            grid[ctr[0]][ctr[1]] = ai[ctr[0]][ctr[1]] =  0;
            }}

    for(ctr[0]=0;ctr[0]<5;ctr[0]++){
        for(ctr[1]=0;ctr[1]<2;ctr[1]++){
            bug[ctr[0]][ctr[1]] = 0;
            }}

    /*

    The main loop of the game

    */

    while (game > 0){

            cor = 0;

            while(cor==0){

            system("cls");
            printf("Tic tac toe baby\n\n");

            /*

            Table printer

            */

            for(ctr[0]=0;ctr[0]<3;ctr[0]++){
                    for(ctr[1]=0;ctr[1]<3;ctr[1]++){
                        printf("%d ",grid[ctr[0]][ctr[1]]);
                        }
                        printf("\n");
                        }


            /*

            Status CHecker if someone wins

            */

            printf("\n\nTries: %d\nEnter number: ",tries);

            if(((grid[0][0] == 2) + (grid[0][1] == 2) + (grid[0][2] == 2)) == 3){tries += 1; getch(); system("cls"); printf("\n\nCPU WINS!"); getch(); goto start;}
            else if(((grid[1][0] == 2) + (grid[1][1] == 2) + (grid[1][2] == 2)) == 3){tries += 1; getch(); system("cls"); printf("\n\nCPU WINS!"); getch(); goto start;}
            else if(((grid[2][0] == 2) + (grid[2][1] == 2) + (grid[2][2] == 2)) == 3){tries += 1; getch(); system("cls"); printf("\n\nCPU WINS!"); getch(); goto start;}
            else if(((grid[0][0] == 2) + (grid[1][0] == 2) + (grid[2][0] == 2)) == 3){tries += 1; getch(); system("cls"); printf("\n\nCPU WINS!"); getch(); goto start;}
            else if(((grid[0][1] == 2) + (grid[1][1] == 2) + (grid[2][1] == 2)) == 3){tries += 1; getch(); system("cls"); printf("\n\nCPU WINS!"); getch(); goto start;}
            else if(((grid[0][2] == 2) + (grid[1][2] == 2) + (grid[2][2] == 2)) == 3){tries += 1; getch(); system("cls"); printf("\n\nCPU WINS!"); getch(); goto start;}
            else if(((grid[0][0] == 2) + (grid[1][1] == 2) + (grid[2][2] == 2)) == 3){tries += 1; getch(); system("cls"); printf("\n\nCPU WINS!"); getch(); goto start;}
            else if(((grid[2][0] == 2) + (grid[1][1] == 2) + (grid[0][2] == 2)) == 3){tries += 1; getch(); system("cls"); printf("\n\nCPU WINS!"); getch(); goto start;}
            else if((grid[0][0] == 0) + (grid[0][1] == 0) + (grid[0][2] == 0) + (grid[1][0] == 0) + (grid[1][1] == 0) + (grid[1][2] == 0) + (grid[2][0] == 0) + (grid[2][1] == 0) + (grid[2][2] == 0) == 0) {tries += 1; system("cls"); printf("\n\nDraw!"); getch(); goto start;}

            scanf("%d",&inp);

            /*

            Move switch

            */


            switch(inp){
            case  7:
                if(grid[0][0] == 0){
                        grid[0][0] = 1;
                        ai[0][0] = 1.11; cor = 1;
                }
                else{
                    printf("Incorrect move");
                    getch();
                }
                break;

            case  8:
                if(grid[0][1] == 0){
                        grid[0][1] += 1;
                        ai[0][1] += 1; cor = 1;
                }
                else{
                    printf("Incorrect move");
                    getch();
                }
                break;

            case  9:
                if(grid[0][2] == 0){
                        grid[0][2] += 1;
                        ai[0][2] += 1.11; cor = 1;
                }
                else{
                    printf("Incorrect move");
                    getch();
                }
                break;

            case  4:
                if(grid[1][0] == 0){
                        grid[1][0] += 1;
                        ai[1][0] += 1;
                        ai[0][0] += -0.01; cor = 1;
                }
                else{
                    printf("Incorrect move");
                    getch();
                }
                break;

            case  5:
                if(grid[1][1] == 0){
                        grid[1][1] += 1;
                        ai[1][1] += 1.2; cor = 1;
                }
                else{
                    printf("Incorrect move");
                    getch();
                }
                break;

            case  6:
                if(grid[1][2] == 0){
                        grid[1][2] += 1;
                        ai[1][2] += 1;
                        ai[0][2] += -0.01; cor = 1;
                }
                else{
                    printf("Incorrect move");
                    getch();
                }
                break;

            case  1:
                if(grid[2][0] == 0){
                        grid[2][0] += 1;
                        ai[2][0] += 1.11; cor = 1;
                }
                else{
                    printf("Incorrect move");
                    getch();
                }
                break;

            case  2:
                if(grid[2][1] == 0){
                        grid[2][1] += 1;
                        ai[2][1] += 1; cor = 1;
                }
                else{
                    printf("Incorrect move");
                    getch();
                }
                break;

            case  3:
                if(grid[2][2] == 0){
                        grid[2][2] += 1;
                        ai[2][2] += 1.11; cor = 1;
                }
                else{
                    printf("Incorrect move");
                    getch();
                }
                break;

            case 0:
                tries += 1;
                goto start;
                break;

            case 10:
                tries += 1;
                break;

            default:
                printf("Error\n");
                getch();
                break;
                }

            }

            /*

            AI web.

            This is where all circumstance sum where added

            */

            ai2[0] = ai[0][0] + ai[0][1] + ai[0][2];
            ai2[1] = ai[1][0] + ai[1][1] + ai[1][2];
            ai2[2] = ai[2][0] + ai[2][1] + ai[2][2];
            ai2[3] = ai[0][0] + ai[1][1] + ai[2][2];
            ai2[4] = ai[2][0] + ai[1][1] + ai[0][2];
            ai2[5] = ai[0][0] + ai[1][0] + ai[2][0];
            ai2[6] = ai[0][1] + ai[1][1] + ai[2][1];
            ai2[7] = ai[0][2] + ai[1][2] + ai[2][2];

            /*

            Bug 1: I put this code to emphasize the significance of diagonal rows. This fixed the probelm

            */

            ai2[3] = (ai2[3] * 1.1);
            ai2[4] = (ai2[4] * 1.1);

            /*

            This is where all rows whose all cases where filled was nullified

            */

            if(((grid[0][0] != 0) && (grid[0][1] != 0)) && (grid[0][2] != 0)){ai2[0] = ai2[0] * 0;}
            if(((grid[1][0] != 0) && (grid[1][1] != 0)) && (grid[1][2] != 0)){ai2[1] = ai2[1] * 0;}
            if(((grid[2][0] != 0) && (grid[2][1] != 0)) && (grid[2][2] != 0)){ai2[2] = ai2[2] * 0;}
            if(((grid[0][0] != 0) && (grid[1][1] != 0)) && (grid[2][2] != 0)){ai2[3] = ai2[3] * 0;}
            if(((grid[2][0] != 0) && (grid[1][1] != 0)) && (grid[0][2] != 0)){ai2[4] = ai2[4] * 0;}
            if(((grid[0][0] != 0) && (grid[1][0] != 0)) && (grid[2][0] != 0)){ai2[5] = ai2[5] * 0;}
            if(((grid[0][1] != 0) && (grid[1][1] != 0)) && (grid[2][1] != 0)){ai2[6] = ai2[6] * 0;}
            if(((grid[0][2] != 0) && (grid[1][2] != 0)) && (grid[2][2] != 0)){ai2[7] = ai2[7] * 0;}

            /*

            Bug 2: At first, the AI focuses more on defending against player rather than building his own complete set.
            This code emphasizes the need of AI to complete his rows first rather than defending against player build up.

            */

            if(((grid[0][0] == 2)+(grid[0][1] == 2)+(grid[0][2] == 2)) == 2){ai2[0] = ai2[0] *= 2;}
            if(((grid[1][0] == 2)+(grid[1][1] == 2)+(grid[1][2] == 2)) == 2){ai2[1] = ai2[1] *= 2;}
            if(((grid[2][0] == 2)+(grid[2][1] == 2)+(grid[2][2] == 2)) == 2){ai2[2] = ai2[2] *= 2;}
            if(((grid[0][0] == 2)+(grid[1][1] == 2)+(grid[2][2] == 2)) == 2){ai2[3] = ai2[3] *= 2;}
            if(((grid[2][0] == 2)+(grid[1][1] == 2)+(grid[0][2] == 2)) == 2){ai2[4] = ai2[4] *= 2;}
            if(((grid[0][0] == 2)+(grid[1][0] == 2)+(grid[2][0] == 2)) == 2){ai2[5] = ai2[5] *= 2;}
            if(((grid[0][1] == 2)+(grid[1][1] == 2)+(grid[2][1] == 2)) == 2){ai2[6] = ai2[6] *= 2;}
            if(((grid[0][2] == 2)+(grid[1][2] == 2)+(grid[2][2] == 2)) == 2){ai2[7] = ai2[7] *= 2;}

            /*

            Bug 3: This code fixes the problem when you input 4 then 3 code (or 6 then 1). The problem is that the AI
            has problem picking on what case in that row to fill in. I partially fixed that through this.

            */

            if(((grid[1][0] == 1) && (grid[2][2] == 1) && (grid[0][2] == 0) && (bug[0][1] == 0))){bug[0][0] = 1;}
            if(((grid[1][2] == 1) && (grid[2][0] == 1) && (grid[0][0] == 0) && (bug[0][1] == 0))){bug[0][0] = 1;}

            /*

            Bug 4: This very long code is for a bug you will encounter when you input (1 then 9) or (7 then 3) or vice cersa. THis long fix can be
            confusing, but I followed a pattern to satisfy... yeah... I dont know how to describe the loguc

            */

            if((((grid[1][1] == 2) + (((grid[0][0] == 1) + (grid[0][2] == 1) != 2) && ((grid[2][0] == 1) + (grid[2][2] == 1) != 2) && ((grid[0][0] == 1) || (grid[0][2] == 1) || (grid[2][0] == 1) || (grid[2][2] == 1)) && ((grid[0][1] == 0) && (grid[1][0] == 0) && (grid[1][2] == 0) && (grid[2][1] == 0))) == 2) && (bug[1][1] == 0))){ai2[1] *= 2; bug[1][1] = 1;}

            if((grid[1][1] == 2) && ((grid[0][2] == 1)+ (grid[2][2] == 1) == 2) && (bug[2][0] == 0)){bug[2][0] = 1;}

            /*

            Input Place

            Case 0: I noticed that the tic tac toe that starts with either 5 or 9 easily wins. Just saw that on the internet, I saw that on the internet

            Case 1: AI, read the dedicated documentation
            */

            switch(swt[0]){
            case 0:
                swt[0] = 1;
                if(grid[1][1] == 1){
                    grid[0][2] = 2;
                    ai[0][2] = (-1.1);}
                else{
                    grid[1][1] = 2;
                    ai[1][1] = (-1.3);}
                break;

            /*

            Case 1: This is the main meat of the AI. The order of the considerations is very critical here.

            */

            case 1:
                /*for(ctr[0]=0;ctr[0]<8;ctr[0]++){
                    printf("\nNice%d: %f", (ctr[0]+1), fabs(ai2[ctr[0]]));}
                getch();

                */

                if( ((fabs(ai2[0]) > fabs(ai2[1])) && (fabs(ai2[0]) > fabs(ai2[2])) && (fabs(ai2[0]) > fabs(ai2[3]))&& (fabs(ai2[0]) > fabs(ai2[4])) && (fabs(ai2[0]) > fabs(ai2[5])) && (fabs(ai2[0]) >  fabs(ai2[6])) && (fabs(ai2[0]) > fabs(ai2[7])) )  && (grid[0][0] == 0 || grid[0][1] == 0|| grid[0][2] == 0) ){
                        //printf("\n\nNice1");
                        if (grid[0][0] == 0){ grid[0][0] = 2;  ai[0][0] += -1.1; }
                        else if (grid[0][1] == 0){ grid[0][1] = 2;  ai[0][1] += -1.1; }
                        else if (grid[0][2] == 0){ grid[0][2] = 2;  ai[0][2] += -1.1; }
                         }
                else if(((fabs(ai2[1]) > fabs(ai2[2])) && (fabs(ai2[1]) > fabs(ai2[3]))&& (fabs(ai2[1]) > fabs(ai2[4])) && (fabs(ai2[1]) > fabs(ai2[5])) && (fabs(ai2[1]) >  fabs(ai2[6])) && (fabs(ai2[1]) > fabs(ai2[7])) ) && (grid[1][0] == 0 || grid[1][1] == 0|| grid[1][2] == 0) ){
                        //printf("\n\nNice2");
                        if ((grid[1][0] == 0) && (bug[2][0] != 1) ){ grid[1][0] = 2;  ai[1][0] += -1.1; }
                        else if (grid[1][1] == 0){ grid[1][1] = 2;  ai[1][1] += -1.3; }
                        else if (grid[1][2] == 0){ grid[1][2] = 2;  ai[1][2] += -1.1; if(bug[2][0] != 1){bug[2][0] = 2;} }
                         }
                else if( ((fabs(ai2[2]) > fabs(ai2[3]))&& (fabs(ai2[2]) > fabs(ai2[4])) && (fabs(ai2[2]) > fabs(ai2[5])) && (fabs(ai2[2]) >  fabs(ai2[6])) && (fabs(ai2[2]) > fabs(ai2[7])) ) && (grid[2][0] == 0 || grid[2][1] == 0|| grid[2][2] == 0) ){
                        //printf("\n\nNice3");
                        if ((grid[2][0] == 0)){ grid[2][0] = 2;  ai[2][0] += -1.1;}
                        else if (grid[2][1] == 0){ grid[2][1] = 2;  ai[2][1] += -1.1; }
                        else if (grid[2][2] == 0){ grid[2][2] = 2;  ai[2][2] += -1.1; }
                         }
                else if( ((fabs(ai2[3]) > fabs(ai2[4])) && (fabs(ai2[3]) > fabs(ai2[5])) && (fabs(ai2[3]) >  fabs(ai2[6])) && (fabs(ai2[3]) > fabs(ai2[7])) ) && (grid[0][0] == 0 || grid[1][1] == 0|| grid[2][2] == 0) ){
                        //printf("\n\nNice4");
                        if ((grid[0][0] == 0) && ((bug[0][0] == 0) || (grid[2][2] == 2))){ grid[0][0] = 2;  ai[0][0] += -1.1; }
                        else if (grid[1][1] == 0){ grid[1][1] = 2;  ai[1][1] += -1.3; }
                        else if (grid[2][2] == 0){
                                grid[2][2] = 2;  ai[2][2] += -1.1;
                                if(bug[0][0] == 1){bug[0][0] = 0; bug[0][1] = 1;}
                        }
                         }
                 else if( ((fabs(ai2[4]) > fabs(ai2[5])) && (fabs(ai2[4]) >  fabs(ai2[6])) && (fabs(ai2[4]) > fabs(ai2[7])) ) && (grid[0][2] == 0 || grid[1][1] == 0|| grid[2][0] == 0) ){
                        //printf("\n\nNice5");
                        if ((grid[0][2] == 0) && (bug[0][0] == 0)){ grid[0][2] = 2;  ai[0][2] += -1.1; }
                        else if (grid[1][1] == 0){ grid[1][1] = 2;  ai[1][1] += -1.3; }
                        else if (grid[2][0] == 0){
                                grid[2][0] = 2;  ai[2][0] += -1.1;
                                if(bug[0][0] == 1){bug[0][0] = 0; bug[0][1] = 1;}
                        }
                         }
                 else if( ((fabs(ai2[5]) >  fabs(ai2[6])) && (fabs(ai2[5]) > fabs(ai2[7])) ) && (grid[0][0] == 0 || grid[1][0] == 0|| grid[2][0] == 0) ){
                        //printf("\n\nNice6");
                        if (grid[0][0] == 0){ grid[0][0] = 2;  ai[0][0] = -1.1; }
                        else if (grid[1][0] == 0){ grid[1][0] = 2;  ai[1][0] += -1.1; }
                        else if (grid[2][0] == 0){ grid[2][0] = 2;  ai[2][0] += -1.1; }
                         }
                 else if( ((fabs(ai2[6]) > fabs(ai2[7])) ) && (grid[0][1] == 0 || grid[1][1] == 0|| grid[2][1] == 0) ){
                        //printf("\n\nNice7");
                        if (grid[0][1] == 0){ grid[0][1] = 2;  ai[0][1] += -1.1; }
                        else if (grid[1][1] == 0){ grid[1][1] = 2;  ai[1][1] += -1.3; }
                        else if (grid[2][1] == 0){ grid[2][1] = 2;  ai[2][1] += -1.1; }
                         }
                else{
                        //printf("\n\nNice8");
                        if (grid[0][2] == 0){ grid[0][2] = 2;  ai[0][2] += -1.1; }
                        else if (grid[1][2] == 0){ grid[1][2] = 2;  ai[1][2] += -1.1; }
                        else if (grid[2][2] == 0){ grid[2][2] = 2;  ai[2][2] += -1.1; }
                         }

                break;
            }
    }
    getch();
    game += 1;
    return 0;
}
