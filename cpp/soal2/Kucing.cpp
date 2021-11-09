/*
    Nama Program          : Kucing.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/

#include "Mamalia.cpp"
class Kucing : public Mamalia
{
private:
    string merekMakanan;
    string ras;

public:
    Kucing(string nama, int usia) : Mamalia(nama, usia, "Rumah Kamu")
    {
        Mamalia::setJumlahKaki(4);
        Mamalia::setGolongan("Omnivora");
    }

    void setMerekMakanan(string merekMakanan)
    {
        this->merekMakanan = merekMakanan;
    }

    void setRas(string ras)
    {
        this->ras = ras;
    }

    string getMerekMakanan()
    {
        return this->merekMakanan;
    }

    string getRas()
    {
        return this->ras;
    }

    void info()
    {
        this->Mamalia::info();
        cout << "Dia adalah kucing dengan ras " << this->ras << " dan makanan kesukaannya adalah " << this->merekMakanan << '.' << endl;
    }
};
