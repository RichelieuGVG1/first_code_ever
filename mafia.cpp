#include <iostream> 
#include <cstdlib> 
#include <ctime> 
#include <string> 
#include <stdio.h>
#include <time.h>
using namespace std; 

void mafia(int wd, int pp, string peace[], string world[], int mf) { 
    cout << "There are all players for now with comissar!"<<endl; 
    for (int i=0;i<wd; i++){ 
        cout << world[i]<<endl; 
    } 
    cout << "game started!\n\n";
    srand(time(NULL));
    int deadpeace=0; 
    int mfdead=0; 
    int day=1;
    int deaddoc=0;
    int deadcom=0;
    int deadpiz=0;
    while (deadpeace<pp or mfdead<(wd-pp)){ 
        cout<<endl<<endl<<"day "<< day<<endl; 
        int deadnight =rand()%pp; 
        int deadday=rand()%wd; 
        int alive=rand()%pp; 
        int aliveday=rand()%wd; 
        int comissar= rand()%wd; 
        int sex=rand()%wd;
        if (deaddoc==0){
            if (deadnight==1 or deadday==1){ 
                cout << "Doctor Jeremy have been killed"<<endl;
                deadpeace=deadpeace+1;
                deaddoc=1;
            } 
            else { 
                if (alive=deadnight){ 
                    cout << "doctor Jeremy have cured "<< peace[deadnight]<<endl; 
                }
                else{ 
                    cout << peace[deadnight]<<" have been killed at night"<< endl; 
                    deadpeace=deadpeace+1; 
                } 
            }
        }
        else {
            cout << peace[deadnight]<<" have been killed at night"<<endl;
        }
        if(deadpiz==0){
            if (deadnight==2 or deadday==2){ 
                cout << "Prostitute Maria have been killed"<<endl;
                deadpeace=deadpeace+1;
                deadpiz=1;
            } 
            else { 
                cout <<"Maria sex " << world[sex] <<endl; 
            } 
        }
        else{}
        if (deadcom==0){
            if (deadnight==comissar or deadday==comissar){ 
                cout << "Comissar have been killed"<<endl;
                deadcom=1;
            } 
            else{
                if (sex!=comissar){
                    cout << world[comissar]<<" have been arested by comissar"<< endl; 
                    deadpeace=deadpeace+1; //проверка кого арестовали мафию или мирняка
                    if (comissar>=mf){
                        mfdead=mfdead+1;
                    }
                    else {
                        deadpeace=deadpeace+1;
                    }
                }
                else{
                    cout << "nobody have been arested"<<endl;
                }
            }
        }
        else{}
        if (deadday!=deadnight){ 
            cout << world[deadday]<<" have been arested"<< endl; 
            deadpeace= deadpeace+1; //проверка кто умер-мирняк или мафиози
            if (deadday>=mf){
                mfdead=mfdead+1;
            }
            else{
                deadpeace=deadpeace+1;
            }
        } 
        else{ 
            if (deadday!=sex){ 
                cout <<"nobody have been arested"<< endl; 
                 
            }
        }
        if(deadday>=mf){
            mfdead=mfdead+1;
        }
        day=day+1;
        
    if (deadpeace==pp or mfdead==(wd-pp)){ 
        if (deadpeace==pp){
           cout << "\n\n MAFIA HAVE WON THE GAME!! hahaha, loozers!";
           break;
        }
        else{
            if (mfdead==(wd-pp)){
                cout << "\n\n HOORAY, LITTLE TOWN HAVE WON THE GAME!";
                break;
            }
        }
    break;
    } 
  } 
}
int main(){
    cout <<" Game started! You are the presenter, and fate of the town is in your arms! Who now, who will conquer the management in the town? mafia or civillians? \n ENTER QUANTITY OF PLAYERS TO CONTINUE \n\n\n\n";
    system("pause");
    int players; 
    cin >> players;
    if (players==5){ 
        int wd=4; 
        string world[wd]={"Jeremy","Maria","Vasily","Frank"}; //все игроки без коммисара 
        int pp = 3; 
        string peace[pp]={"Jeremy","Maria","Vasily"}; // все игроки без коммисара и мафии 
        int mf=4; 
        mafia(wd,pp,peace,world,mf); 
    }
    if (players==6){ 
        int wd=5; 
        string world[wd]={"Jeremy","Maria","Vasily","Frank","Mattew"}; 
        int pp = 3; 
        string peace[pp]={"Jeremy","Maria","Vasily"}; 
        int mf=4; 
        mafia(wd,pp,peace,world,mf); 
    } 
    if (players==7){ 
        int wd=6; 
        string world[wd]={"Jeremy","Maria","Vasily","Joseph","Frank","Mattew"}; 
        int pp = 4; 
        string peace[pp]={"Jeremy","Maria","Vasily","Joseph"}; 
        int mf=5; 
        mafia(wd,pp,peace,world,mf); 
    } 
    if (players==8){ 
        int wd=7; 
        string world[wd]={"Jeremy","Maria","Vasily","Joseph","Matt","Frank","Mattew"}; 
        int pp = 5; 
        string peace[pp]={"Jeremy","Maria","Vasily","Joseph","Matt"} ; 
        int mf=6; 
        mafia(wd,pp,peace,world,mf); 
    } 
    if (players==9){ 
        int wd=8; 
        string world[wd]={"Jeremy","Maria","Vasily","Joseph","Matt","Frank","Mattew","Adolf"}; 
        int pp = 5; 
        string peace[pp]={"Jeremy","Maria","Vasily","Joseph","Matt"} ; 
        int mf=6; 
        mafia(wd,pp,peace,world,mf); 
    } 
    if (players==10){ 
        int wd=9; 
        string world[wd]={"Jeremy","Maria","Vasily","Joseph","Matt","Richard","Frank","Mattew","Adolf"}; 
        int pp = 6; 
        string peace[pp]={"Jeremy","Maria","Vasily","Joseph","Matt","Richard"}; 
        int mf=7; 
        mafia(wd,pp,peace,world,mf); 
    } 
    if (players==11){ 
        int wd=10; 
        string world[wd]={"Jeremy","Maria","Vasily","Joseph","Matt","Richard","Egor","Frank","Mattew","Adolf"}; 
        int pp = 7; 
        string peace[pp]={"Jeremy","Maria","Vasily","Joseph","Matt","Richard","Egor"}; 
        int mf=8; 
        mafia(wd,pp,peace,world,mf); 
    } 
    if (players==12){ 
        int wd=11; 
        string world[wd]={"Jeremy","Maria","Vasily","Joseph","Matt","Richard","Egor","Frank","Mattew","Adolf","Edvard"}; 
        int pp = 7; 
        string peace[pp]={"Jeremy","Maria","Vasily","Joseph","Matt","Richard","Egor"}; 
        int mf=8; 
        mafia(wd,pp,peace,world,mf); 
    } 
}