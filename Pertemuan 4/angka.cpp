#include <iostream>
using namespace std;

int main() {
    int angka;
    do
    {
        cout << "Masukkan angka dari -100 sampai 100: ";
        cin >> angka;
    } while (angka < -100 || angka > 100);//melakukan loop jika angka kurang dari -100 atau lebih dari 100

    cout << "Angka anda adalah "<< angka << endl;
}
