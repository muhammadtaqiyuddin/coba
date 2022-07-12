	
#include <iostream>
 
using namespace std;
 
int main()
{

  int jumlah,angka, i = 1,hasil;
 
  cout << "Input jumlah nilai: ";
  cin >> angka;
 
  cout << endl;
 

  for(i = 0; i < angka; i++){
    cin >> jumlah;
  }
 
  cout << endl;
 
 hasil = jumlah;

  for(i = 0; i < angka; i++){
    if(jumlah > hasil){
     hasil = jumlah;
    }
  }
 
  cout  << "Angka terbesar adalah: " << hasil;
 
  cout << endl;
  return 0;
}