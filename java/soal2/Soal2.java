/*
    Nama Program          : Soal2.java
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 8/11/2021
*/

public class Soal2 {
    public static void main(String[] args) {
        Makhluk kochenkOren = new Kucing("Esmeralda", 3);
        ((Kucing) kochenkOren).setRas("Kampung");
        ((Kucing) kochenkOren).setMerekMakanan("Royal Canine");

        kochenkOren.info();
    }
}
