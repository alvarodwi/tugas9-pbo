/*
    Nama Program          : Soal1.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/

#include <iostream>
#include <string>
#include "Student.cpp"
#include "Employee.cpp"
using namespace std;

int main()
{
    Student ujang = Student();
    ujang.inputMahasiswa();
    ujang.outputMahasiswa();
    cout << "\n-------------\n"
         << endl;

    Employee pegawai = Employee(200, "Udin");
    pegawai.setWaktuMasuk(Waktu(7, 30, 0));
    pegawai.setWaktuPulang(Waktu(17, 30, 0));
    pegawai.printInfo();
}