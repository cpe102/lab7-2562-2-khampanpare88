#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank:";
  cin >> rank;
  if(rank==83){
    //'S' 
    cout << "You have received Super Ultra Rare Unit!!!\n";
    //'A'
    cout << "You have received 5 gems.\n";
    //'B'
    cout << "You have received 1 gems.\n";
    //'C' 
    cout << "You have received 2000 coins.\n";
    //'D'
    cout << "You have received very KAK items.\n";
  }
  if(rank==65){
    cout << "You have received 5 gems.\n";
    cout << "You have received 1 gems.\n";
    cout << "You have received 2000 coins.\n";
    cout << "You have received very KAK items.\n";
  }
   if(rank==66){
    cout << "You have received 1 gems.\n";
    cout << "You have received 2000 coins.\n";
    cout << "You have received very KAK items.\n";
  }
   if(rank==67){
    cout << "You have received 2000 coins.\n";
    cout << "You have received very KAK items.\n";
  }
     if(rank==68){
    cout << "You have received very KAK items.\n";
  }
  return 0;
}
