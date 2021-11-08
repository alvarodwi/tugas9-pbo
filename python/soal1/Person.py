'''
    Nama Program          : Person.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
'''
class Person:
    def __init__(self, nama = ""):
        self._nama = nama

    def getNama(self):
        return self._nama

    def setNama(self,nama):
        self._nama = nama
        
    def toString(self):
        return "Person: " + self._nama
