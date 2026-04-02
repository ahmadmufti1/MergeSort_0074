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

    // Menghitung indeks tengah untuk membagi array menjadi dua bagian
    int mid = (low + high) / 2;
    
    // Memanggil fungsi mergeSort
    mergeSort(low, mid);
    mergeSort(mid + 1, high);

    // Proses penggabungan (merge) dua bagian array yang sudah diurutkan
    int i = low;
    int j = mid + 1;
    int k = low;

    // Loop untuk membandingkan elemen-elemen dari kedua bagian array dan menggabungkannya ke dalam array sementara B
    while (i <= mid && j <= high)
        {
            if(arr[i <= arr[j]])
            {
                B[k] = arr[i];
                i++;
            }
            else{
                B[k] = arr[j];
                j++;
            }
            k++;
        }
    
    // Jika masih ada elemen di bagian kanan yang belum diproses, tambahkan ke array sementara B
    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k = k + 1;
    }
    
    // Jika masih ada elemen di bagian kiri yang belum diproses, tambahkan ke array sementara B
    while (i <= mid)
    {
        B[k] = arr[i];
        i++;
        k++;
    }

    // Salin kembali elemen-elemen yang sudah diurutkan dari array sementara B ke array utama arr
    for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }
}
