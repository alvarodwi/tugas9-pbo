/*
    Nama Program          : HasilSidang.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/
#include <iostream>
#include <string>

using namespace std;

class HasilSidang
{
private:
    float nilaiPenguji1;
    float nilaiPenguji2;
    float nilaiPembimbing;

    float hitungNilaiPenguji(float nilai)
    {
        return nilai * 0.3f;
    }

    float hitungNilaiPembimbing(float nilai)
    {
        return nilai * 0.4f;
    }

public:
    HasilSidang()
    {
        nilaiPenguji1 = 0;
        nilaiPenguji2 = 0;
        nilaiPembimbing = 0;
    }

    HasilSidang(float np1, float np2, float npemb)
    {
        nilaiPenguji1 = np1;
        nilaiPenguji2 = np2;
        nilaiPembimbing = npemb;
    }

    void setHasilSidang(float np1, float np2, float npemb)
    {
        nilaiPenguji1 = np1;
        nilaiPenguji2 = np2;
        nilaiPembimbing = npemb;
    }

    void setNilaiPenguji1(float nilai)
    {
        nilaiPenguji1 = nilai;
    }

    void setNilaiPenguji2(float nilai)
    {
        nilaiPenguji2 = nilai;
    }

    void setNilaiPembimbing(float nilai)
    {
        nilaiPembimbing = nilai;
    }

    float getNilaiPenguji1()
    {
        return nilaiPenguji1;
    }

    float getNilaiPenguji2()
    {
        return nilaiPenguji2;
    }

    float getNilaiPembimbing()
    {
        return nilaiPembimbing;
    }

    float hitungNilaiSidang()
    {
        return hitungNilaiPenguji(nilaiPenguji1) + hitungNilaiPenguji(nilaiPenguji2) + hitungNilaiPembimbing(nilaiPembimbing);
    }

    string konversiHurufMutu(float nilaiSidang)
    {
        string hm;
        if (nilaiSidang > 0 && nilaiSidang <= 60)
        {
            hm = "T";
        }
        else if (nilaiSidang > 60 && nilaiSidang <= 70)
        {
            hm = "C";
        }
        else if (nilaiSidang > 70 && nilaiSidang <= 80)
        {
            hm = "B";
        }
        else if (nilaiSidang > 80 && nilaiSidang <= 100)
        {
            hm = "A";
        }
        else
        {
            hm = "Nilai Tidak Valid!";
        }
        return hm;
    }

    string cekKelulusan(float rerata)
    {
        return (rerata > 60 && rerata <= 100) ? "LULUS" : "TIDAK LULUS";
    }

    void inputNilai()
    {
        cout << "Input nilai penguji 1\t> ";
        cin >> nilaiPenguji1;
        cout << "Input nilai penguji 2\t> ";
        cin >> nilaiPenguji2;
        cout << "Input nilai pembimbing\t> ";
        cin >> nilaiPembimbing;
    }

    void outputSidang()
    {
        float nilaiSidang = hitungNilaiSidang();
        cout << "\nOUTPUT" << endl;
        cout << "Nilai Anda" << endl;
        cout << "  Nilai Penguji 1  : " + to_string(getNilaiPenguji1()) << endl;
        cout << "  Nilai Penguji 2  : " + to_string(getNilaiPenguji2()) << endl;
        cout << "  Nilai Pembimbing : " + to_string(getNilaiPembimbing()) << endl;
        cout << endl;
        cout << "Nilai sidang Anda\t> " + to_string(nilaiSidang) << endl;
        cout << "Status Anda\t\t> " + cekKelulusan(nilaiSidang) << endl;
        cout << "Huruf mutu Anda\t\t> " + konversiHurufMutu(nilaiSidang) << endl;
    }
};
