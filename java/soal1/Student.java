
/*
    Nama Program          : Student.java
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/
import java.util.Scanner;

public class Student extends Person {
    private String npm;
    private HasilSidang hasil;

    public Student(String npm, String nama) {
        super(nama);
        this.npm = npm;
        this.hasil = new HasilSidang();
    }

    public Student() {
        super();
        this.hasil = new HasilSidang();
    }

    public String getNpm() {
        return this.npm;
    }

    public void setNpm(String npm) {
        this.npm = npm;
    }

    public void inputMahasiswa(Scanner sc) {
        System.out.print("Input NPM > ");
        setNpm(sc.nextLine());
        System.out.print("Input Nama > ");
        super.setNama(sc.nextLine());
        System.out.println();
        System.out.print("Input nilai penguji 1  > ");
        hasil.setNilaiPenguji1(sc.nextFloat());
        System.out.print("Input nilai penguji 2  > ");
        hasil.setNilaiPenguji2(sc.nextFloat());
        System.out.print("Input nilai pembimbing > ");
        hasil.setNilaiPembimbing(sc.nextFloat());
    }

    public void outputMahasiswa() {
        System.out.println("\nOUTPUT");
        System.out.println(this);
        hasil.outputSidang();
    }

    @Override
    public String toString() {
        return super.nama + " - " + this.npm;
    }
}
