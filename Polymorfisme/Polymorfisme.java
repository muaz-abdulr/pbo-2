class Makhluk {
    public void desc() {
      System.out.println("\n=== Makhluk ===");
      System.out.println("Dapat Bernafas");
    }
  }
  
  class Mamalia extends Makhluk {
    public void desc() {
      System.out.println("\n=== Mamalia === ");
      System.out.println("Menyusui");
    }
  }
  
  class Bertelur extends Makhluk {
    public void desc() {
      System.out.println("\n=== Bertelur ===");
      System.out.println("Bertelur");
    }
  }
  
  class Sapi extends Mamalia {
    public void desc() {
      System.out.println("\n=== Sapi === ");
      System.out.println("Berkaki 4 , Hitam-Putih");
    }
  }
  
  class Ayam extends Bertelur {
    public void desc() {
      System.out.println("\n=== Ayam ===");
      System.out.println("Berkaki 2, Merah ");
    }
  }
  
  public class Polymorfisme {
    public static void main(String[] args) {
      Makhluk hewan;
      Mamalia mamalia;
      Sapi sapi;
  
      Bertelur bertelur;
      Ayam ayamKampung;
  
      hewan = new Makhluk();
      mamalia = new Mamalia();
      sapi = new Sapi();
      bertelur = new Bertelur();
      ayamKampung = new Ayam();
  
      hewan.desc();
  
      hewan = mamalia;
      hewan.desc();
  
      hewan = sapi;
      hewan.desc();
  
      hewan = bertelur;
      hewan.desc();
  
      hewan = ayamKampung;
      hewan.desc();
    }
  }