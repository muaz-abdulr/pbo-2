class Person:
    def __init__(self, nama=''):
        self._nama = nama

    def setNama(self, nama):
        self._nama = nama

    def getNama(self):
        return self._nama

    def inputNama(self):
        nama = input('Nama : ')
        self._nama = nama


class Student(Person):
    def __init__(self, nama='', NPM='', penguji1=0, penguji2=0, pembimbing=0, hurufMutu='', keterangan='', nilaiSidang=0):
        super().__init__(nama)
        self.__NPM = NPM
        self.__penguji1 = penguji1
        self.__penguji2 = penguji2
        self.__pembimbing = pembimbing
        self.__hurufMutu = hurufMutu
        self.__keterangan = keterangan
        self.__nilaiSidang = nilaiSidang

    def setNama(self, nama):
        super().setNama(nama)

    def setNPM(self, NPM):
        self.__NPM = NPM

    def setPenguji1(self, penguji1):
        self.__penguji1 = penguji1

    def setPenguji2(self, penguji2):
        self.__penguji2 = penguji2

    def setPembimbing(self, pembimbing):
        self.__pembimbing = pembimbing

    def getNama(self):
        return super().getNama()

    def getNPM(self):
        return self.__NPM

    def getPenguji1(self):
        return self.__penguji1

    def getPenguji2(self):
        return self.__penguji2

    def getPembimbing(self):
        return self.__pembimbing

    def getKeterangan(self):
        self.__hasilKeterangan()
        return self.__keterangan

    def getNilaiSidang(self):
        self.__hitungNilaiSidang()
        return self.__nilaiSidang

    def getHurufMutu(self):
        self.__hitungNilaiMutu()
        return self.__hurufMutu

    def __hitungNilaiSidang(self):
        self.__nilaiSidang = float(
            0.3 * self.__penguji1 + 0.3 * self.__penguji2 + 0.4 * self.__pembimbing)

    def __hitungNilaiMutu(self):
        if self.__nilaiSidang <= 100 and self.__nilaiSidang > 80:
            self.__hurufMutu = 'A'
        elif self.__nilaiSidang <= 80 and self.__nilaiSidang > 70:
            self.__hurufMutu = 'B'
        elif self.__nilaiSidang <= 70 and self.__nilaiSidang > 60:
            self.__hurufMutu = 'C'
        elif self.__nilaiSidang <= 60 and self.__nilaiSidang > 0:
            self.__hurufMutu = 'T'

    def __hasilKeterangan(self):
        if self.__hurufMutu == 'A' or self.__hurufMutu == 'B' or self.__hurufMutu == 'C':
            self.__keterangan = 'Lulus'
        else:
            self.__keterangan = 'Tidak Lulus'

    def inputData(self):
        NPM = input("Masukkan NPM : ")
        super().inputNama()
        penguji1 = float(input("Masukkan nilai penguji 1 : "))
        penguji2 = float(input("Masukkan nilai penguji 2 : "))
        pembimbing = float(input("Masukkan nilai pembimbing : "))
        self.__NPM = NPM
        self.__penguji1 = penguji1
        self.__penguji2 = penguji2
        self.__pembimbing = pembimbing

    def outputData(self):
        self.__hitungNilaiSidang()
        self.__hitungNilaiMutu()
        self.__hasilKeterangan()

        print('\nHasil Sidang')
        print('NPM              :', self.getNPM())
        print('Nama             :', super().getNama())
        print('Nilai Penguji 1  :', self.getPenguji1())
        print('Nilai Penguji 2  :', self.getPenguji2())
        print('Nilai Pembimbing :', self.getPembimbing())
        print('Nilai Sidang     :', self.getNilaiSidang())
        print('Huruf Mutu       :', self.getHurufMutu())
        print('Keterangan       :', self.getKeterangan())


mhs1 = Student('', '', 0, 0, 0, '', '', 0)
mhs1.setNPM('140810200069')
mhs1.setNama('Otong')
mhs1.setPenguji1(90)
mhs1.setPenguji2(85)
mhs1.setPembimbing(75)
print('\nHasil Sidang')
print('NPM              :', mhs1.getNPM())
print('Nama             :', mhs1.getNama())
print('Nilai Penguji 1  :', mhs1.getPenguji1())
print('Nilai Penguji 2  :', mhs1.getPenguji2())
print('Nilai Pembimbing :', mhs1.getPembimbing())
print('Nilai Sidang     :', mhs1.getNilaiSidang())
print('Huruf Mutu       :', mhs1.getHurufMutu())
print('Keterangan       :', mhs1.getKeterangan(), '\n')


mhs2 = Student('', '', 0, 0, 0, '', '', 0)
mhs2.inputData()
mhs2.outputData()


mhs3 = Student('contoh', '140810200099', 40, 40, 40, '', '', 0)
mhs3.outputData()
