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
    cout << "\n--------------------------" << endl;
    cout << "\nInputkan Isi Element Array" << endl;;
    cout << "\n--------------------------" << endl;;
    
    // Loop untuk menginput elemen-elemen array
    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke-" << i << ": ";
        cin >> arr[i];
    }
}

// Membuat fungsi mergesort
void mergeSort(int low, int high){
    // jika low lebih besar atau sama dengan high, berarti sudah tidak ada elemen yang perlu diurutkan
    if (low >= high){
        return;
    }

    

    
}