#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Febri Firmansyah, X TKJ 1. PTS
    //Soal PTS
    //Soal 1 Menghitung luas segitiga, 1/2*Alas*Tinggi
    printf("Febri Firmansyah, X Teknik Komputer dan jaringan 1\n");
    printf("Tugas PTS, Membuat macam-macam rumus dalam matematika\n");
    printf("Tips: agar program perjalan maksimal,  perhatikan note di setiap program\n");

    printf("==========================================================================");
    printf("\n");
    printf("==========================================================================");
    printf("\n");

    printf("Soal 1 Menghitung luas segitiga\n");
    //deklarasi
    int alassegitiga;
    int tinggisegitiga;
    float luassegitiga;
    //proses input
    printf("Note: Nilai harus bilangan bulat agar tidak terjadi bug!!!\n");
    printf("Masukan nilai alas = ");
    scanf("%d", &alassegitiga);
    printf("Masukan nilai tinggi = ");
    scanf("%d", &tinggisegitiga);
    //proses output
    luassegitiga = 0.5 * alassegitiga* tinggisegitiga;
    printf("Hasil dari 1/2 * %d * %d = %.1f cm\n", alassegitiga,tinggisegitiga,luassegitiga);

    printf("==========================================================================");
    printf("\n");
    printf("==========================================================================");
    printf("\n");

    //soal 2 menghitung sisi miring segitiga siku-siku c^2=a^2+b^2
    printf("Soal 2 menghitung sisi miring segitiga siku-siku\n");
    //deklarasi
    int a;
    int b;
    float c;
    //prosesinput
    printf("Note: Nilai harus bilangan bulat agar tidak terjadi bug!!!\n");
    printf("Note : Jawaban masih berupa bilangan desimal, belum berbenttuk akar\n");

    printf("Masukan nilai A = ");
    scanf("%d", &a);
    printf("Masukan nilai B = ");
    scanf("%d", &b);
    //prosesoutput
    c = sqrt((a*a)+(b*b));
    printf("Hasil dari c = /%d^2 + %d^2 = %.2f cm\n", a,b,c);
    printf("Note : / merupakan akar\n");


    printf("==========================================================================");
    printf("\n");
    printf("==========================================================================");
    printf("\n");

    //soal 3 membuat progeam untuk menghitung persegi panjang
    printf("soal 3 menghitung persegi panjang\n");
    //deklarasi
    int ppersegipanjang;
    int lepersegipanjang;
    int i;
    int kpersegipanjang;
    int lpersegipanjang;
    //pemilihan persegi mana yang akan di hitung dahulu
    printf("Memilih Keliling atau luas yang akan dihitung\n");
    printf("Jika keliling ketik 1, jika luas ketik 2 = ");
    scanf("%d", &i);
    //proesinput dan output
    printf("Note: Nilai harus bilangan bulat agar tidak terjadi bug!!!\n");
    if(i == 1){
    printf("Masukan nilai panjang = ");
    scanf("%d", &ppersegipanjang);
    printf("Masukan nilai lebar = ");
    scanf("%d", &lepersegipanjang);
    kpersegipanjang = ppersegipanjang + lepersegipanjang + ppersegipanjang + lepersegipanjang;
    printf("Hasil dari keliling persegi panjang 2 * (%d + %d) = %d cm\n", ppersegipanjang,lepersegipanjang,kpersegipanjang);
    }else if(i == 2){
    printf("Masukan nilai panjang = ");
    scanf("%d", &ppersegipanjang);
    printf("Masukan nilai lebar = ");
    scanf("%d", &lepersegipanjang);
    lpersegipanjang = ppersegipanjang * lepersegipanjang;
    printf("Hasil dari Luas persegi panjang %d * %d = %d cm\n", ppersegipanjang,lepersegipanjang,lpersegipanjang);
    }else{
    printf("Aduhhh dibilangin nilainya 1 dan 2 saja !!!\n");
    }

    printf("==========================================================================");
    printf("\n");
    printf("==========================================================================");
    printf("\n");

    //soal 4 membuat luas lingkaran
    printf("Soal 4 membuat luas lingkaran\n");
    //deklarasi
    int r;
    float phi = 3.14;
    float luaslingkaran;
    //input
    printf("Note: Nilai harus bilangan bulat agar tidak terjadi bug!!!\n");
    printf("Note: phi masih menggunakan yang 3.14\n");
    printf("Masukan nilai Jari-Jari = ");
    scanf("%d", &r);
    //output
    luaslingkaran = phi * r * r;
    printf("Hasil dari luas lingkaran %.2f * %d * %d = %.2f cm^2\n", phi,r,r,luaslingkaran);

    printf("==========================================================================");
    printf("\n");
    printf("==========================================================================");
    printf("\n");


    //soal 5 menentukan bilangan ganjil atau genap
    printf("soal 5 menentukan bil ganjil atau genap\n");
    //deklarasi
    int bilangan;
    //input
    printf("Note: Nilai harus bilangan bulat agar tidak terjadi bug!!!\n");
    printf("Coba masukan nilai nanti saya akan mencari nilai itu ganjil atau genap = ");
    scanf("%d", &bilangan);
    //output
    if(bilangan % 2 == 0){
        printf("Nilai %d merupakan bilangan genap\n", bilangan);
    }else{
        printf("Nilai %d merupakan bilangan ganjil\n", bilangan);
    }

    printf("==========================================================================");
    printf("\n");
    printf("==========================================================================");
    printf("\n");






    return 0;
}
