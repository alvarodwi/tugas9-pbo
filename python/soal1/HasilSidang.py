'''
    Nama Program          : HasilSidang.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
'''
class HasilSidang:
    def __init__(
            self,
            np1 = 0.0,
            np2 = 0.0,
            npb = 0.0
        ):
        self.__nilaiPenguji1 = np1
        self.__nilaiPenguji2 = np2
        self.__nilaiPembimbing = npb

    def __hitungNilaiPenguji(self, nilai):
        return float(nilai) * 0.3

    def __hitungNilaiPembimbing(self, nilai):
        return float(nilai) * 0.4

    def setHasilSidang(self,np1,np2,npb):
        self.__nilaiPenguji1 = np1
        self.__nilaiPenguji2 = np2
        self.__nilaiPembimbing = npb

    def setNilaiPenguji1(self,nilai):
        self.__nilaiPenguji1 = nilai

    def setNilaiPenguji2(self,nilai):
        self.__nilaiPenguji2 = nilai

    def setNilaiPembimbing(self,nilai):
        self.__nilaiPembimbing = nilai

    def getNilaiPenguji1(self):
        return self.__nilaiPenguji1

    def getNilaiPenguji2(self):
        return self.__nilaiPenguji2

    def getNilaiPembimbing(self):
        return self.__nilaiPembimbing

    def hitungNilaiSidang(self):
        return self.__hitungNilaiPenguji(self.__nilaiPenguji1) + self.__hitungNilaiPenguji(self.__nilaiPenguji2) + self.__hitungNilaiPembimbing(self.__nilaiPembimbing)

    def konversiHurufMutu(self,nilaiSidang):
        hm = ""
        if (nilaiSidang > 0 and nilaiSidang <= 60):
            hm = "T"
        elif (nilaiSidang > 60 and nilaiSidang <= 70):
            hm = "C"
        elif (nilaiSidang > 70 and nilaiSidang <= 80):
            hm = "B"
        elif (nilaiSidang > 80 and nilaiSidang <= 100):
            hm = "A"
        else:
            hm = "Nilai Tidak Valid!"
        return hm

    def cekKelulusan(self, rerata):
        return "LULUS" if (rerata > 60 and rerata <= 100) else "TIDAK LULUS"

    def inputNilai(self):
        self.__nilaiPenguji1 = input("Input nilai penguji 1\t> ")
        self.__nilaiPenguji2 = input("Input nilai penguji 2\t> ")
        self.__nilaiPembimbing = input("Input nilai pembimbing\t> ")

    def outputSidang(self):
        nilaiSidang = self.hitungNilaiSidang()
        print("\nOUTPUT")
        print("Nilai Anda")
        print("  Nilai Penguji 1  : " + str(self.getNilaiPenguji1()))
        print("  Nilai Penguji 2  : " + str(self.getNilaiPenguji2()))
        print("  Nilai Pembimbing : " + str(self.getNilaiPembimbing()))
        print()
        print("Nilai sidang Anda\t> " + str(nilaiSidang))
        print("Status Anda\t\t> " + self.cekKelulusan(nilaiSidang))
        print("Huruf mutu Anda\t\t> " + self.konversiHurufMutu(nilaiSidang))