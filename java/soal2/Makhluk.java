/*
    Nama Program          : Makhluk.java
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/

public class Makhluk {
    protected String nama;
    protected int usia;
    protected String habitat;

    public Makhluk(String nama, int usia, String habitat) {
        this.nama = nama;
        this.usia = usia;
        this.habitat = habitat;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setUsia(int usia) {
        this.usia = usia;
    }

    public void setHabitat(String habitat) {
        this.habitat = habitat;
    }

    public String getNama() {
        return nama;
    }

    public float getUsia() {
        return usia;
    }

    public String getHabitat() {
        return habitat;
    }

    public void info() {
        System.out.println("Suatu makhluk dengan nama " + this.nama + ". Dia berusia " + this.usia
                + " tahun dan tinggal di " + this.habitat + '.');
    }
}
