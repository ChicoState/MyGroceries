#include<iostream>
#include<string>
using namespace std;

// Lets close this egg issue once and for all!!
// Now Bacon is an issue! $git commit -m close #three


int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  string input;
  string item;

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

  if (input == "A"){
        for(int i = 0; i < 5; i++) {
              cout << "Add : "<<endl;
              cin  >>  item;
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
