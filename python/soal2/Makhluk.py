'''
    Nama Program          : Makhluk.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
'''
class Makhluk:
    def __init__(self, nama, usia, habitat):
        self._nama = nama
        self._usia = usia
        self._habitat = habitat

    def setNama(self,nama):
        self._nama = nama

    def setUsia(self, usia):
        self._usia = usia

    def setHabitat(self, habitat):
        self._habitat = habitat

    def getNama(self):
        return self._nama

    def getUsia(self):
        return self._usia

    def getHabitat(self):
        return self._habitat

    def info(self):
        print("Suatu makhluk dengan nama " + self._nama + ". Dia berusia " + str(self._usia)
                + " tahun dan tinggal di " + self._habitat + '.')
