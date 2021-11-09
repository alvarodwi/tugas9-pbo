/*
    Nama Program          : Student.cpp
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/

#include "Person.cpp"
#include <iostream>
#include <string>
#include "HasilSidang.cpp"
using namespace std;

class Student : public Person
{
private:
    string npm;
    HasilSidang hasil;

public:
    Student(string npm, string nama) : Person { nama }
    {
        this->npm = npm;
        this->hasil = HasilSidang();
    }

    Student()
    {
        this->hasil = HasilSidang();
    }

    string getNpm()
    {
        return this->npm;
    }

    void setNpm(string npm)
    {
        this->npm = npm;
    }

    void inputMahasiswa()
    {
        string npm, nama;
        float nilaiPenguji1, nilaiPenguji2, nilaiPemb;
        cout << "Input NPM > ";
        cin >> npm;
        setNpm(npm);
        cout << "Input Nama > ";
        cin >> nama;
        Person::setNama(nama);
        cout << endl;
        cout << "Input nilai penguji 1  > ";
        cin >> nilaiPenguji1;
        this->hasil.setNilaiPenguji1(nilaiPenguji1);
        cout << "Input nilai penguji 2  > ";
        cin >> nilaiPenguji2;
        this->hasil.setNilaiPenguji2(nilaiPenguji2);
        cout << "Input nilai pembimbing > ";
        cin >> nilaiPemb;
        this->hasil.setNilaiPembimbing(nilaiPemb);
    }

    void outputMahasiswa()
    {
        cout << "\nOUTPUT" << endl;
        cout << this->toString() << endl;
        hasil.outputSidang();
    }

    string toString()
    {
        return Person::nama + " - " + this->npm;
    }
};
