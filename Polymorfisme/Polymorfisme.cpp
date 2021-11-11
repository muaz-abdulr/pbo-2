#include <iostream>
#include <conio.h>
using namespace std;

class Makhluk
{
public:
    void desc()
    {
        cout << "==== Makhluk =====" << endl;
        cout << "Dapat Bernafas" << endl;
    }
};

class Mamalia : public Makhluk
{
public:
    void desc()
    {
        cout << "=== Mamalia ===" << endl;
        cout << "Menyusui" << endl;
    }
};

class Bertelur : public Makhluk
{
public:
    void desc()
    {
        cout << "=== Bertelur ==== " << endl;
        cout << "Bertelur" << endl;
    }
};

class Sapi : public Mamalia
{
public:
    void desc()
    {
        cout << "=== Sapi ===" << endl;
        cout << "Berkaki 4, Hitam-putih" << endl;
    }
};

class Ayam : public Bertelur
{
public:
    void desc()
    {
        cout << "=== Ayam ===" << endl;
        cout << "Berkaki 2, Merah" << endl;
    }
};

int main()
{
    //deklarasi objek
    Makhluk hewan;
    Mamalia mamalia;
    Bertelur bertelur;
    Sapi sapi;
    Ayam ayamKampung;

    hewan.desc();
    cout << endl;

    hewan = mamalia;
    mamalia.desc();

    hewan = sapi;
    sapi.desc();
    cout << endl;

    hewan = bertelur;
    bertelur.desc();

    hewan = ayamKampung;
    ayamKampung.desc();

    return 0;
}