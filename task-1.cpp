
#include <iostream>
using namespace std;

int main() {

    int nilai1, nilai2;
     cout << "Masukkan angka: ";
     cin >> nilai1;
     
     for (nilai2 = 1; nilai2 <= nilai1; nilai2++){
         if (nilai2 % 2 == 0){
             cout << "Angka " << nilai2 << " adalah angka GENAP!\n";
         } else {
             cout << "Angka " << nilai2 << " adalah angka GANJIL!\n";
         }
     }

    return 0;
}
