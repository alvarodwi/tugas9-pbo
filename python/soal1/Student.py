'''
    Nama Program          : Student.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
'''
from Person import Person
from HasilSidang import HasilSidang

class Student(Person):
   
    def __init__(self, npm = "", nama = ""):
        super().__init__(nama)
        self.__npm = npm
        self.__hasil = HasilSidang()

    def getNpm(self):
        return self.__npm

    def setNpm(self,npm):
        self.__npm = npm

    def inputMahasiswa(self):
        self.setNpm(input("Input NPM > "))
        self.setNama(input("Input Nama > "))
        print()
        self.__hasil.setNilaiPenguji1(input("Input nilai penguji 1\t> "))
        self.__hasil.setNilaiPenguji2(input("Input nilai penguji 2\t> "))
        self.__hasil.setNilaiPembimbing(input("Input nilai pembimbing\t> "))

    def outputMahasiswa(self):
        print("\nOUTPUT")
        print(self.toString())
        self.__hasil.outputSidang()

    def toString(self):
        return self._nama + " - " + self.__npm
