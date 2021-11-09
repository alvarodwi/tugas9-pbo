'''
    Nama Program          : Kucing.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
'''
from Mamalia import Mamalia


class Kucing(Mamalia):
    def __init__(self, nama, usia):
        super().__init__(nama, usia, "Rumah Kamu")
        super().setJumlahKaki(4)
        super().setGolongan("Omnivora")

    def setMerekMakanan(self, merekMakanan):
        self.__merekMakanan = merekMakanan

    def setRas(self, ras):
        self.__ras = ras

    def getMerekMakanan(self):
        return self.__merekMakanan

    def getRas(self):
        return self.__ras

    def info(self):
        super().info()
        print("Dia adalah kucing dengan ras " + self.__ras +
              " dan makanan kesukaannya adalah " + self.__merekMakanan + '.')
