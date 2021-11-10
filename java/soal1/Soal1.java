
/*
    Nama Program          : Soal1.java
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/
import java.util.Scanner;

public class Soal1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // test student
        Student mhs = new Student();
        mhs.inputMahasiswa(sc);
        mhs.outputMahasiswa();
        System.out.println("\n-------------\n");

        // test employee
        Employee emp = new Employee(1, "Andi");
        emp.setWaktuMasuk(new Waktu(7, 30, 0));
        emp.setWaktuPulang(new Waktu(17, 30, 0));
        emp.printInfo();

        sc.close();
    }
}