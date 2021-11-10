/*
    Nama Program          : Person.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string nama;

public:
    Person()
    {
        this->nama = "";
    }

    Person(string nama)
    {
        this->nama = nama;
    }

    string getNama()
    {
        return this->nama;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    string toString()
    {
        return "Person: " + this->nama;
    }
};
