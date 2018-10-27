/*
PROGRAM: Robo-World

LEADER: Jake Asuncion(flowchart/ideas)
MEMBERS: Steven John A. Sunga(coder)
         Lorenz Adrianne Salalac(flowchart)
         Mhar Sydney Flores(ideas)
*/

#include <iostream>
#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <mmsystem.h>
#include <cstdlib>
#include <ctime>

using namespace std;
class MV {
public:
    void setSKIP(char sk);
    char getSKIP(void);
    void setATTACK(int atk);
    int getATTACK();
    void setENEMYattack(int atk);
    int getENEMYattack();
    void setENEMYhp(int hp);
    int getENEMYhp();
    void setOLDENEMYHP(int x);
    int getOLDENEMYHP();
    void setOLDHP(int x);
    int getOLDHP();
    void setDAMAGE(int x);
    int getDAMAGE();
    void setENDAMAGE(int x);
    int getENDAMAGE();
    void setHP(int x);
    int getHP();
    MV();
private:
    char skip;
    int mainHP;
    int attack;
    int enemyHP;
    int enemyATTACK;
    int oldENEMYhp;
    int oldHP;
    int damage;
    int enDAMAGE;
};
void stopasound() ;
void enemylvl3lines(int x,int y);
void animateLOADING(int x,string y,string a);
void enemylines(int y);
void flashscreen();
void attacklines(int x);
void displayCLASHresultHP(int x,int a, int b , int c);
void MYCRIT(int x);
void ENCRIT(int x);
void clr();
int valATTACK(int x, int y);
int valENEMYATTACK(int x, int y);
int randomN(int lowest,int highest);
int CRITICAL(int highest);
void playasound(int x);
void lvl3screen() {
system("color 4B");
}
void animateText(string anitxt,int x) {
int i=0;
while ( anitxt[i] != '\0')
{
	cout << anitxt[i];
	Sleep(x);
	i++;
};
}

void spaces(int x) {
for (int i =1; i<=x; i++) {
    cout<<endl;
}
}
void screenPurpleAqua() {
system("color 0B");
}
void textcolor(int x) {
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
}



int main()
{
    srand(time(0));
    MV mV;
    int lvlup=0;
char sk;
int choice;
    system("color 0B");
    spaces(8);
    animateText(" \t\t\tl o a d i n g . . .",200);
    system("cls");
    system("color 59");
    spaces(14);
    animateText(" \t\t\t\t\t\tl o a d i n g . . .",200);
 PlaySound(TEXT("intense.wav"),NULL,SND_FILENAME|SND_ASYNC);

while (true) {
         system("cls");
    //then a sound here .
    screenPurpleAqua();
    spaces(8);
    animateText("\t\t\tR o b o - W o r l d . . .",75);
    spaces(3);
    animateText(" 1 (start story)",50);
    spaces(1);
    animateText(" 2 ( exit ) ", 50);
    spaces (3);
    animateText("enter choice : ",50);
    cin>>choice;
    if (choice==1||choice==2) {
        break;
    }
    else {
        //an error sound here.
        system("cls");
        system("color 0B");
        spaces(10);
        animateText("\t\t\t\tSorry! you entered an invalid input.",20);
        spaces(2);
        animateText("\t\t\t\tPlease try again . . .",20);
        Sleep(1000);
       cin.clear();
   cin.ignore(100, '\n');
    }
}
if (choice==1) {
//stop the soundPlaySound(0,0,0);
system("cls");
system("color 0D");
animateText("...",50);
system("color 1D");
animateText("...",50);
system("color 2D");
animateText("...",50);
system ("color 3D");
animateText("...",50);
system("color 4D");
animateText("...",50);
system("color 5D");
animateText("...",50);
system("color 6D");
animateText("...",50);
system("color 7D");
animateText("...",50);
screenPurpleAqua();
while (true) {
system("cls");
spaces(3);
cout<<"\t\t\tR o b o - W o r l d (story)"<<endl;
spaces(6);
animateText("\t\tA very long time ago, in a very deep forest  ",50);
spaces(2);
system("color 0");
animateText("\tor maybe in the very deep cave of the",25);
spaces(2);
system("color 1");
animateText("\tX h i a n   K h r z t . . .",75);
system("color 2");
spaces(2);
animateText("\tthere was a war. A war of the best of the best.",50);
system("color 3");
spaces(2);
animateText("\tThe war of the great techs in the world that determined the ",50);
system("color 4");
spaces(2);
animateText("\tstrongest and the mightiest robot .",50);
system("color 5");
spaces(2);
animateText("\tit ended briefly and ",50);
system("color 6");
animateText("\tK4-J was claimed  to be the last robot standing.",60);

while (true) {
        spaces(2);
    animateText("\tInput c to continue or input s to skip the story ..",25);
    spaces(2);
    animateText("\tinput:",25);
    cin>>sk;
    mV.setSKIP(sk);
    if(mV.getSKIP()=='c'||mV.getSKIP()=='s'||mV.getSKIP()=='S'||mV.getSKIP()=='C') {
        break;
    }

    else {
            system("cls");
    spaces(5);
        animateText("\tPlease enter a valid input.",10);
        cin.clear();
    }
}
if(mV.getSKIP()=='S'||mV.getSKIP()=='s' ) {

    break;
}
system("cls");
screenPurpleAqua();
spaces(8);
animateText("\t\tBut due to its destruction , the SOVEIC UNION was forced ",45);
spaces(2);
animateText("\tto drop atomic bombs in ",40);
system("color 0c");
animateText("     X h i a n   K h r z t !",70);
spaces(2);
screenPurpleAqua();
animateText("\tAnd so K4-J exploded. But there was one thing everyone wanted",50);
spaces(2);
animateText("\tto get after the war",50);
spaces(2);
animateText("\tThe I N C E L (col) 0Z chip, known to be as the Golden Chip.",50);
spaces(2);
animateText("\tThe one and only chip in the world that K4 - J was made of.",50);
spaces(2);
animateText("\tIt said to be that anything that has it is I M M O R T A L.",75);
spaces(2);
animateText("\tIts own power is so destructive that it's unexplainable.",50);
spaces(2);
animateText("\tBut it was never found!",30);
while (true) {
        spaces(2);
    animateText("\tInput c to continue or input s to skip the story ..",25);
    spaces(2);
    animateText("\tinput:",25);
    cin>>sk;
    mV.setSKIP(sk);
    if(mV.getSKIP()=='c'||mV.getSKIP()=='s'||mV.getSKIP()=='S'||mV.getSKIP()=='C') {
        break;
    }

    else {
            system("cls");
    spaces(5);
        animateText("\tPlease enter a valid input.",10);
        cin.clear();
    }
}
if(mV.getSKIP()=='S'||mV.getSKIP()=='s' ) {

    break;
}
spaces(2);
animateText("\t\tSome says it got burned along with the explotion ",50);
spaces(2);
animateText("\tof the atomic bombs.",50);
spaces(2);
animateText("\tOthers say that someone must have taken it. But it's been",50);
spaces(2);
animateText("\ta long time ago. Who would keep it and never use it??",50);
spaces(2);
animateText("\tFew say that on its own power , it hid itself into the deepest",50);
spaces(2);
animateText("\tIt's been 10 decades ago of the best of the best of the war.",50);
spaces(2);
animateText("\tThe land has grew up on its own. A lot of trees pop up and many mountains.",50);
spaces(2);
animateText("\tstill the world is very very high in tech, but still nothing is comparable ",50);
spaces(2);
animateText("\tto the golden chip . . .",50);
while (true) {
        spaces(2);
    animateText("\tInput c to continue or input s to skip the story ..",25);
    spaces(2);
    animateText("\tinput:",25);
    cin>>sk;
    mV.setSKIP(sk);
    if(mV.getSKIP()=='c'||mV.getSKIP()=='s'||mV.getSKIP()=='S'||mV.getSKIP()=='C') {
        break;
    }

    else {
            system("cls");
    spaces(5);
        animateText("\tPlease enter a valid input.",10);
        cin.clear();
    }
}
if(mV.getSKIP()=='S'||mV.getSKIP()=='s' ) {

    break;
}
spaces(2);
animateText("\t\tmost of the people has forgotten about the golden story ",50);
spaces(2);
animateText("\t10decades ago...",50);


spaces(2);
animateText("\tFor unknown reason, the land where the war took place turned into",50);
spaces(2);
animateText("\tthe most dangerous place in the world..",50);
spaces(2);
animateText("\tthey say that some was greedy to have the golden chip and went in there",50);
spaces(2);
animateText("\tbut they never came back. there were no signs of them..",50);
spaces(2);
animateText("\tit said that a lot of greedy robots dared to entered the forest,",50);
spaces(2);
animateText("\tthe same thing happened to them, they never came back.",50);
spaces(2);
animateText("\tit was a very huge forest that it became to.",50);
spaces(2);
animateText("\tSome says that the golden chip is still there and that",50);
while (true) {
        spaces(2);
    animateText("\tInput c to continue or input s to skip the story ..",25);
    spaces(2);
    animateText("\tinput:",25);
    cin>>sk;
    mV.setSKIP(sk);
    if(mV.getSKIP()=='c'||mV.getSKIP()=='s'||mV.getSKIP()=='S'||mV.getSKIP()=='C') {
        break;
    }

    else {
            system("cls");
    spaces(5);
        animateText("\tPlease enter a valid input.",10);
        cin.clear();
    }
}
if(mV.getSKIP()=='S'||mV.getSKIP()=='s' ) {

    break;
}
spaces(2);
animateText("it was protecting itself with its own immortal power.",50);
spaces(2);
animateText("that the forest contained a lot of monsterous unknown objects.",50);
spaces(2);
animateText("and so , no one has ever taken foot steps in that place.",50);
spaces(2);
Sleep(5000);
system("cls");
system("color 0C");
spaces(10);
animateText("\t\tit's full of mysteries . . . . ",90);
spaces(7);
cin.clear();
cin.ignore();
animateText("press enter to continue . . .",25);
cin.get();
 break;
} //while for the story
stopasound();
clr();
screenPurpleAqua();
spaces(5);
animateText("\t\tGame starts!",50);
system("cls");
spaces(3);
animateText("\t E D A L  ( main robot )",1);
spaces(1);
animateText("\thealth: 200 (can add up at certain levels)",1);
spaces(1);
animateText("\tabilities:",1);
spaces(1);
animateText("\tnormal ability: punch",1);
spaces(1);
animateText("\t1st ability: Thornex",1);
spaces(1);
animateText("\t             - throws thorns on enemies feet then explodes.",1);
spaces(1);
animateText("\t2nd ability: Firesmash",1);
spaces(1);
animateText("\t             -Flies aggressively fast to its enemy and then throws a punch with a burning fire in it.",1);
spaces(1);
animateText("\t3rd ability: To be unlocked at level 3",1);
spaces(1);
animateText("\t4th ability: To be unlocked at level 5",1);
spaces(1);
cin.ignore();
cout<<"press enter to continue . . ."<<endl;
cin.get();
int trylvloneagain;
while(true) {
clr();
system("color 0c");
spaces(5);
animateText("\t\tL e v e l  1 ! ! !",25);
Sleep(500);
clr();
spaces(5);
animateText("\t\tL e v e l  1 ! ! !",25);
//PLAY A SOUND HERE FOR OPENING OF LEVEL ONE
PlaySound(TEXT("intense.wav"),NULL,SND_FILENAME|SND_ASYNC);
clr();
screenPurpleAqua();
spaces(7);
animateText("\tEdal: I sense something here . . .",50);

Sleep(200);
//Enemy rushed to edal (play sound here)
clr();
//playsound here
system("color 0c");
Sleep(50);
screenPurpleAqua();
Sleep(50);
system("color 0c");
Sleep(50);
screenPurpleAqua();
Sleep(50);
//strange voice comes in
system("color 0c");
spaces(7);
animateText("\tSTRANGE VOICE: WHAT ARE YOU DOING HERE IN XHIAN KHRZT!?!?!?",25);
Sleep(100);
spaces(2);
animateText("\tOnce you entered this, you will never get out!!",25);
screenPurpleAqua();
spaces(2);
cout<<"\tpress enter to continue :";
cin.get();
clr();
spaces(6);
animateText("\tAn enemy appears! You have to fight this enemy to advance to level 2.",25);
spaces(2);
animateText("\tDo something . . .",25);
spaces(2);
clr();
spaces(6);
animateText("\t\tENEMY TRACED!!!",50);
spaces(3);
cout<<"\tENEMY STATS:"<<endl;
spaces(2);
cout<<"name: T H I R T E E N"<<endl;
spaces(2);
cout<<"ABILITIES:"<<endl;
cout<<"1. c r u n c h --> swings then punches with a quick kick."<<endl;
cout<<"2. r o c k  s h a r d --> throws 5 rocks from surroundings in its enemy"<<endl;
cout<<"3. g a m m a  t s u n a m i --> causes a tsunami anywhere."<<endl;
cout<<endl;
cout<<endl;
cout<<"health: 300 hp"<<endl;
spaces(2);
cout<<"\tpress enter to continue --->";
cin.get();
stopasound();
Sleep(100);
mV.setHP(250);
mV.setENEMYhp(250);
int atkCHC;
int sHP=0;
int myHP=0;
mV.setATTACK(0);
mV.setENEMYattack(0);
mV.setDAMAGE(0);
mV.setENDAMAGE(0);
while(true) {
clr();
while (true) {
   spaces(5);
animateText("\t1. normal ability: punch",20);
spaces(1);
animateText("\t2. 1st ability: thornex",20);
spaces(1);
animateText("\t3. 2nd ability: firesmash",20);
spaces(1);
animateText("enter choice to attack the enemy 1/2/3 :",20);
cin>>atkCHC;
if (atkCHC==1||atkCHC==2||atkCHC==3) {
    break;
}
else {
        clr();
        spaces(1);
    animateText("\tYou entered an invalid input.",30);
    spaces(1);
animateText("\tPlease try again.",30);
cin.clear();
}
}// loop for wrong values

mV.setOLDENEMYHP(0);
mV.setOLDENEMYHP(mV.getENEMYhp());
int myattack=0;
myattack=valATTACK(atkCHC,0);
int mytotalattack=0;
mytotalattack=myattack;
mV.setDAMAGE(mytotalattack);
    sHP=mV.getENEMYhp()-mV.getDAMAGE();
    mV.setENEMYhp(sHP);
    mV.setOLDHP(0);
    mV.setOLDHP(mV.getHP());
    int ranATTACK=0;
    ranATTACK=randomN(1,3);
    mV.setENDAMAGE(valENEMYATTACK(ranATTACK,0.4));
    myHP=mV.getHP()-mV.getENDAMAGE();
mV.setHP(myHP);
    clr();
    system("color 0c");
    Sleep(400);
    screenPurpleAqua();
    spaces(3);
    if(atkCHC==1) {
            spaces(1);
            attacklines(1);
            spaces(2);

    spaces(1);
    displayCLASHresultHP(1,mV.getOLDENEMYHP(),mV.getDAMAGE(),mV.getENEMYhp());
    }
    else if(atkCHC==2) {
         spaces(1);
         attacklines(2);
            spaces(2);



        spaces(1);
    spaces(1);
    displayCLASHresultHP(1,mV.getOLDENEMYHP(),mV.getDAMAGE(),mV.getENEMYhp());
    }
    else if(atkCHC==3) {
         spaces(1);
         attacklines(3);


    spaces(1);
   displayCLASHresultHP(1,mV.getOLDENEMYHP(),mV.getDAMAGE(),mV.getENEMYhp());
    }
spaces(1);
cin.ignore();
cout<<"press enter to continue..."<<endl;
cin.get();
    clr();
    spaces(3);
    flashscreen();
    if (ranATTACK==1){
            spaces(1);
            animateText("\t\t THIRTEEN: C R U N C H !!!",45);
            spaces(2);
            animateText("\tthirteen C R U N C H E D you through the face!!",50);
            spaces(2);

    spaces(2);
     displayCLASHresultHP(2,mV.getOLDHP(),mV.getENDAMAGE(),mV.getHP());
    }
    else if(ranATTACK==2){
                spaces(1);
                animateText("\tTHIRTEEN: R O C K  S H A R D!!",40);
                spaces(2);
                animateText("\tR O C K S are coming to you!!",50);
                spaces(2);
                animateText("\tYou got smashed by the rocks!",50);
                spaces(2);

    spaces(2);
   displayCLASHresultHP(2,mV.getOLDHP(),mV.getENDAMAGE(),mV.getHP());
    }
    else if(ranATTACK==3) {
                spaces(1);
                animateText("\t THIRTEEN: G A M M A  T S U N A M I !!!",40);
                spaces(3);
                animateText("\t S P L A S H !! you got damaged!!",50);
                spaces(2);

    spaces(2);
     displayCLASHresultHP(2,mV.getOLDHP(),mV.getENDAMAGE(),mV.getHP());
    }
spaces(1);
cout<<"press enter to continue..."<<endl;
cin.get();
if (mV.getHP()<=0||mV.getENEMYhp()<=0) {
    break;
}
}
if (mV.getHP()<=0&&mV.getENEMYhp()>0) {
    clr();
    flashscreen();
    flashscreen();
    spaces(6);
    animateText("\tY O U  L O S E ...",50);
    spaces(3);
    animateText("\t\tTHIRTEEN: people like you should know their place!!",50);
    lvlup=0;
}
else if(mV.getENEMYhp()<=0&&mV.getHP()>0) {
        lvlup=1;
    clr();
    flashscreen();
    flashscreen();
    spaces(6);
    animateText(" \t Y o u  W I N !",50);
    spaces(2);
    animateText("You defeated THIRTEEN . .",50);
    spaces(2);
    animateText("\tedal: I came here for the chip.",40);
    spaces(2);
    animateText("\tthirteen: (evil laughs) ah-ah-ah you might have passed me!",40);
    spaces(1);
    animateText("\t      but surely you cannot if you take one more step ahead me!",40);
    spaces(3);
    animateText("\t edal: Like i'm scared.",40);
    spaces(2);
    cout<<"press enter to continue:";
    cin.get();
    break;
}
else {
    clr();
flashscreen();
flashscreen();
spaces(6);
animateText("\tD R A W",50);
spaces(3);
animateText("thirteen: this can't happen!!",50);
spaces(4);
animateText("\tedal: I need to get the chip!!",50);

   lvlup=0;
}
 while (true) {
    spaces(3);
    cout<<"\tDo you want to try again? 1- yes , 2- no"<<endl;
    cout<<"\tenter input:";
    cin>>trylvloneagain;
    if (trylvloneagain==1||trylvloneagain==2) {
        break;
    }
    else {
        spaces(3);
        cout<<"you entered an invalid input. please try again"<<endl;
        cout<<"press enter to continue..";
        cin.get();
        cin.clear();
    }
        }
     if (trylvloneagain==2) {
        clr();
        flashscreen();
        spaces(5);
        animateText("\tg a m e  c l o s i n g . . .",70);
        clr();
        spaces(5);
        animateText("\tg a m e  c l o s i n g . . .",70);
        break;
     }
     else {
        clr();
     }

}

 if (lvlup>0) {
        stopasound();
        lvlup=0;
    clr();
    flashscreen();
    flashscreen();
    spaces(7);
    animateText("\tY o u  W O N!!!",50);
    spaces(2);
    cout<<"Your robot EDAL just unlocked his new ability!!"<<endl;
    spaces(1);
    cout<<"new ability (3rd ability): BODY SLAM!"<<endl;
    cout<<"                             - with almost the speed of light,"<<endl;
    cout<<"                             edal grabs his enemy and lift it "<<endl;
    cout<<"                             and slams it to the death!"<<endl;
    cout<<"ALSO EDAL's HP went up from 250 to 300!"<<endl;
   Sleep(2000);
    spaces(4);
    animateText("\tAlso note that your robot (edal) has attained critical skills.",50);
    spaces(2);
    animateText("\tOnce your attacks hit a critical, it can double up , triple up or maybe even",50);
    spaces(2);
    animateText("\t quadraple up. But so your enemy??",50);
    spaces(2);
    cin.clear();

    cout<<"press enter to continue to level 2!!:";
    cin.get();
    //next enemy MAGNESO
    int trylvltwoagain;
    int sk1;
    playasound(2);
    while (true) { //loop level 2
            //initialize variables here
                        mV.setHP(300);
            mV.setENEMYhp(300);
            clr();
            spaces(7);
            system("color 0c");
            animateText("\t\tL E V E L  2 . . .",50);
            flashscreen();
            clr();
            spaces(7);
            system("color 0c");
            animateText("\t\tL E V E L  2 . . .",50);
            screenPurpleAqua();
            while (true) {
                    while(true) {
                        clr();
                        spaces(3);
                        cout<<"enter 1->read story ; enter 2->skip story"<<endl;
                        cout<<"input";
                        cin>>sk1;
                        if (sk1==1||sk1==2) {
                            break;
                        }
                    }
            if (sk1==2) {
                break;
            }
            clr();
            spaces(4);
            animateText("\tHad a really hard time with that thirteen . . .",50);
            spaces(2);
            animateText("\tI hope I can pass through this next stage i am coming in . .",50);
            spaces(2);
            animateText("\tFor a moment , I can't trace anything yet...",50);
            spaces(2);
            animateText("\tThis X h i a n K h r z t sure is strange.",50);
            clr();
            spaces(5);
            animateText("\t a f t e r  1 hour of walking into the forest...",50);
            Sleep(1000);
            clr();
            flashscreen();
            screenPurpleAqua();
          spaces(7);
          animateText("\t\t S H U L I  L U L U L U LU . . .. ",50);
          clr();
          flashscreen();
          screenPurpleAqua();
          spaces(7);
          animateText("\t\t B A AA AA AA AA AM!!",25);
          clr();
          flashscreen();
          screenPurpleAqua();
          flashscreen();
          break;
            }
            clr();
            flashscreen();
            spaces(5);
            animateText("\t E N E M Y  APPEARED!!!",50);
            clr();
            spaces(5);
            cout<<"\tENEMY INFO (M A G N E S O) "<<endl;
            spaces(2);
            cout<<"life: 300hp"<<endl;
            cout<<"ABILITIES:"<<endl;
            cout<<"   1. disassemble -> disassembles itself and turns into any kind of forms."<<endl;
            cout<<"   2. static charge -> throws an static charge to enemy that causes the enemy to paralyze."<<endl;
            cout<<"   3. gravitational pull -> pulls any object how big it is, then throws it to enemy at speed of light"<<endl;

            spaces(4);
            cout<<"\t YOUR ROBOT ( edal ) "<<endl;
            spaces(2);
            cout<<"life: 300hp"<<endl;
            cout<<"ABILITIES: "<<endl;
            cout<<"   1. punch ->with a strong punch in its hand."<<endl;
            cout<<"   2. thornex ->throws thorns that explodes in enemy"<<endl;
            cout<<"   3. firesmash ->at almost speed of light, rushed to enemy and blows a powerful smash-punch."<<endl;
            cout<<"   4. bodyslam (new) ->flies to enemy then rushed to enemy then grabs it and throw it powerfully."<<endl;
        spaces(2);
        cin.clear();
        cin.ignore();
        cout<<"press enter to continue ---->";
        cin.get();
    clr();
    spaces(4);
    animateText("\t magneso: For the first time , THIRTEEN was defeated in this forest.. ",50);
    spaces(2);
    animateText("\t You're really pump for it , huh??",50);
    spaces(2);
    animateText("\t t h i s  i s  y o u r  E N D . .",70);
    spaces(2);
    cout<<"press enter to continue ---->";
    cin.get();
    clr();
        while (true) { //loop clash level 2

int myatk1=0;
while(true) {
        clr();
spaces(7);
animateText("\t CHOOSE AN ABILITY :",10);
spaces(2);
animateText("\t 1. p u n c h",10);
spaces(2);
animateText("\t 2. t h o r n e x",10);
spaces(2);
animateText("\t 3. f i r e s m a s h",10);
spaces(2);
animateText("\t 4. b o d y  s l a m (NEW)",10);
spaces(2);
cout<<"input:";
cin>>myatk1;

    if (myatk1==1||myatk1==2||myatk1==3||myatk1==4) {
        break;
    }
    else {
        spaces(2);
        cout<<"You entered an invalid input. please try again."<<endl;
        cout<<"press enter to continue --->";
        cin.get();
        cin.clear();
    }
}
clr();
flashscreen();
            mV.setOLDENEMYHP(mV.getENEMYhp());
int ct=CRITICAL(3);
mV.setATTACK(ct);
mV.setDAMAGE(valATTACK(myatk1,10)*ct);
int enhp;
    enhp=mV.getENEMYhp()-mV.getDAMAGE();
    mV.setENEMYhp(enhp);

    spaces(2);
    attacklines(myatk1);
    spaces(2);
    MYCRIT(ct);
    spaces(2);
    displayCLASHresultHP(1,mV.getOLDENEMYHP(),mV.getDAMAGE(),mV.getENEMYhp());
spaces(3);
cin.ignore();
cout<<"press enter to continue --->";
cin.get();
clr();
spaces(5);
cout<<"\td i s a s s e m b l e ?? s t a t i c c h a r g e?? g r a v p u l l??"<<endl;
animateText("\t Magneso is initiating his attack . . .",50);
Sleep(600);
clr();
spaces(5);
cout<<"\td i s a s s e m b l e ?? s t a t i c c h a r g e?? g r a v p u l l??"<<endl;
animateText("\t Magneso is initiating his attack . . .",50);
clr();
spaces(5);
    mV.setOLDHP(mV.getHP());
   int rnatk=0;
    rnatk=randomN(1,3);
    int mhp=0;
    int et=CRITICAL(4);
    mV.setENDAMAGE(valENEMYATTACK(rnatk,0)*et);
    mhp=mV.getHP()-mV.getENDAMAGE();
mV.setHP(mhp);
if (rnatk==1) {
  animateText("\tMagneso D I S A S S E M B L E D!!!",50);
}
else if(rnatk==2) {
     animateText("\tMagneso C H A R G E D  A  S T A T I C!!!",50);
}
else if (rnatk==3) {
     animateText("\tMagneso P U L L  AN  GRAV O B J E C T!!!",50);
}
spaces(2);
enemylines(rnatk);
spaces(2);
ENCRIT(et);
spaces(2);
displayCLASHresultHP(2,mV.getOLDHP(),mV.getENDAMAGE(),mV.getHP());
spaces(2);
cout<<"press enter to continue--->";
cin.get();

          if(mV.getENEMYhp()<=0||mV.getHP()<=0) {
            break;
          }
        }
        if (mV.getENEMYhp()<=0&&mV.getHP()>0) {
            lvlup=1;
            clr();
            spaces(4);
            flashscreen();
            screenPurpleAqua();
            animateText("\t\tY O U  W I N ! ! !",50);
            spaces(4);
            animateText("\tIt was a n i c e  battle , Magneso..",50);
            spaces(2);
            animateText("\tNow tell me , where is the incel OZ chip??",50);
            spaces(2);
            animateText("\tmagneso: ITS IMMORTAL!!!!",50);
            spaces(2);
            cout<<"press enter to continue--->";
            cin.get();
            break;
        }
        else if(mV.getHP()<=0&&mV.getENEMYhp()>0) {
            lvlup=0;
            clr();
            spaces(4);
            flashscreen();
            screenPurpleAqua();
            animateText("\t\t Y O U  L O S E . . .",50);
            clr();
            spaces(4);
            flashscreen();
            screenPurpleAqua();
            animateText("\t\t Y O U  L O S E . . .",50);
            spaces(3);
            animateText("magneso: you're too far from me. .. ",50);
            spaces(3);
            animateText("\t\tget lost!!",50);
            spaces(2);
            cout<<"press enter to continue--->";
            cin.get();
        }
        else {
             lvlup=0;
            clr();
            spaces(4);
            flashscreen();
            screenPurpleAqua();
            animateText("\t\t D R A W. . .",50);
            clr();
            spaces(4);
            flashscreen();
            screenPurpleAqua();
            animateText("\t\t D R A W . . .",50);
            spaces(3);
            animateText("\tmagneso: H O W CAN THIS HAPPEN?!?!?",50);
            spaces(3);
            animateText("edal: I n E e D t H e  CHIP!!",50);
             spaces(2);
            cout<<"press enter to continue--->";
            cin.get();
        }
        while(true) {
            animateText("\tDo you want to try again? 1-yes , 2-no",50);
            spaces(3);
            cout<<"enter input:";
            cin>>trylvltwoagain;
            if (trylvltwoagain==1||trylvltwoagain==2) {
                break;
            }
        }
        if(trylvltwoagain==2) {
            lvlup=0;
           break;
        }
    }
    if (lvlup>0) {
            stopasound();
        clr();
        spaces(3);
        animateText("\tL E V E L  U P!!!",50);
        flashscreen();
       clr();
       animateLOADING(5,"\t\tscreen is changing , wait for a moment","\t\t- - - - -");
       lvl3screen();
       clr();
       spaces(7);
       cout<<"\t\tscreen has changed for this level."<<endl;
    spaces(3);
    cin.ignore();
    cout<<"\tpress enter to continue----->";
    cin.get();

    clr();
    spaces(3);
    cout<<"\tNEW ABILITY UNLOCKED!!!"<<endl;
    spaces(2);
    cout<<" 5th ability (NEW) : "<<endl;
    cout<<"  t e k p o i -> irons edals body and prevents from taking any damage."<<endl;
    cout<<"   damage: 0 "<<endl;
    cout<<"   critical: n/a"<<endl;
    cout<<"edal new health: 500hp"<<endl;
    animateLOADING(3,"\t\t wait a sec","\t\t > > >");
    int SKIP;
    while(true) {
    while (true){
    clr();
    spaces(5);
    cout<<"Do you want to read the next story or skip it?"<<endl;
    cout<<"   input 1 if read or 2 if skip"<<endl;
    spaces(2);
    cin>>SKIP;
    if(SKIP==1||SKIP==2) {
        break;
    }
    else {
        spaces(2);
        animateText("\tyou entered an invalid input, try again.",10);
        spaces(2);
        cin.ignore();
        cout<<"press enter to continue--->";
        cin.get();
        cin.clear();
        clr();
    }
    }
    if (SKIP==2) {
        break;
    }
    clr();
    flashscreen();
    lvl3screen();
    spaces(3);
    animateText("\tedal: this is the cave! this must be the place!",10);
    spaces(2);
    animateText("\tDAMN! why is there an iron door here?",10);
    spaces(1);
    animateText("\tthis is a really tough iron...",10);
    spaces(1);
    animateText("\t I gotta use my T H O R N E X to destroy this door.",10);
    spaces(2);
    cin.clear();
    cout<<"press enter to continue---->";
    cin.get();
    clr();
    flashscreen();
    flashscreen();
    lvl3screen();
    spaces(4);
    animateLOADING(3,"\t\tedal threw the thorns :","initiating attack...");
    clr();
    flashscreen();
    flashscreen();
    lvl3screen();
    spaces(4);
    animateLOADING(3,"\t\tB A A M M M M M","! ! ! ! !");
    spaces(1);
    cin.ignore();
cout<<"press enter to continue ---->";
cin.get();
    clr();
    spaces(4);
    animateText("\tedal: alright, we can now get our INCEL OZ CHIP!!",50);
    spaces(2);
    animateText("\twe can now attain P E A C E forever in this world!!",10);
playasound(2);
Sleep(1000);
spaces(1);
animateLOADING(2,"\tedal: wait a second, i hear something..","\t<><><>");
cin.ignore();
cout<<"press enter to continue ---->";
cin.get();
clr();
//insert FLASHBANG SOUND

flashscreen();
flashscreen();
flashscreen();
flashscreen();
lvl3screen();
spaces(4);
animateLOADING(4,"\t\tEDAL: I CANT SEE , WHAT IS THIS!?!?","\t\t? ? ? ? ");
Sleep(1000);
flashscreen();
lvl3screen();
clr();
spaces(3);
cout<<"\t\tAN ENEMY APPEARED !"<<endl;
animateLOADING(3,"\t","\tedal is reading the enemy . .");
spaces(2);
animateText("reading completed!!",50);
spaces(2);
animateText("ENEMY INFO",10);
spaces(1);
animateText("name: B E A M",10);
spaces(1);
animateText("health: 420hp",10);
spaces(1);
animateText("abilities:",10);
spaces(1);
animateText("  (1)Laser Beam - exerts an explosive beam from its hands.",10);
spaces(1);
animateText("  (2)Flash Bang - completely blinds everyone with this.",10);
spaces(1);
animateText("  (3)Hyper Blast - exerts a more powerful beam than its laser beam that comes out from his mouth.",20);
spaces(1);
animateText("  (4)Jiable Kick - at speed of light, rushes to enemy then kicks with an explosive beam in it.",20);
spaces(3);
cout<<"edal: seems like i will have to exceed even to my limits here..."<<endl;
cin.ignore();
cout<<"press enter to continue ---->";
cin.get();
break;
    }

    //LVL3
    int trylvlthreeagain;
    int myatk3;
    while (true) { //loop level 2
            //initialize variables here
            playasound(2);
            mV.setENEMYhp(420);
            mV.setHP(500);
            clr();
            spaces(3);
            flashscreen();
            flashscreen();
            lvl3screen();
            animateLOADING(2,"\t\tF i n a l !!","\t\t\tL E V E L  3");
            clr();
            spaces(3);
            animateText("\tedal: this is the final battle!",30);
            spaces(2);
            animateText("\t THE INCEL COL OZ CHIP IS IN HIS HEART!!!!",40);
            spaces(2);
            animateText("B E A M: G RRRRRRRRRRRRR!",10);
            spaces(2);
            cin.ignore();
            cout<<"press enter to continue---->";
            cin.get();
        while (true) { //loop clash level 2

                while(true) {
                    clr();
                    flashscreen();
                    lvl3screen();
                    spaces(4);
                    animateText("\tCHOOSE AN ABILITY TO ATTACK THE ENEMY :",10);
                    spaces(2);
                    animateText("(1) P U N C H",10);
                    spaces(1);
                    animateText("(2) T h o r n e x",10);
                    spaces(1);
                    animateText("(3) F i r e s m a s h",10);
                    spaces(1);
                    animateText("(4) B o d y  S l a m ",10);
                    spaces(1);
                    animateText("(5) NEW! T E K P O I",10);
                    spaces(2);
                    animateText("enter choice of attack:",10);
                    cin>>myatk3;
                    if(myatk3==1||myatk3==2||myatk3==3||myatk3==4||myatk3==5||myatk3==171998) {
                        break;
                    }
                    else {
                        spaces(2);
                        animateText("You entered an invalid input, try again.",10);
                        spaces(2);
                        cin.ignore();
                        cout<<"press enter to continue-->";
                        cin.get();
                        clr();
                        cin.clear();
                    }
                }
    mV.setOLDENEMYHP(mV.getENEMYhp());
    int ct3=CRITICAL(1);
  if (myatk3==5) {
    ct3=0;
  }
    mV.setDAMAGE(valATTACK(myatk3,30)*ct3);
    int ENHP3;
    ENHP3=mV.getENEMYhp()-mV.getDAMAGE();
    mV.setENEMYhp(ENHP3);
    clr();
    lvl3screen();
    spaces(2);
    attacklines(myatk3);
    spaces(2);
    MYCRIT(ct3);
    spaces(2);
    displayCLASHresultHP(1,mV.getOLDENEMYHP(),mV.getDAMAGE(),mV.getENEMYhp());
spaces(2);
cin.ignore();
cout<<"press enter to continue------->";
cin.get();
    mV.setOLDHP(mV.getHP());
    int RNATK3=0;
    RNATK3=randomN(1,3);
    int MPH3=0;
    int ET3=CRITICAL(1);
    if(myatk3==5) {
        ET3=0;
    }
    mV.setENDAMAGE(valENEMYATTACK(RNATK3,40)*ET3);
    MPH3=mV.getHP()-mV.getENDAMAGE();
    mV.setHP(MPH3);
    clr();
    flashscreen();
    lvl3screen();
    spaces(2);
    enemylvl3lines(RNATK3,myatk3);
    spaces(3);
    ENCRIT(ET3);
    spaces(2);
displayCLASHresultHP(2,mV.getOLDHP(),mV.getENDAMAGE(),mV.getHP());
spaces(2);
cout<<"press enter to continue--->";
cin.get();
          if(mV.getENEMYhp()<=0||mV.getHP()<=0) {
            break;
          }
        }//end of loop clash
        if (mV.getENEMYhp()<=0&&mV.getHP()>0) {
            //YOU WIN

            lvlup=1;
            clr();
            animateLOADING(2,"\tY O U   W I N!!","\t. . .");
            spaces(2);
            animateText("\tb e a m: THE CHIP!!!",50);
            spaces(2);
            animateText("\tedal: There is finally peace now!!",50);
            Sleep(1000);
            break;
        }
        else if(mV.getHP()<=0&&mV.getENEMYhp()>0) {
            //you lose
            lvlup=0;
            clr();
            animateLOADING(2,"\tY O U   L O S E!!","\t. . .");
            spaces(2);
            animateText("\tbeam: You shouldn't have come here in the first place!",50);
            spaces(2);
            flashscreen();
            lvl3screen();
            animateText("\tbeam: D I E !!!",50);
            spaces(2);
            animateText("\tEDAL: N O O O OO O !!",50);
        }
        else {
            //draw
            lvlup=0;
            clr();
            animateLOADING(2,"\tD R A W!!","\t. . .");
            spaces(2);
            animateText("\tbeam: i should be immortal!!!",50);
            spaces(3);
            animateText("\tedal: THE CHIP!!!",50);
        }
        while(true) {
            animateText("\tDo you want to try again? 1-yes , 2-no",50);
            spaces(3);
            cout<<"enter input:";
            cin>>trylvlthreeagain;
            if (trylvlthreeagain==1||trylvlthreeagain==2) {
                break;
            }
        }
        if(trylvlthreeagain==2) {
            lvlup=0;
           break;
        }
    }
    if (lvlup>0) {
        clr();
        flashscreen();
        flashscreen();
        lvl3screen();
        spaces(4);
        cout<<"\tEdal returned to his planet and peace was finally all over the world. . ."<<endl;
        spaces(3);
        animateLOADING(5,"\t\tT H E  E N D\n\t\tc o n g r a t u l a t i o n ! ! !","\t\t. . . . .");
    }
    else {
        clr();
        spaces(4);
        animateText("\tG a m e  C l o s i n g",50);
         clr();
        spaces(4);
        animateText("\tG a m e  C l o s i n g",50);
        clr();
        spaces(10);
        animateText("\t\t t h a n k  y o u . . .",50);
    }


    }
    else {
        clr();
        spaces(4);
        animateText("\tG a m e  C l o s i n g",50);
         clr();
        spaces(4);
        animateText("\tG a m e  C l o s i n g",50);
        clr();
        spaces(10);
        animateText("\t\t t h a n k  y o u . . .",50);
    }

}
else {
     clr();
    flashscreen();
    flashscreen();
    spaces(5);
    animateText("\tg a m e  c l o s i n g. . .",50);
    clr();
    flashscreen();
     spaces(5);
    animateText("\tg a m e  c l o s i n g. . .",50);
    clr();
    spaces(10);
    cout<<"\t\tT H A N K  Y O U!!"<<endl;

}
} //choice =1
else {
    clr();
    flashscreen();
    flashscreen();
    spaces(5);
    animateText("\tg a m e  c l o s i n g. . .",50);
    clr();
    flashscreen();
     spaces(5);
    animateText("\tg a m e  c l o s i n g. . .",50);
    clr();
    spaces(10);
    cout<<"\t\tT H A N K  Y O U!!"<<endl;
}

playasound(2);
clr();
spaces(5);
cout<<"\tr o b o - w o r l d"<<endl;
spaces(1);
animateText("\tc l o s i n g (5). . . ",100);
clr();
spaces(5);
cout<<"\tr o b o - w o r l d"<<endl;
spaces(1);
animateText("\tc l o s i n g (4) . . . ",100);
clr();
spaces(5);
cout<<"\tr o b o - w o r l d"<<endl;
spaces(1);
animateText("\tc l o s i n g (3) . . .",100);
clr();
spaces(5);
cout<<"\tr o b o - w o r l d"<<endl;
spaces(1);
animateText("\tc l o s i n g (2) . . .",100);
clr();
spaces(5);
cout<<"\tr o b o - w o r l d"<<endl;
spaces(1);
animateText("\tc l o s i n g (1) . . . ",100);
stopasound();
	return 0;
}

MV::MV(void) {
}
void printf(string x, int y) {
if (y==1) {
    cout<<x<<endl;
}
else {
    cout<<x;
}
}
void MV::setSKIP(char sk) {
skip=sk;
}
char MV::getSKIP(void) {
return skip;
}
void MV::setATTACK(int atk) {
attack=atk;
}
int MV::getATTACK(void) {
return attack;
}
void MV::setHP(int x) {
mainHP=x;
}
int MV::getHP(void){
    return mainHP;
}
void MV::setENEMYhp(int hp) {
enemyHP=hp;
}
int MV::getENEMYhp() {
return enemyHP;
}
void MV::setENEMYattack(int atk) {
enemyATTACK=atk;
}
int MV::getENEMYattack() {
return enemyATTACK;
}

void MV::setOLDENEMYHP(int x) {
oldENEMYhp=x;
}
int MV::getOLDENEMYHP(){
return oldENEMYhp;
}
void MV::setOLDHP(int x){
oldHP=x;
}
int MV::getOLDHP() {
return oldHP;
}
void MV::setDAMAGE(int x) {
damage=x;
}
int MV::getDAMAGE() {
return damage;
}
void MV::setENDAMAGE(int x) {
enDAMAGE=x;
}
int MV::getENDAMAGE() {
return enDAMAGE;
}
int randomN(int lowest,int highest) {

return rand()%(highest-lowest+1)+lowest;
}
int CRITICAL(int highest) {
if(randomN(1,highest)==highest){
    return randomN(2,4);
}
else {
    return 1;
}
}
void clr(){
system("cls");
}
int valATTACK(int x,int y) {

if (x==1) {
    return 40 + y;
}
else if(x==2) {
    return 75 + y;
}
else if(x==3){
    return 92+y;
}
else if(x==4) {
    return 80+y;
}
else if(x==5) {
    return 0;
}
}
int valENEMYATTACK(int x, int y) {
if (x==1) {
    return 44 + y;
}
else if(x==2) {
    return 55+y ;
}
else if(x==3) {
    return 111 + y;
}
else if(x==4) {
    return 25*CRITICAL(2);
}
}
void MYCRIT(int x){

if (x==1||x==0) {
    animateText("\tNO CRIT!",45);
}
else if(x==2) {
    animateText("\t C R I T I C A L  2X ! ! !",45);
}
else if (x==3) {
    animateText("\t C R I T I C A L  3X ! ! !",45);
}
else if(x==4) {
    animateText("\t U L T I M A T E  C R I T I C A L ! ! !",50);
}
}
void ENCRIT(int x){
MV mv;
if (x==1||x==0) {
    animateText("\tNO CRIT!",45);
}
else if(x==2) {
    animateText("\t C R I T I C A L  2X ! ! !",45);
}
else if (x==3) {
    animateText("\t C R I T I C A L  3X ! ! !",45);
}
else if(x==4) {
    animateText("\t U L T I M A T E  C R I T I C A L ! ! !",50);
}
}
void displayCLASHresultHP(int x,int a , int b , int c) {
if (x==1) {
  spaces(1);
    cout<<"\tDAMAGE GIVEN ! ::"<<b<<endl;
    spaces(2);
    cout<<"\tENEMY HEALTH:: "<<a<<"hp - "<<b<<"hp="<<c<<"hp"<<endl;
}
else {
   spaces(1);
    cout<<"\tDAMAGE TAKEN ! ::"<<b<<endl;
    spaces(2);
    cout<<"\tYOUR HEALTH:: "<<a<<"hp - "<<b<<"hp="<<c<<"hp"<<endl;
}
}
void attacklines(int x) {

if (x==1){
 flashscreen();
 animateLOADING(3,"<>","edal is attacking...");
 spaces(2);
    animateText("\t TAKE THIS P U N C H ! ! !",40);
    spaces(3);
    animateText("\tENEMY g o t  P U N C H E D through the face!!!",50);
}
else if(x==2) {
        flashscreen();
         animateLOADING(3,"<>","edal is attacking...");
 spaces(2);
    animateText("\tTAKE THIS THORNS!!!",40);
    spaces(3);
    animateText("\tENEMY exploded from the thorns!!!",50);
}
else if(x==3) {
    flashscreen();
     animateLOADING(3,"<>","edal is attacking...");
 spaces(2);
    animateText("\tF I R E S M A S H ! !",35);
    spaces(3);
    animateText("\tEnemy got blow through the chest with your F I R E S M A S H!!!",50);
}
else if(x==4) {
    flashscreen();
     animateLOADING(3,"<>","edal is attacking...");
 spaces(2);
    animateText("\t B O D Y  S L A M !!!!",50);
    spaces(4);
    animateText(" \t\t S L L A A A A M M M M ! !",50);
}
else if(x==5) {
    flashscreen();
     animateLOADING(3,"<>","edal is defending...");
 spaces(2);
    animateText("\t T E K P O I !",30);
    spaces(3);
    animateText("\tedal: All your attacks is useless, beam!",30);
}
else if(x==171998) {
    flashscreen();
    lvl3screen();
     animateLOADING(3,"<>","CRITICAL ! ! ! !...");
 spaces(2);
 animateText("kabushin technique!!",50);
}
}
void flashscreen() {
system("color 7c");
Sleep(50);
system("color 4c");
Sleep(50);
system("color 7c");
Sleep(50);
system("color 4c");
Sleep(50);
screenPurpleAqua();
}
void enemylines(int y) {
    spaces(3);
if (y==1) {
    animateText("\tdisassembled!! i'LL C R U S H Y OU in  this FORM!!",50);

}
else if(y==2) {
    animateText("get B U R N E D !!!",50);
}
else if(y==3) {
    animateText("T A K E  T H I S  H E A V Y  P U L L!! GRAVY!!",50);
}
else {
    animateText("...",50);
}
}
void playasound(int x)
 {
     if (x==1) {
        PlaySound(TEXT("2sword.wav"),NULL,SND_FILENAME|SND_ASYNC);
     }
     else if(x==2) {
        PlaySound(TEXT("intense.wav"),NULL,SND_FILENAME|SND_ASYNC);
     }
     else if(x==3) {
        PlaySound(TEXT("sword.wav"),NULL,SND_FILENAME|SND_ASYNC);
     }
 }
 void stopasound() {
    PlaySound(0,0,0);
 }
 void animateLOADING(int x, string y,string a) {

 for (int i=1; i<=x; i++) {
    clr();
    spaces(3);
    cout<<y<<endl;
    animateText(a,80);
 }
 }
 void enemylvl3lines(int x, int y) {
 if (x==1) {
    flashscreen();
    lvl3screen();
    animateLOADING(3,"\t B E A M :","\tinitiating laser beam. . .");
    spaces(2);
    animateText("\tinitiating completed!!",10);
    spaces(2);
    animateText("\tT A K E  T H I S ! ! !",30);
    spaces(2);
        if (y==5) {
            animateText("\tNO DAMAGE!?!?!? damn that TEKPOI!!",30);
        }
        else {
            animateText("\tY o u  GOT HIT by the LASER BEAM!!",30);
        }
 }
 else if(x==2) {
 flashscreen();
    lvl3screen();
    animateLOADING(3,"\t B E A M :","\tinitiating flash bang. . .");
    spaces(2);
    animateText("\tinitiating completed!!",10);
    spaces(2);
    animateText("\tF L A S H B A N G ! ! !",30);
     if (y==5) {
            animateText("\tNO DAMAGE!?!?!? damn that TEKPOI!!",30);
        }
        else {
            animateText("\tY o u blinded and GET A FULL HIT with beam's punch!!",30);
        }
 }
 else if(x==3) {
 flashscreen();
    lvl3screen();
    animateLOADING(3,"\t B E A M :","\tinitiating hyper blast. . .");
    spaces(2);
    animateText("\tinitiating completed!!",10);
    spaces(2);
    animateText("\tB L A A A S T ! ! ! ! ! !",30);
     if (y==5) {
            animateText("\tNO DAMAGE!?!?!? damn that TEKPOI!!",30);
        }
        else {
            animateText("\tYOU GOT HIT EXPLOSIVE BEAM FROM HIS MOUTH!!",30);
        }
 }
 else if(x==4) {
flashscreen();
    lvl3screen();
    animateLOADING(3,"\t B E A M :","\tinitiating hyper blast. . .");
    spaces(2);
    animateText("\tinitiating completed!!",10);
    spaces(2);
    animateText("\tB L A A A S T ! ! ! ! ! !",30);
     if (y==5) {
            animateText("\tNO DAMAGE!?!?!? damn that TEKPOI!!",30);
        }
        else {
            animateText("\tYOU GOT KICKED at a speed of light with an explosive beam!!!",30);
        }
 }
 }

