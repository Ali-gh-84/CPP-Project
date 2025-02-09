#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include <limits>
// #include <windows.h>
using namespace std;

char table[9] = {'1','2','3','4','5','6','7','8','9'};
int nobat = 1;
string player1;
string player2;

void getnameplayer(){
    cout<<"enter name of player 1 :"<<endl;
    getline(cin , player1);
    cout<<"enter name of player 2 :"<<endl;
    getline(cin , player2);
}

char getcharofround(){
    if(nobat%2 == 0){
        return 'X';
    } else {
         return 'O';
    }
}

void Sleep(int i);

void printtable(){
    system("cls");
    Sleep(500);
    cout<<endl;
    cout<<"player 1 : "<<player1<<"        "<<"player 2 : "<<player2<<endl;

        cout << "\t-------\t-------\t-------" << endl;
    for (int i = 0 ; i < 3; i++) {
        cout << "\t";
        for (int j = 0 ; j < 3 ; j++) {
            cout << "|   " << table[i * 3 + j] << "   ";
        }
        cout << "|" << endl;
        cout << "\t-------\t-------\t-------" << endl;
    }
}

string show_win(){
    if(getcharofround() == 'X'){
        return player1;
    }else if(getcharofround() == 'O'){
        return player2;
    }
    return 0;
}

void getinput(){
    nobat++;
    cout<<"enter a num amoung 1-9 " << show_win()<< " : ";
    char input;
    cin>>input;

    switch(input){
    case '1':
        table[0] = getcharofround();
        break;
    case '2':
        table[1] = getcharofround();
        break;
    case '3':
        table[2] = getcharofround();
        break;
    case '4':
        table[3] = getcharofround();
        break;
    case '5':
        table[4] = getcharofround();
        break;
    case '6':
        table[5] = getcharofround();
        break;
    case '7':
        table[6] = getcharofround();
        break;
    case '8':
        table[7] = getcharofround();
        break;
    case '9':
        table[8] = getcharofround();
        break;
    }
}

bool isfull(){
    for(int i=0 ; i<9 ; i++){
        if( table[i] != 'X' && table[i] != 'O'){
            return false;
        }
    }
    return true;
}

bool iswin(){
    if(table[0] == table[1] && table[1] == table[2]){
        return true;
    } else if(table[3] == table[4] && table[4] == table[5]){
        return true;
    } else if(table[6] == table[7] && table[7] == table[8]){
        return true;
    } else if(table[0] == table[3] && table[3] == table[6]){
        return true;
    } else if(table[1] == table[4] && table[4] == table[7]){
        return true;
    } else if(table[2] == table[5] && table[5] == table[8]){
        return true;
    } else if(table[0] == table[4] && table[4] == table[8]){
        return true;
    } else if(table[2] == table[4] && table[4] == table[6]){
        return true;
    } else {
        return false;
    }
}

bool isnotend(){
    if(isfull() || iswin()){
        return false;
    } else {
        return true;
    }
}


string whowin(){
    if(isfull()){
        cout<< " nooo players draww :(";
    } else {
        cout<< " yessss "<< show_win() <<" is win :)";
    }
}

int main(){
    getnameplayer();
    while(isnotend()){
        printtable();
        getinput();
    }
        whowin();
}

//-----------------------------------------------------------------//

/*
int main(){
  srand(time(0));
  int roundnum = rand()%100 + 1;
  int num ;
  string player;
  cout<<"hello sir !!"<<endl<<"what is your name ? ";
  cin>>player;
  bool correct = false;
  while(!correct){
    cout<<"enter a num for game mr " <<player<<" : ";
    cin>>num;
    system("cls");
    Sleep(500);
    if(num>roundnum){
        cout<<"your num is up"<<endl;
    }
    else if(num<roundnum){
        cout<<"your num is down"<<endl;
    }
    else{
         cout<<"you win !!"<<endl;

    correct = true;
    }
  }
      return 0;

}

*/

//-----------------------------------------------------------------------------//
