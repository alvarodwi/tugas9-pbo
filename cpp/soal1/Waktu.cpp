/*
    Nama Program          : Waktu.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 10/11/2021
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Waktu
{
private:
    int jam;
    int menit;
    int detik;

public:
    Waktu()
    {
        jam = 0;
        menit = 0;
        detik = 0;
    }

    Waktu(int j, int m, int d)
    {
        if (j > 23 || m > 59 || d > 59)
        {
            cout << "Kesalahan input waktu!";
            exit(0);
        }
        jam = j;
        menit = m;
        detik = d;
    }

    void setJam(int j)
    {
        if (j > 23)
        {
            cout << "Kesalahan input waktu!";
            exit(0);
        }
        jam = j;
    }

    void setMenit(int m)
    {
        if (m > 59)
        {
            cout << "Kesalahan input waktu!";
            exit(0);
        }
        menit = m;
    }

    void setDetik(int d)
    {
        if (d > 59)
        {
            cout << "Kesalahan input waktu!";
            exit(0);
        }
        detik = d;
    }

    int getJam()
    {
        return jam;
    }

    int getMenit()
    {
        return menit;
    }

    int getDetik()
    {
        return detik;
    }

    Waktu hitungSelisih(Waktu akhir)
    {
        Waktu temp = Waktu();
        temp.jam = akhir.jam - jam;
        temp.menit = akhir.menit - menit;
        if (temp.menit < 0)
        {
            temp.menit = 60 + temp.menit;
            temp.jam--;
        }
        temp.detik = akhir.detik - detik;
        if (temp.detik < 0)
        {
            temp.detik = abs(temp.detik);
            temp.menit--;
            if (temp.menit < 0)
            {
                temp.menit = 60 + temp.menit;
                temp.jam--;
            }
        }
        return temp;
    }

    string toString()
    {
        return to_string(jam) + ":" + to_string(menit) + ":" + to_string(detik);
    }

    string printWaktu()
    {
        return to_string(jam) + " jam " + to_string(menit) + " menit " + to_string(detik) + " detik";
    }
};