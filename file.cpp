#include <iostream>
#include <cstring>
#include <iomanip>
// #include <bits/stdc++.h>

using namespace std;

struct football_player{
    string name;
    string position;
    int touchdowns;
    int catches;
    int pass_yards;
    int rec_yards;
    int rush_yards;
};

struct football_player player_data[10];

void addData(){
    string name;
    string pos;
    int touchdown;
    int catches;
    int pass;
    int rec;
    int rush;

    cout << "Enter player name: ";
    cin >> name;
    cout << endl;
    cout << "Enter player position: ";
    cin >> pos;
    cout << endl;
    cout << "Enter number of touchdowns: ";
    cin >> touchdown;
    cout << endl;
    cout << "Enter number of catches: ";
    cin >> catches;
    cout << endl;
    cout << "Enter number of passing yards: ";
    cin >> pass;
    cout << endl;
    cout << "Enter number of receiving yards: ";
    cin >> rec;
    cout << endl;
    cout << "Enter number of rushing yards: ";
    cin >> rush;
    cout << endl;

    football_player player_name = {name, pos, touchdown, catches, pass, rec, rush};

    // adding data to array
    player_data[sizeof(player_data)/sizeof(player_data[0])] = player_name;

}

void outputData(){
    cout << "Player" << setw(10) << "Position" << setw(10) << "Touchdown" << setw(5) << "Catches" << setw(5) << "Passing yards" << setw(5) << "Receiving Yards" << setw(5) << "Rush yards" << endl;
    for (int i=0;i<10;++i){
        cout << player_data[i].name << setw(10) << player_data[i].position << setw(10) << player_data[i].touchdowns << setw(5) << player_data[i].catches << setw(5) << player_data[i].pass_yards << setw(5) << player_data[i].rec_yards << setw(5) << player_data[i].rush_yards << endl;
    }
}

int main(){
    while (true){
        int choice = 0;

        cout << "Main menu" << endl;
        cout << "1. View data" << endl;
        cout << "2. Insert Player data" << endl;
        cout << "3. Exit program" << endl;

        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        if (choice == 1){
            outputData();
        }else if (choice == 2){
            addData();
        }else{
            break;
        }
    }

    return 0;


}
