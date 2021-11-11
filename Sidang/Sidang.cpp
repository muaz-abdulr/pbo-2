
#include <iostream>

using namespace std;

class Person
{
protected:
    string nama;

public:
    Person()
    {
        this->nama = "";
    }
    Person(string nama)
    {
        this->nama = nama;
    }
    void inputNama()
    {
        cin >> this->nama;
    }
    void setNamaPerson(string nama)
    {
        this->nama = nama;
    }
    string getNamaPerson()
    {
        return this->nama;
    }
};

class Student : public Person
{
private:
    string npm;
    float penguji1;
    float penguji2;
    float pembimbing;
    float nilaiSidang;
    char hurufMutu;
    string keterangan;
    void hitungNilaiSidang()
    {
        this->nilaiSidang = (0.3 * this->penguji1) + (0.3 * this->penguji2) + (0.4 * this->pembimbing);
    }
    void hasilHurufMutu()
    {
        if (this->nilaiSidang <= 100 && this->nilaiSidang > 80)
        {
            this->hurufMutu = 'A';
        }
        else if (this->nilaiSidang <= 80 && this->nilaiSidang > 70)
        {
            this->hurufMutu = 'B';
        }
        else if (this->nilaiSidang <= 70 && this->nilaiSidang > 60)
        {
            this->hurufMutu = 'C';
        }
        else if (this->nilaiSidang <= 60 && this->nilaiSidang > 0)
        {
            this->hurufMutu = 'T';
        }
    }
    void hasilKeterangan()
    {
        if (this->hurufMutu == 'A' || this->hurufMutu == 'B' || this->hurufMutu == 'C')
        {
            this->keterangan = "Lulus";
        }
        else
        {
            this->keterangan = "Tidak Lulus";
        }
    }

public:
    Student()
    {
        this->npm = "";
        this->penguji1 = 0;
        this->penguji2 = 0;
        this->pembimbing = 0;
    }
    Student(string nama, string npm, float penguji1, float penguji2, float pembimbing)
    {
        this->nama = nama;
        this->npm = npm;
        this->penguji1 = penguji1;
        this->penguji2 = penguji2;
        this->pembimbing = pembimbing;
    }
    void setNama(string nama)
    {
        setNamaPerson(nama);
    }
    void setNPM(string npm)
    {
        this->npm = npm;
    }
    void setPenguji1(float nilai)
    {
        this->penguji1 = nilai;
    }
    void setPenguji2(float nilai)
    {
        this->penguji2 = nilai;
    }
    void setPembimbing(float nilai)
    {
        this->pembimbing = nilai;
    }
    string getNama()
    {
        return this->nama;
    }
    string getNPM()
    {
        return this->npm;
    }
    float getPenguji1()
    {
        return this->penguji1;
    }
    float getPenguji2()
    {
        return this->penguji2;
    }
    float getPembimbing()
    {
        return this->pembimbing;
    }
    float getNilaiSidang()
    {
        hitungNilaiSidang();
        return this->nilaiSidang;
    }
    char getHurufMutu()
    {
        hasilHurufMutu();
        return this->hurufMutu;
    }
    string getKeterangan()
    {
        hasilKeterangan();
        return this->keterangan;
    }
    void inputData()
    {
        cout << "Input data Sidang\n";
        cout << "Nama Mahasiswa\t\t:";
        inputNama();
        cout << "NPM\t\t\t: ";
        cin >> this->npm;
        cout << "Nilai Penguji 1\t\t: ";
        cin >> this->penguji1;
        cout << "Nilai Penguji 2\t\t: ";
        cin >> this->penguji2;
        cout << "Nilai Pembimbing\t: ";
        cin >> this->pembimbing;
    }
    void outputData()
    {
        hitungNilaiSidang();
        hasilHurufMutu();
        hasilKeterangan();
        cout << "Hasil Sidang\n";
        cout << "NPM\t\t\t: " << this->npm << '\n';
        cout << "Nama\t\t\t: " << this->nama << '\n';
        cout << "Nilai Penguji 1\t\t: " << this->penguji1 << '\n';
        cout << "Nilai Penguji 2\t\t: " << this->penguji2 << '\n';
        cout << "Nilai Pembimbing\t: " << this->pembimbing << '\n';
        cout << "Nilai Sidang\t\t: " << this->nilaiSidang << '\n';
        cout << "Huruf Mutu\t\t: " << this->hurufMutu << '\n';
        cout << "Keterangan\t\t: " << this->keterangan << '\n';
    }
};

int main()
{
    Student mhs1;
    mhs1.setNama("Otong");
    mhs1.setNPM("140810200069");
    mhs1.setPenguji1(85);
    mhs1.setPenguji2(90);
    mhs1.setPembimbing(75);
    cout << "Hasil Sidang\n";
    cout << "NPM\t\t\t: " << mhs1.getNPM() << '\n';
    cout << "Nama\t\t\t: " << mhs1.getNama() << '\n';
    cout << "Nilai Penguji 1\t\t: " << mhs1.getPenguji1() << '\n';
    cout << "Nilai Penguji 2\t\t: " << mhs1.getPenguji2() << '\n';
    cout << "Nilai Pembimbing\t: " << mhs1.getPembimbing() << '\n';
    cout << "Nilai Sidang\t\t: " << mhs1.getNilaiSidang() << '\n';
    cout << "Huruf Mutu\t\t: " << mhs1.getHurufMutu() << '\n';
    cout << "Keterangan\t\t: " << mhs1.getKeterangan() << '\n';

    Student mhs2;
    mhs2.inputData();
    mhs2.outputData();

    Student mhs3("contoh", "140810200099", 40, 40, 40);
    mhs3.outputData();
}