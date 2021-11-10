public class Employee extends Person {
    int kodePegawai;
    SlipGaji slip;

    public Employee(int kode, String nama) {
        super(nama);
        this.kodePegawai = kode;
        this.slip = new SlipGaji();
    }

    public void setWaktuMasuk(Waktu w) {
        this.slip.setWaktuMasuk(w);
    }

    public void setWaktuPulang(Waktu w) {
        this.slip.setWaktuPulang(w);
    }

    public void printInfo() {
        this.slip.hitungGaji();

        System.out.println(this);
        this.slip.printSlipGaji();
    }

    @Override
    public String toString() {
        return "KodePegawai\t: " + this.kodePegawai + "\nNama\t\t: " + super.nama;
    }
}
