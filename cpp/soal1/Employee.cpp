/*
    Nama Program          : Employee.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 10/11/2021
*/
#include "Person.cpp"
#include <iostream>
#include <string>
#include "SlipGaji.cpp"

class Employee : public Person
{
private:
    int kodePegawai;
    SlipGaji slip;

public:
    Employee(int kode, string nama) : Person{nama}
    {
        kodePegawai = kode;
        slip = SlipGaji();
    }

    void setWaktuMasuk(Waktu w)
    {
        this->slip.setWaktuMasuk(w);
    }

    void setWaktuPulang(Waktu w)
    {
        this->slip.setWaktuPulang(w);
    }

    void printInfo()
    {
        this->slip.hitungGaji();

        cout << this->toString() << endl;
        this->slip.printSlipGaji();
    }

    string toString()
    {
        return "KodePegawai\t: " + to_string(this->kodePegawai) + "\nNama\t\t: " + this->Person::nama;
    }
};