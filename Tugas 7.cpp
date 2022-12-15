#include <iostream>
using namespace std;

float gajipokok(float);
float lembur(float);
float makan(float);
float transport(float);
int main (){

float jam_kerja,NIP,gajiperjam;
string Nama;
cout << "==============================================================" << "\n";
cout << "Menghitung Gaji Harian Karyawan PT. XYZ" << "\n";
cout << "==============================================================" << "\n";
cout << "NIP: ";
cin >> NIP;
cout << "Nama: ";
cin >> Nama;
cout << "Jumlah Jam Kerja: ";
cin >> jam_kerja;

cout << endl;
cout << "Gaji Pokok           : " << gajipokok(jam_kerja) << "\n";
if (jam_kerja<=8){
    cout << "Uang Lembur          : " << lembur (8) << "\n";
    cout << "Uang Makan           : " << makan(0) << "\n";
    cout << "Uang Transport       : " <<transport(0) << "\n";
    cout << "Total Gaji Harian    : " << gajipokok(jam_kerja) << endl;

}

if (jam_kerja ==9){
    cout << "Uang Lembur          : " << lembur (jam_kerja) << "\n";
    cout << "Uang Makan           : " << makan(1) << "\n";
    cout << "Uang Transport       : " << transport(0) << "\n";
    cout << "Total Gaji Harian    : " << lembur (jam_kerja)+gajipokok(jam_kerja)+makan(1) << endl;

    }
if (jam_kerja >=10){
    cout << "Uang Transport       : " <<transport(1) << "\n";
    cout << "Uang Lembur          : " << lembur (jam_kerja) << "\n";
    cout << "Uang Makan           : " << makan(1) << "\n";
    cout << "Total Gaji Harian    : " << lembur (jam_kerja)+gajipokok(jam_kerja)+makan(1)+transport(1) << endl;
    }


    return 0;
}

float gajipokok (float x){
    float y ;
    y = x * 7500;
    return y;
}
float lembur(float x){
    float y;
    y = (x-8)*11250;
    return y;
}
float makan(float x){
    float y ;
    y = x * 10000;
    return y;
}
float transport(float x){
    float y;
    y = x * 13000;
    return y;
}




