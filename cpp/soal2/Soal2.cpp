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
    // init kochenkOren sebagai class Makhluk
    Makhluk *kochenkOren = new Kucing("Esmeralda", 3);
    // lakukan dynamic cast ke class Kucing
    (dynamic_cast<Kucing *>(kochenkOren))->setRas("Kampung");
    (dynamic_cast<Kucing *>(kochenkOren))->setMerekMakanan("Royal Canine");
    (dynamic_cast<Kucing *>(kochenkOren))->info();
}