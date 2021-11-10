"""
    Nama Program          : SlipGaji.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 1/11/2021
"""
from Waktu import Waktu


class SlipGaji:
    def __init__(self, wm=Waktu(), wp=Waktu(), wk=Waktu(), gaji=0):
        self.__waktuMasuk = wm
        self.__waktuPulang = wp
        self.__lamaKerja = wk
        self.__gaji = gaji

    def __validasiWaktuPulang(self, w):
        if (w.getJam() < self.__waktuMasuk.getJam()):
            return False
        elif (w.getJam() == self.__waktuMasuk.getJam()):
            if (w.getMenit() < self.__waktuMasuk.getMenit()):
                return False
            elif (w.getMenit() == self.__waktuMasuk.getMenit()):
                if (w.getDetik() == self.__waktuMasuk.getDetik()):
                    return False
        return True

    def setWaktuMasuk(self, w):
        self.__waktuMasuk = w

    def setWaktuPulang(self, w):
        if (self.__validasiWaktuPulang(w)):
            self.__waktuPulang = w
        else:
            print("Input waktu pulang salah!")
            exit(0)

    def hitungGaji(self):
        if (self.__waktuMasuk.getJam() < 8
                and self.__waktuPulang.getJam() > 16):
            self.__lamaKerja.setJam(8)
        elif (self.__waktuMasuk.getJam() < 8
              and self.__waktuPulang.getJam() < 16):
            self.__lamaKerja = Waktu(8, 0, 0).hitungSelisih(self.__waktuPulang)
        elif (self.__waktuMasuk.getJam() > 8
              and self.__waktuPulang.getJam() > 16):
            self.__lamaKerja = self.__waktuMasuk.hitungSelisih(Waktu(16, 0, 0))
        elif (self.__waktuMasuk.getJam() > 8
              and self.__waktuPulang.getJam() < 16):
            self.__lamaKerja = self.__waktuMasuk.hitungSelisih(
                self.__waktuPulang)
        self.__gaji = self.__lamaKerja.getJam() * 50000

    def printSlipGaji(self):
        print(".:: SLIP GAJI ::.")
        print("Jam Masuk\t: " + self.__waktuMasuk.toString())
        print("Jam Pulang\t: " + self.__waktuPulang.toString())
        print("Lama Kerja\t: " + self.__lamaKerja.toString())
        print("Gaji\t\t: Rp." + str(self.__gaji))