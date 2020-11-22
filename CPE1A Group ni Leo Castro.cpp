#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <iomanip>

using namespace std;

COORD coord={0,0};

void gotoxy(int x,int y){
 coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void color(int x){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}

void intro();
void questions();
void results();
void clean();

int like = 1;
int grade[20];
int griddles[5] = {0, 0, 0, 0, 0};
int pointing[2][5] = {{5,4,3,2,1},{1,2,3,4,5}};
int typoint[20] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};

void intro(){
    system("Color 0F");
    Sleep(1000);
    string title = "BIG FIVE";
    color(6);
    for(int i = 0; i < 8; i++){
        gotoxy(i,1);
        cout << title[i];
        Sleep(100);
    }
    Sleep(200);

    color(10);
    for(int i = 0; i < 6; i++){
        gotoxy(9,1);
        cout << ((i % 2 == 1) ? "PERSONALITY TEST" : "                ");
        if(i == 5){system("Color F0");}
        Sleep(250);
    }
    Sleep(200);

    cout << "\n\nThis self-report test measures the big five personality traits using the IPIP Big-Five Factor Markers.";

    Sleep(200);

    color(241);

    for(int i = 0; i < 11; i++){
        gotoxy(0,5+i);
        cout << "|";
        Sleep(50);
    }

    string info[5] = {
        "Oppeness - This trait features characteristics such as imagination and insight.",
        "Conscientiousness - Your level of thoughtfulness, good impulse control, and goal-directed behaviors.",
        "Extraversion - Your excitability, sociability, talkativeness, assertiveness, and  of emotional openness.",
        "Neuroticness - Neuroticism is a trait characterized by sadness, moodiness, and emotional instability.",
        "Agreeableness - This traits of trust, altruism, kindness, affection, and other prosocial behaviors."
    };

    for(int i = 0; i < 5; i++){
        color(242+i);
        gotoxy(2,6+(i*2));
        cout << info[i];
        Sleep(500);

    }

    color(240);
    gotoxy(0, 17); cout << "This test will give you descriptions that may or may not describe you.\nTell if the said trait accurately describes you: Pick 5 if very accurate or 1 if very innacurate.\n\nPress any key to proceed";
    getch();
}

void questions(){
    system("cls");
    gotoxy(1,1);
    cout << "BIG FIVE PERSONALITY TEST";

    for(int i = 0; i < 11; i++){
        gotoxy(0,5+i);
        cout << "|";}

    Sleep(500);

    for(int i = 0; i < 20; i++){
        gotoxy(1+i,3);cout << "- ";
        Sleep(25);
    }

    system("Color B0");

    for(int i = 0; i < 20; i++) grade[i] = 0;

    string questions[20] = {
        "I am the life of the party ",
        "I don't feel very concerned for others ",
        "I am always prepared ",
        "I get stressed out easily ",
        "I have a rich vocabulary ",
        "I don't talk a lot ",
        "I am interested in people ",
        "I leave my belongings around ",
        "I am relaxed most of the time ",
        "I have difficulty understanding abstract ideas ",
        "I feel comfortable around people ",
        "I insult people ",
        "I pay attention to details ",
        "I worry about things ",
        "I have a vivid imagination ",
        "I keep in the background ",
        "I sympathize with others' feelings ",
        "I make a mess of things ",
        "I seldom feel blue ",
        "I am not interested in abstract ideas "};

    int dummyans = 0;
    int anschk = 1;

    for(int i = 0; i < 20; i++){
        color(181);
        gotoxy(2,6); cout << "Question No. " << (i+1);
        color(180);
        gotoxy(3,8); cout << questions[i];

        for(int j = 0; j < 5; j++){
            color(176);
            gotoxy((3+(2*j)),10); cout << (j+1);}

        while(anschk){
        for(int j = 0; j < 5; j++){
            color(177);
            gotoxy((3+(2*j)),11); cout << ((grade[i] == j+1) ? '^' : ' ');
            gotoxy(3,14); cout << "                                          " ;
            gotoxy(3,14); cout << ((grade[i] == 5) ? "Very Accurate" : ((grade[i] == 4) ? "Accurate" : ((grade[i] == 3) ? "Slightly Accurate" : ((grade[i] == 2) ? "Innacurate" : ((grade[i] == 1) ? "Very Innacurate" : "Press the number that describes the trait.")))));
        }
        dummyans = getch();

        switch(dummyans){
            case '1': grade[i] = 1; break;
            case '2': grade[i] = 2; break;
            case '3': grade[i] = 3; break;
            case '4': grade[i] = 4; break;
            case '5': grade[i] = 5; break;
            case '\r': if(grade[i] != 0)anschk = 0; break;}

        }

        gotoxy(1+i,3);cout << "=";
        anschk = 1;
        gotoxy(3,8); cout << "                                              ";
    }

    for(int i = 0; i < 5; i++) griddles[i] = 0;

    for(int i = 0; i < 20; i++){griddles[i%5] += pointing[typoint[i]][(grade[i] - 1)];}

}

void results(){

    char uput;
    system("Color E0");

    system("cls");
    gotoxy(1,1);
    cout << "BIG FIVE PERSONALITY TEST RESULTS";

    color(226);gotoxy(3,3); cout << "Extraversion: ";
    color(224);gotoxy(17,4); cout << "[";
    for(int i = 0; i < griddles[0]; i++){
    color(226);gotoxy(27,3); cout << "  "; cout << i;
    gotoxy(18+i,4); cout << "-";
    color(224);gotoxy(38,4); cout << "]";
    Sleep(50);}

    color(227);gotoxy(3,5); cout << "Agreeableness: ";
    color(224);gotoxy(17,6); cout << "[";
    for(int i = 0; i < griddles[1]; i++){
    color(227);gotoxy(27,5); cout << "  "; cout << i;
    gotoxy(18+i,6); cout << "-";
    color(224);gotoxy(38,6); cout << "]";
    Sleep(50);}

    color(228);gotoxy(3,7); cout << "Conscientiousness: ";
    color(224);gotoxy(17,8); cout << "[";
    for(int i = 0; i < griddles[2]; i++){
    color(228);gotoxy(27,7); cout << "  "; cout << i;
    gotoxy(18+i,8); cout << "-";
    color(224);gotoxy(38,8); cout << "]";
    Sleep(50);}

    color(229);gotoxy(3,9); cout << "Emotional Stability: ";
    color(224);gotoxy(17,10); cout << "[";
    for(int i = 0; i < griddles[3]; i++){
    color(229);gotoxy(27,9); cout << "  "; cout << i;
    gotoxy(18+i,10); cout << "-";
    color(224);gotoxy(38,10); cout << "]";
    Sleep(50);}

    color(230);gotoxy(3,11); cout << "Openness: ";
    color(224);gotoxy(17,12); cout << "[";
    for(int i = 0; i < griddles[4]; i++){
    color(230);gotoxy(27,11); cout << "  "; cout << i;
    gotoxy(18+i,12); cout << "-";
    color(224);gotoxy(38,12); cout << "]";
    Sleep(50);}

    color(224);gotoxy(3,15); cout << "Press the number that corresponds to the trait to view a more in depth explanation of result";

    int checking = 1;

    bey:

    while(checking){

    uput = getch();

    ey:

    gotoxy(1,3); cout << " ";
    gotoxy(1,5); cout << " ";
    gotoxy(1,7); cout << " ";
    gotoxy(1,9); cout << " ";
    gotoxy(1,11); cout << " ";
    gotoxy(1,15); cout << "                                                                                                                   ";
    gotoxy(3,17); cout << "                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ";

    switch(uput){
        case '1':
            gotoxy(1,3); cout << ">";
            color(226);gotoxy(3,15); cout << "Viewing: -Extroversion- Analysis";
            color(224);gotoxy(3,17); cout << (griddles[0] > 14 ? "You are an extravert. You get your energy by interacting with others, and spending too much time alone seems draining to you. Others often describe you as friendly and energetic. You are constantly seeking out ways to be around people, whether it’s at work or at a party. You really don’t mind being the center of attention, and your friends love being around you because you are the life of the party!" : (griddles[0] > 7 ? "You have a medium level of extraversion. This means that at times, you get your energy from being around others; but at other times, you get your energy by being alone. Life is all about balance, and for you, it’s important to spend time alone and with others. You don’t mind being the center of attention at times, but you don’t seek out ways to be the center of attention either." : "You are an introvert. While you enjoy spending time with others, you truly get your energy by spending time by yourself. Spending too much time around others leaves you feeling tired and drained. Others describe you as thoughtful and quiet. Being the center of attention usually makes you feel uncomfortable.\n\nYou may not be a social butterfly, but you do an amazing job building relationships with others. You find that you typically have a few friends whom you are very close with, rather than many acquaintances. The relationships you have with others are usually very long-lasting."));
            break;

        case '2':
            gotoxy(1,5); cout << ">";
            color(227);gotoxy(3,15); cout << "Viewing: -Agreeableness- Analysis";
            color(224);gotoxy(3,17); cout << (griddles[1] > 14 ? "You scored high in agreeableness. You are very considerate of others, and typically try to avoid conflict. Other usually describe you as friendly, altruistic, generous, and helpful.\n\nBeing high in agreeableness gives you the ability to find room for compromise in nearly every situation. You are always willing to listen to others’ opinions and ideas, even when you think they are wrong. This can sometimes be problematic in decision-making situations – your agreeable personality sometimes prevents you from speaking up when someone else is very opinionated, and you may end up going along with their ideas, even when you disagree." : (griddles[1] > 7 ? "You scored medium in agreeableness. Others often describe you as friendly and helpful. You typically try to avoid conflict, but when a situation arises, you aren’t afraid to speak up. In group situations, you are able to find a comfortable balance between keeping everyone happy, but also speaking up and making the right decision." : "You scored low on agreeableness. Others describe you as outspoken and bold. You don’t usually go out of your way to help others, but are willing to help close family and friends when needed. Life has taught you that you need to watch out for yourself and your family before you go out of your way to help others. Because of this, it takes you quite a while to trust others."));
            break;

        case '3':
            gotoxy(1,7); cout << ">";
            color(228);gotoxy(3,15); cout << "Viewing: -Conscientiousness- Analysis";
            color(224);gotoxy(3,17); cout << (griddles[2] > 14 ? "You are highly conscientious. You are very organized, reliable, efficient, and hard-working. You are able to set a good balance between work and fun, and you save your fun for after your work is completed.\n\nIn your home, you keep things clean and organized as well. People who are sloppy and leave messes really bother you, and your natural inclination is to clean up a mess when you see one." : (griddles[2] > 7 ? "You scored medium on conscientiousness. At times, you are very driven and hard-working, but that doesn’t mean you don’t like to have fun! You are always able to set a comfortable balance between work and fun.\n\nYour home isn’t spotless, but it is clean and organized. You don’t mind leaving a mess behind when you are in a hurry, but you make sure to clean it up later." : "You scored low on conscientiousness. You are typically laid-back and relaxed, and tend not to get too worked up about things. You truly like to enjoy life.\n\nYou can be a procrastinator, and you sometimes tend to put off your responsibilities until the last minute. If something fun comes up, it doesn’t bother you to put your responsibilities off until the next day."));
            break;

        case '4':
            gotoxy(1,9); cout << ">";
            color(229);gotoxy(3,15); cout << "Viewing: -Emotional Stability- Analysis";
            color(224);gotoxy(3,17); cout << (griddles[3] > 14 ? "You scored high in Emotional Stability. While others may experience emotions of extreme highs and extreme lows, you tend to stay somewhere in the middle. Others often describe you as calm, level-headed, and optimistic. Because of your tendency to tend to “go with the flow” in life, you have a hard time understanding people who are extremely emotional or anxious. Those who score low in neuroticism have a difficult time understanding and spending time with people who are highly neurotic. You typically prefer spending time with people who are relaxed, like yourself." : (griddles[3] > 7 ? "You are moderately neurotic – at times, you can be anxious or emotional, while at other times, you are relaxed and calm. Your mood may fluctuate slightly, depending on the day.\n\nYou describe yourself as a realist. You don’t tend to be overly optimistic or overly pessimistic, and are able to view problems clearly and realistically, considering many factors." : "You scored high in neuroticism. Others may describe you as emotionally reactive – emotionally, you experience extreme highs and extreme lows.\n\nYou also can be very anxious at times, and others may describe you as somewhat pessimistic. You tend to worry about how you are perceived by others. Your thoughts often keep you awake at night."));
            break;

        case '5':
            gotoxy(1,11); cout << ">";
            color(230);gotoxy(3,15); cout << "Viewing: -Openness- Analysis";
            color(224);gotoxy(3,17); cout << (griddles[4] > 14 ? "You have a high level of openness to experience. You are very creative, curious, and adventurous. You are always willing to try something new. You are also very imaginative, and are more interested in ideas rather than practicality.\n\nYou hate being in a routine – you are constantly looking to experience new things. If things get too repetitive, you feel like you are in a slump, and need to make a change." : (griddles[4] > 7 ? "You have a medium level of openness to experience. At times, you can be very creative, curious, and adventurous. At other times, you prefer routine. You are able to find a great balance between ideas and practicality.\n\nYou typically are a good problem-solver. When you are faced with a problem, you consider the tried-and true methods, but are also able to think outside the box. You are able to handle whatever life throws at you." : "You are low in openness to experience. People who are low in openness to experience are typically very dedicated to any work they do, and always make sure to see their tasks through to the end. You are not very artistic or imaginative, and do not see the value in unnecessary things like art and music.\n\nYou are very analytical, and are able to think quickly to solve any problem you are faced with. Your first instinct is to use tried-and-true methods when solving problems."));
            break;

        default:
            color(228);gotoxy(3,15); cout << "Do you want to try again? [Y]/[N]";
            int running2 = 1;
            while(running2){
            uput = getch();

            if((uput == 'N')||(uput == 'n')) {checking = 0, like = 0, running2 = 0, system("cls"); goto bey;}
            else if ((uput == 'Y')||(uput == 'y')) {clean(), checking = 0, running2 = 0; goto bey;}
            else {running2 = 0; goto ey;}
            }
            break;

    }

}
}

void clean(){
    int grade[20];
    int griddles[5] = {0, 0, 0, 0, 0};
}

int main(){
    intro();
    while(like){
    questions();
    results();
    }

    cout << "\n\n Survey End\n\n\n\n\n\n";

    return 0;
}
