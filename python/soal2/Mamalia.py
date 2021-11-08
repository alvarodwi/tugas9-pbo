'''
    Nama Program          : Mamalia.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
'''
from Makhluk import Makhluk

class Mamalia(Makhluk) :
    def __init__(self,nama, usia, habitat):
        super().__init__(nama,usia, habitat)
        

    def getJumlahKaki(self) :
        return self._jumlahKaki

    def getGolongan(self) :
        return self._golongan

    def setJumlahKaki(self, jumlahKaki) :
        self._jumlahKaki = jumlahKaki

    def setGolongan(self, golongan) :
        self._golongan = golongan

    def info(self) :
        super().info()
        print("Ternyata dia mamalia, dengan jumlah kaki " + str(self._jumlahKaki) + " dan termasuk hewan "
                + self._golongan + '.')