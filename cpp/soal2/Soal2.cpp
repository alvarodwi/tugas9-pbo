/*
    Nama Program          : Soal2.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/

#include <iostream>
#include "Kucing.cpp"

using namespace std;

int main()
{
    Makhluk *kocengOren = new Kucing("Esmeralda", 3);
    (dynamic_cast<Kucing *>(kocengOren))->setRas("Kampung");
    (dynamic_cast<Kucing *>(kocengOren))->setMerekMakanan("Royal Canine");
    (dynamic_cast<Kucing *>(kocengOren))->info();
}