import java.util.Scanner;

class Person {
    protected String nama;

    public Person() {
        this.nama = "";
    }

    public Person(String nama) {
        this.nama = nama;
    }

    public void inputNama() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nama Mahasiswa : ");
        this.nama = sc.nextLine();
    }

    public void setNamaPerson(String nama) {
        this.nama = nama;
    }

    public String getNamaPerson() {
        return this.nama;
    }

}

class Student extends Person {
    private String NPM;
    private float penguji1;
    private float penguji2;
    private float pembimbing;
    private float nilaiSidang;
    private char hurufMutu;
    private String keterangan;

    public Student() {
        super();
        this.NPM = "";
        this.penguji1 = 0;
        this.penguji2 = 0;
    }

    public Student(String nama, String NPM, float penguji1, float penguji2, float pembimbing) {
        super(nama);
        this.NPM = NPM;
        this.penguji1 = penguji1;
        this.penguji2 = penguji2;
        this.pembimbing = pembimbing;
    }

    public void setNama(String nama) {
        super.setNamaPerson(nama);
    }

    public void setNPM(String NPM) {
        this.NPM = NPM;
    }

    public void setPenguji1(float penguji1) {
        this.penguji1 = penguji1;
    }

    public void setPenguji2(float penguji2) {
        this.penguji2 = penguji2;
    }

    public void setPembimbing(float pembimbing) {
        this.pembimbing = pembimbing;
    }

    public String getNama() {
        return super.getNamaPerson();
    }

    public String getNPM() {
        return this.NPM;
    }

    public float getPenguji1() {
        return this.penguji1;
    }

    public float getPenguji2() {
        return this.penguji2;
    }

    public float getPembimbing() {
        return this.pembimbing;
    }

    public float getNilaiSidang() {
        hitungNilaiSidang();
        return this.nilaiSidang;
    }

    public char getHurufMutu() {
        hasilHurufMutu();
        return this.hurufMutu;
    }

    public String getKeterangan() {
        hasilKeterangan();
        return this.keterangan;
    }

    private void hitungNilaiSidang() {
        this.nilaiSidang = (float) (0.3 * penguji1 + 0.3 * penguji2 + 0.4 * pembimbing);
    }

    private void hasilHurufMutu() {
        if (this.nilaiSidang <= 100 && this.nilaiSidang > 80) {
            this.hurufMutu = 'A';
        } else if (this.nilaiSidang <= 80 && this.nilaiSidang > 70) {
            this.hurufMutu = 'B';
        } else if (this.nilaiSidang <= 70 && this.nilaiSidang > 60) {
            this.hurufMutu = 'C';
        } else if (this.nilaiSidang <= 60 && this.nilaiSidang > 0) {
            this.hurufMutu = 'T';
        }
    }

    private void hasilKeterangan() {
        if (this.hurufMutu == 'A' || this.hurufMutu == 'B' || this.hurufMutu == 'C') {
            this.keterangan = "Lulus";
        } else {
            this.keterangan = "Tidak Lulus";
        }
    }

    public void inputData() {
        System.out.println("Input Data Sidang");
        Scanner sc = new Scanner(System.in);

        super.inputNama();
        System.out.print("NPM              : ");
        this.NPM = sc.nextLine();
        System.out.print("Nilai Penguji 1  : ");
        this.penguji1 = sc.nextFloat();
        System.out.print("Nilai Penguji 2  : ");
        this.penguji2 = sc.nextFloat();
        System.out.print("Nilai Pembimbing : ");
        this.pembimbing = sc.nextFloat();
    }

    public void outputData() {
        hitungNilaiSidang();
        hasilHurufMutu();
        hasilKeterangan();
        System.out.println("\nHasil Sidang");
        System.out.println("NPM              : " + this.NPM);
        System.out.println("Nama             : " + getNama());
        System.out.println("Nilai Penguji 1  : " + this.penguji1);
        System.out.println("Nilai Penguji 2  : " + this.penguji2);
        System.out.println("Nilai Pembimbing : " + this.pembimbing);
        System.out.println("Nilai Sidang     : " + this.nilaiSidang);
        System.out.println("Huruf Mutu       : " + this.hurufMutu);
        System.out.println("Keterangan       : " + this.keterangan);
    }
}

class Sidang {
    public static void main(String[] args) {
        Student mhs1 = new Student();
        mhs1.setNama("Otong");
        mhs1.setNPM("140810200069");
        mhs1.setPenguji1(85);
        mhs1.setPenguji2(90);
        mhs1.setPembimbing(75);
        System.out.println("NPM              : " + mhs1.getNPM());
        System.out.println("Nama             : " + mhs1.getNama());
        System.out.println("Nilai Penguji 1  : " + mhs1.getPenguji1());
        System.out.println("Nilai Penguji 2  : " + mhs1.getPenguji2());
        System.out.println("Nilai Pembimbing : " + mhs1.getPembimbing());
        System.out.println("Nilai Sidang     : " + mhs1.getNilaiSidang());
        System.out.println("Huruf Mutu       : " + mhs1.getHurufMutu());
        System.out.println("Keterangan       : " + mhs1.getKeterangan());

        Student mhs2 = new Student();
        mhs2.inputData();
        mhs2.outputData();

        Student mhs3 = new Student("contoh","140810200099", 40,40,40);
        mhs3.outputData();

    }
}