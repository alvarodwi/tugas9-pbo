/*
    Nama Program          : Mamalia.java
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/

public class Mamalia extends Makhluk {
    protected int jumlahKaki;
    protected String golongan;

    public Mamalia(String nama, int usia, String habitat) {
        super(nama, usia, habitat);
    }

    public int getJumlahKaki() {
        return jumlahKaki;
    }

    public String getGolongan() {
        return golongan;
    }

    public void setJumlahKaki(int jumlahKaki) {
        this.jumlahKaki = jumlahKaki;
    }

    public void setGolongan(String golongan) {
        this.golongan = golongan;
    }

    public void info() {
        super.info();
        System.out.println("Ternyata dia mamalia, dengan jumlah kaki " + this.jumlahKaki + " dan termasuk hewan "
                + this.golongan + '.');
    }
}
