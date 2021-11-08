/*
    Nama Program          : Mamalia.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/
#include <iostream>
#include <string>
#include "Makhluk.cpp"

using namespace std;

class Mamalia : public Makhluk
{
private:
    int jumlahKaki;
    string golongan;

public:
    Mamalia(string nama, int usia, string habitat) : Makhluk(nama, usia, habitat)
    {
        // do nothing
    }

    int getJumlahKaki()
    {
        return jumlahKaki;
    }

    string getGolongan()
    {
        return golongan;
    }

    void setJumlahKaki(int jumlahKaki)
    {
        this->jumlahKaki = jumlahKaki;
    }

    void setGolongan(string golongan)
    {
        this->golongan = golongan;
    }

    virtual void info()
    {
        this->Makhluk::info();
        cout << "Ternyata dia mamalia, dengan jumlah kaki " << this->jumlahKaki << " dan termasuk hewan " << this->golongan << '.' << endl;
    }
};
