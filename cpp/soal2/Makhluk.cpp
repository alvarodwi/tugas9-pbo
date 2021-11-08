/*
    Nama Program          : Makhluk.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/
#include <iostream>
#include <string>

using namespace std;

class Makhluk
{
protected:
    string nama;
    int usia;
    string habitat;

public:
    Makhluk(string nama, int usia, string habitat)
    {
        this->nama = nama;
        this->usia = usia;
        this->habitat = habitat;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setUsia(int usia)
    {
        this->usia = usia;
    }

    void setHabitat(string habitat)
    {
        this->habitat = habitat;
    }

    string getNama()
    {
        return nama;
    }

    float getUsia()
    {
        return usia;
    }

    string getHabitat()
    {
        return habitat;
    }

    virtual void info()
    {
        cout << "Suatu makhluk dengan nama " << this->nama << ". Dia berusia " << this->usia << " tahun dan tinggal di " << this->habitat << '.' << endl;
    }
};
