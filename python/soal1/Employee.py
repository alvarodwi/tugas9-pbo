'''
    Nama Program          : Employee.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
'''
from Person import Person
from SlipGaji import SlipGaji


class Employee(Person):
    def __init__(self, kodePegawai="", nama=""):
        super().__init__(nama)
        self.__kodePegawai = kodePegawai
        self.__slip = SlipGaji()

    def setWaktuMasuk(self, w):
        self.__slip.setWaktuMasuk(w)

    def setWaktuPulang(self, w):
        self.__slip.setWaktuPulang(w)

    def printInfo(self):
        self.__slip.hitungGaji()

        print(self.toString())
        self.__slip.printSlipGaji()

    def toString(self):
        return "KodePegawai\t: " + str(
            self.__kodePegawai) + "\nNama\t\t: " + self.getNama()
