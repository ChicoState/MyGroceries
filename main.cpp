#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item;

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

  if (input == "A"){
    for(int i = 0; i < 5; i++) {
      cout << "Add : "
      cin  <<  item;
      if (item == "Q"){
        cout << "QUITTER \n";
        return 0;
      }
      list[i] = item;
      cout << "\n" << item << " added! \n";
    }
  }
  return 0;
}
