/*
    Nama Program          : Kucing.java
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/

public class Kucing extends Mamalia {
    private String merekMakanan;
    private String ras;

    public Kucing(String nama, int usia) {
        super(nama, usia, "Rumah Kamu");
        super.setJumlahKaki(4);
        super.setGolongan("Omnivora");
    }

    public void setMerekMakanan(String merekMakanan) {
        this.merekMakanan = merekMakanan;
    }

    public void setRas(String ras) {
        this.ras = ras;
    }

    public String getMerekMakanan() {
        return merekMakanan;
    }

    public String getRas() {
        return ras;
    }

    public void info() {
        super.info();
        System.out.println("Dia adalah kucing dengan ras " + this.ras + " dan makanan kesukaannya adalah dari "
                + this.merekMakanan + '.');
    }
}
