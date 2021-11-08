
/*
    Nama Program          : HasilSidang.java
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/

public class HasilSidang {
    private float nilaiPenguji1;
    private float nilaiPenguji2;
    private float nilaiPembimbing;

    public HasilSidang() {
        nilaiPenguji1 = 0;
        nilaiPenguji2 = 0;
        nilaiPembimbing = 0;
    }

    public HasilSidang(float np1, float np2, float npemb) {
        nilaiPenguji1 = np1;
        nilaiPenguji2 = np2;
        nilaiPembimbing = npemb;
    }

    public void setHasilSidang(float np1, float np2, float npemb) {
        nilaiPenguji1 = np1;
        nilaiPenguji2 = np2;
        nilaiPembimbing = npemb;
    }

    public void setNilaiPenguji1(float nilai) {
        nilaiPenguji1 = nilai;
    }

    public void setNilaiPenguji2(float nilai) {
        nilaiPenguji2 = nilai;
    }

    public void setNilaiPembimbing(float nilai) {
        nilaiPembimbing = nilai;
    }

    public float getNilaiPenguji1() {
        return nilaiPenguji1;
    }

    public float getNilaiPenguji2() {
        return nilaiPenguji2;
    }

    public float getNilaiPembimbing() {
        return nilaiPembimbing;
    }

    public float hitungNilaiSidang() {
        return hitungNilaiPenguji(nilaiPenguji1) + hitungNilaiPenguji(nilaiPenguji2)
                + hitungNilaiPembimbing(nilaiPembimbing);
    }

    private float hitungNilaiPenguji(float nilai) {
        return nilai * 0.3f;
    }

    private float hitungNilaiPembimbing(float nilai) {
        return nilai * 0.4f;
    }

    public String konversiHurufMutu(float nilaiSidang) {
        String hm;
        if (nilaiSidang > 0 && nilaiSidang <= 60) {
            hm = "T";
        } else if (nilaiSidang > 60 && nilaiSidang <= 70) {
            hm = "C";
        } else if (nilaiSidang > 70 && nilaiSidang <= 80) {
            hm = "B";
        } else if (nilaiSidang > 80 && nilaiSidang <= 100) {
            hm = "A";
        } else {
            hm = "Nilai Tidak Valid!";
        }
        return hm;
    }

    public String cekKelulusan(float rerata) {
        return (rerata > 60 && rerata <= 100) ? "LULUS" : "TIDAK LULUS";
    }

    public void outputSidang() {
        float nilaiSidang = hitungNilaiSidang();
        System.out.println("Nilai Anda");
        System.out.println("  Nilai Penguji 1  : " + getNilaiPenguji1());
        System.out.println("  Nilai Penguji 2  : " + getNilaiPenguji2());
        System.out.println("  Nilai Pembimbing : " + getNilaiPembimbing());
        System.out.println();
        System.out.println("Nilai sidang Anda\t> " + nilaiSidang);
        System.out.println("Status Anda\t\t> " + cekKelulusan(nilaiSidang));
        System.out.println("Huruf mutu Anda\t\t> " + konversiHurufMutu(nilaiSidang));
    }
}
