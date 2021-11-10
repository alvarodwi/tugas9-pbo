/*
Nama    : Alvaro Dwi Oktaviano
NPM     : 140810200041
*/

public class SlipGaji {
    private Waktu waktuMasuk;
    private Waktu waktuPulang;
    private Waktu lamaKerja;
    private int gaji;

    private boolean validasiWaktuPulang(Waktu w) {
        if (w.getJam() < waktuMasuk.getJam()) {
            return false;
        } else if (w.getJam() == waktuMasuk.getJam()) {
            if (w.getMenit() < waktuMasuk.getMenit()) {
                return false;
            } else if (w.getMenit() == waktuMasuk.getMenit()) {
                if (w.getDetik() < waktuMasuk.getDetik()) {
                    return false;
                }
            }
        }
        return true;
    }

    public void setWaktuMasuk(Waktu w) {
        this.waktuMasuk = w;
    }

    public void setWaktuPulang(Waktu w) {
        if (validasiWaktuPulang(w))
        {
            waktuPulang = w;
        }
        else
        {
            System.out.println("Input waktu pulang salah!");
            System.exit(0);
        }
    }

    public void hitungGaji() {
        this.lamaKerja = new Waktu();
        if (this.waktuMasuk.getJam() < 8 && this.waktuPulang.getJam() > 16) {
            this.lamaKerja.setJam(8);
        } else if (this.waktuMasuk.getJam() < 8 && this.waktuPulang.getJam() < 16) {
            this.lamaKerja = new Waktu(8, 0, 0).hitungSelisih(this.waktuPulang);
        } else if (this.waktuMasuk.getJam() > 8 && this.waktuPulang.getJam() > 16) {
            this.lamaKerja = this.waktuMasuk.hitungSelisih(new Waktu(16, 0, 0));
        } else if (this.waktuMasuk.getJam() > 8 && this.waktuPulang.getJam() < 16) {
            this.lamaKerja = this.waktuMasuk.hitungSelisih(this.waktuPulang);
        }
        this.gaji = this.lamaKerja.getJam() * 50000;
    }

    public void printSlipGaji() {
        System.out.println(".:: SLIP GAJI ::.");
        System.out.println("Jam Masuk\t: " + this.waktuMasuk);
        System.out.println("Jam Pulang\t: " + this.waktuPulang);
        System.out.println("Lama Kerja\t: " + this.lamaKerja.printWaktu());
        System.out.println("Gaji\t\t: Rp." + this.gaji);
    }
}
