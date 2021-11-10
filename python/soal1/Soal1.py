"""
    Nama Program          : Soal1.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 1/11/2021
"""
from Student import Student
from Employee import Employee
from Waktu import Waktu

ujang = Student()
ujang.inputMahasiswa()
ujang.outputMahasiswa()

print("\n-------------\n")

pegawai = Employee(1, "Udin")
pegawai.setWaktuMasuk(Waktu(7, 30, 0))
pegawai.setWaktuPulang(Waktu(17, 30, 0))
pegawai.printInfo()
