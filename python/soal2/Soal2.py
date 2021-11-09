'''
    Nama Program          : Soal2.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
'''

from Kucing import Kucing

kochenkOren = Kucing("Esmeralda", 3)
kochenkOren.setRas("Kampung")
kochenkOren.setMerekMakanan("Royal Canine")
# kochenkOren memanggil fungsi dari parent class
kochenkOren.setHabitat("area sekitar rumahmu")
# menampilkan info dari kochenkOren
kochenkOren.info()