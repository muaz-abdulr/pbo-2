class Makhluk:
    def desc(self):
        print("\n=== Makhluk ===")
        print("Dapat bernafas")


class Mamalia(Makhluk):
    def desc(self):
        print("\n=== Mamalia ===")
        print("Menyusui")


class Sapi(Mamalia):
    def desc(self):
        print("\n=== Sapi ===")
        print("Berkaki 4 , Hitam-Putih")


class Bertelur(Makhluk):
    def desc(self):
        print("\n=== Bertelur ===")
        print("Bertelur")


class Ayam(Bertelur):
    def desc(self):
        print("\n=== Ayam ===")
        print("Berkaki 2 , Merah")


hewan = Makhluk()
mamalia = Mamalia()
sapi = Sapi()
bertelur = Bertelur()
ayamKampung = Ayam()


hewan.desc()
mamalia.desc()
sapi.desc()
bertelur.desc()
ayamKampung.desc()
