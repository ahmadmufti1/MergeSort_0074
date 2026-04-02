#include <iostream>
using namespace std;

//Membuat array utama dan array sementara 
int arr [20], B[20];

// n adalah jumlah ukuran array yang akan dimasukkan
int n;

// Fungsi untuk menginput data ke dalam array
void input(){
    // Validasi input untuk memastikan panjang array tidak lebih dari 20
    while(true){
        cout << "Masukkan Panjang Array: ";
        cin >> n;

        if ( n <= 20)
        {
            break;
        }
        else
        {
            cout << "Panjang Array Maksimal 20";
        }
    }
}
