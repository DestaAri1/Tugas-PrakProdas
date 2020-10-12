/* Tugas Praktikum Membuat Program Billing Warnet */
/* Desta Ari Alfananda */
/* 20051397008 */
/* Manajemen Informatika 2020B */
#include <iostream>

using namespace std;

int main()
{
string hash = "====================================";
int j1, m1, d1, j2, m2, d2, Detik_Total, Harga_Total;
const int harga = 5000;


    cout << "****Welcome to My Warnet****" << endl;
    cout << hash << endl;
    cout << "**Tarif per jam = Rp. 5.000**"<< endl;
    cout << hash << endl << endl;
    cout << "Jam Mulai"<< endl;
    cout << "Jam = "; cin >> j1;
    cout << "Menit = "; cin >> m1;
    cout << "Detik = "; cin >> d1;
    cout << endl;
    cout << "Jam Selesai" << endl;
    cout << "Jam = "; cin >> j2;
    cout << "Menit = "; cin >> m2;
    cout << "Detik = "; cin >> d2;
    cout <<endl;

    Detik_Total = ((j2 - j1)*3600) + ((m2 - m1)*60) + (d2 - d1);
    Harga_Total = (Detik_Total * harga) / 3600;

    cout << hash<<endl;
    cout << "Total = " << endl;
    cout << " LAMA PEMAKAIAN ANDA ADALAH " << j2 - j1 << " Jam " << m2 - m1 << " Menit " << d2 - d1 << " Detik " << endl;
    cout << " JUMLAH YANG ANDA HARUS BAYAR YAITU Rp. " << Harga_Total <<",-" << endl;
    cout << "*******************************************************************" << endl;
    cout << "-----Terima Kasih Sudah Menggunakan Jasa Layanan Kami----";

    return 0;
}
