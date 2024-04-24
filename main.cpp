#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   cout << "MENU" << endl << "a - Add item to cart" << endl << "d - Remove item from cart" << endl << "c - Change item quantity" << endl
   << "i - Output items' descriptions" << endl << "o - Output shopping cart" << endl << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   switch(option){
      case "a":
      case "d":
      case "c":
      case "i":
      case "o":
      case "q":
      
   
}

int main() {
   string name, date;
   ShoppingCart cart1;
   string option;

   cout << "Enter customer's name:" << endl;
   getLine(cin, name);
   cout << "Enter today's date:" << endl;
   getLine(cin, date);

   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;

   cart1(name, date);

   PrintMenu();
   cout << "Choose an option:" << endl;
   cin << option;
   while (option != "q"){
   
      
   
   
   return 0;
}
