
/*
Nama    : Alvaro Dwi Oktaviano
NPM     : 140810200041
*/
import java.lang.Math;

public class Waktu {
    private int jam;
    private int menit;
    private int detik;

    public Waktu() {
        this.jam = 0;
        this.menit = 0;
        this.detik = 0;
    }

    public Waktu(int jam, int menit, int detik) {
        if (jam < 0 || menit < 0 || detik < 0) {
            System.out.println("Kesalahan input waktu!");
            System.exit(0);
        }
        if (jam > 23 || menit > 59 || detik > 59) {
            System.out.println("Kesalahan input waktu!");
            System.exit(0);
        }
        this.jam = jam;
        this.menit = menit;
        this.detik = detik;
    }

    public void setJam(int jam) {
        if (jam > 23 || jam < 0) {
            System.out.println("Kesalahan input waktu!");
            System.exit(0);
        }
        this.jam = jam;
    }

    public void setMenit(int menit) {
        if (menit < 0 || menit > 59) {
            System.out.println("Kesalahan input waktu!");
            System.exit(0);
        }
        this.menit = menit;
    }

    public void setDetik(int detik) {
        if (detik < 0 || detik > 59) {
            System.out.println("Kesalahan input waktu!");
            System.exit(0);
        }
        this.detik = detik;
    }

    public int getJam() {
        return this.jam;
    }

    public int getMenit() {
        return this.menit;
    }

    public int getDetik() {
        return this.detik;
    }

    public Waktu hitungSelisih(Waktu akhir) {
        Waktu temp = new Waktu();
        temp.jam = akhir.jam - this.jam;
        temp.menit = akhir.menit - this.menit;
        if (temp.menit < 0) {
            temp.menit = 60 + temp.menit;
            temp.jam--;
        }
        temp.detik = akhir.detik - this.detik;
        if (temp.detik < 0) {
            temp.detik = Math.abs(temp.detik);
            temp.menit--;
            if (temp.menit < 0) {
                temp.menit = 60 + temp.menit;
                temp.jam--;
            }
        }
        return temp;
    }

    @Override
    public String toString() {
        return this.jam + ":" + this.menit + ":" + this.detik;
    }

    public String printWaktu() {
        return this.jam + " jam " + this.menit + " menit " + this.detik + " detik";
    }
}
