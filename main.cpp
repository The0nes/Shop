#include<iostream>
using namespace std;

void shop();
string inventory[10];

int main(){
  string input;
  int room = 1;
  do{
    cout << "Inventory: "<< endl;
    for(int i = 0; i <10; i++)
    cout << inventory[i] << " ";
    cout << endl;
    switch(room){
    case 1:
      cout << "You are in room 1. You can go North or West. There is also a shop Press 'Y' to enter the shop." << endl;
      cin >> input;
      if (input == "North")
        room = 2;
      else if (input == "West")
        room = 3;
      else if (input == "Y"){
        shop();
      }
      else
        cout << "Nothing happens." << endl;
    }
  }while(input != "Q");
}

void shop(){

  string input;
  do{
    cout << "Hello! Welcome to my shop!" << endl;
    cout << "Press 'p' for a potion, 's' for a sword, and 'm' for magic wand." << endl;
    cin >> input;
    if (input == "p"){
      inventory[0] = "potion";
    }
    else if (input == "s")
      inventory[1] = "sword";
    else if (input == "m")
      inventory[2] = "magic wand";
      
  } while (input !="q");
}
