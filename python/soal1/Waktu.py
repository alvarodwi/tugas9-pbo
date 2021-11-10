"""
    Nama Program          : Waktu.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 1/11/2021
"""


class Waktu:
    def __init__(self, jam=0, menit=0, detik=0):
        if (jam > 23 or menit > 59 or detik > 59):
            print("Kesalahan input waktu!")
            exit(0)
        else:
            self.__jam = jam
            self.__menit = menit
            self.__detik = detik

    #method
    def setJam(self, j):
        if (int(j) > 23):
            print("Kesalahan input waktu!")
            exit(0)
        self.__jam = int(j)

    def setMenit(self, m):
        if (int(m) > 59):
            print("Kesalahan input waktu!")
            exit(0)
        self.__menit = int(m)

    def setDetik(self, d):
        if (int(d) > 59):
            print("Kesalahan input waktu!")
            exit(0)
        self.__detik = int(d)

    def getJam(self):
        return self.__jam

    def getMenit(self):
        return self.__menit

    def getDetik(self):
        return self.__jam

    def hitungSelisih(self, akhir):
        temp = Waktu()
        temp.__jam = akhir.__jam - self.__jam
        temp.__menit = akhir.__menit - self.__menit
        if (temp.__menit < 0):
            temp.__menit = 60 + temp.__menit
            temp.__jam -= 1
        temp.__detik = akhir.__detik - self.__detik
        if (temp.__detik < 0):
            temp.__detik = abs(temp.__detik)
            temp.__menit -= 1
            if (temp.__menit < 0):
                temp.__menit = 60 + temp.__menit
                temp.__jam -= 1
        return temp

    def toString(self):
        return str(self.__jam) + ":" + str(self.__menit) + ":" + str(
            self.__detik)

    def printWaktu(self):
        return str(self.__jam) + " jam " + str(self.__menit) + " menit " + str(
            self.__detik) + " detik"
