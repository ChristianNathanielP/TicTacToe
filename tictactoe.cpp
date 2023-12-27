#include <iostream>
using namespace std;

char kotak[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void tampilan(){
    system("CLS");
    cout<<"Selamat Datang Di Permainan Tic Tac Toe 1 vs 1 Kelompok 7  "<<"\n\n";

    cout<<"7_______________________7"<<endl;
    cout<<"|       |       |       |"<<endl;
    cout<<"|    "  << kotak[0]  << "  |   "<< kotak[1] <<"   |   "<< kotak[2] <<"   |\n";
    cout<<"|_______|_______|_______|"<<endl;
    cout<<"|       |       |       |"<<endl;
    cout<<"|   " << kotak[3]  << "   |   "<< kotak[4] <<"   |   "<< kotak[5] <<"   |\n";
    cout<<"|_______|_______|_______|"<<endl;
    cout<<"|       |       |       |"<<endl;
    cout<<"|   " << kotak[6]  << "   |   "<< kotak[7] <<"   |   "<< kotak[8] <<"   |\n";
    cout<<"|_______|_______|_______|"<<"\n\n";
}

int hasil(){
    if (kotak[0] == kotak[1] && kotak[1] == kotak[2]){
        return 1;
    }else if (kotak[3] == kotak[4] && kotak[4] == kotak[5]){
        return 1;
    }else if (kotak[6] == kotak[7] && kotak[7] == kotak[8]){
        return 1;
    }else if (kotak[0] == kotak[3] && kotak[3] == kotak[6]){
        return 1;
    }else if (kotak[1] == kotak[4] && kotak[4] == kotak[7]){
        return 1;
    }else if (kotak[2] == kotak[5] && kotak[5] == kotak[8]){
        return 1;
    }else if (kotak[3] == kotak[4] && kotak[4] == kotak[5]){
        return 1;
    }else if (kotak[0] == kotak[4] && kotak[4] == kotak[8]){
        return 1;
    }else if (kotak[2] == kotak[4] && kotak[4] == kotak[6]){
        return 1;
    }else if (kotak[0] != '1' && kotak[1] != '2' && kotak[2] != '3' && kotak[3] != '4' && kotak[4] != '5' && kotak[5] != '6' && kotak[6] != '7' && kotak[7] != '8' && kotak[8] != '9'){
        return 0;
    }else{
        return -1;
    }
}

int main(){
    int player = 1, i, input;
    char mark;

    do{
        tampilan();
        player=(player%2)?1:2;

        cout<<"Pemain " <<player <<", Masukkan angka: ";
        cin >> input;

        mark=(player == 1) ? 'X' : 'O';

        if (input == 1 && kotak[0] == '1')

            kotak[0] = mark;
        else if (input == 2 && kotak[1] == '2')

            kotak[1] = mark;
        else if (input == 3 && kotak[2] == '3')

            kotak[2] = mark;
        else if (input == 4 && kotak[3] == '4')

            kotak[3] = mark;
        else if (input == 5 && kotak[4] == '5')

            kotak[4] = mark;
        else if (input == 6 && kotak[5] == '6')

            kotak[5] = mark;
        else if (input == 7 && kotak[6] == '7')

            kotak[6] = mark;
        else if (input == 8 && kotak[7] == '8')

            kotak[7] = mark;
        else if (input == 9 && kotak[8] == '9')

            kotak[8] = mark;
        else
        {
            cout<<"Gerakan Invalid";

            player--;
            cin.ignore();
            cin.get();
        }

        i = hasil();
        player++;
    }while(i==-1);
    tampilan();
   if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else if (i == 0)
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}