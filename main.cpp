#include <iostream>// library untuk cin cout
#include <windows.h>// library untuk menjalankan system dan sleep
#include <ios>// library untuk memanggil fungsi <streamsize>
#include <limits>// library untuk menjalankan cin ignore limits

using namespace std;// untuk meringkas program
// deklarasi variabel global yang digunakan
string daftar[] = {"Bukit Tranggulasih", "Caping Park", "Curug Gomblang", "Galery Water Park Karangmangu",
                   "Hutan Pinus", "Lokawisata Baturaden", "Pagubugan Melung", "Small World", "The Village"};
int x3;
int weekday[9] = {3000, 20000, 10000, 15000, 10000, 14000, 5000, 20000, 23000};
int weekend[9] = {3000, 25000, 10000, 20000, 10000, 14000, 5000, 25000, 23000};
int p = 9;
string daftar2[9] = {"Bukit Tranggulasih", "Pagubugan Melung", "Curug Gomblang", "Hutan Pinus", "Lokawisata Baturaden",
                         "Galery Waterpark Karangmangu", "Small World", "Caping Park", "The Village"};
string daftar3[9] = {"Bukit Tranggulasih", "Pagubugan Melung", "Curug Gomblang", "Hutan Pinus", "Lokawisata Baturaden",
                         "Galery Waterpark Karangmangu", "The Village", "Caping Park", "Small World"};
string k;
// daftar prosedur yang digunakan untuk menjalankan program
void cari();
void menu(int x1, int x2);
void loading();
void ulang();
void bukit();
void caping_park();
void curug_gomblang();
void gallery_water_karangmangu();
void hutan_pinus();
void Lokawisata_Baturaden();
void Pagubugan_Melung();
void Small_World();
void The_Village();
void htm();
void closing();

// prosedur untuk loading
void loading()
{
    cout << "\n";
    cout << "\t\t\t\tMemulai Program";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\t\tLoading";
    for(int i=0; i<20; i++)
    {
        cout << ". ";
        Sleep(100);
    }
    cout << endl;
system("cls");
}
// fungsi untuk pencarian nama wisata berjenis binary
int binary(string daftar[], int p, string k)
{
    int atas, bawah, tengah, posisi;
    bool ada;

    ada = false;
    bawah = p-1;
    atas = 0;
    posisi = -1;

    while (atas <= bawah)
    {
        tengah = (atas + bawah)/2;
        if (k == daftar[tengah])
        {
            posisi = tengah;
            break;
        }
    else if(k < daftar[tengah]) bawah = tengah - 1;
    else atas = tengah + 1;
    }
    return posisi;
}

// prosedur untuk melakukan pencarian nama wisata
void cari()
{
    for (int i=0; i<9; i++)
    {
        cout << daftar[i] << endl;
    }
    cout << endl;
    cout << "Ketik nama : ";
    getline(cin, k);
    cout << endl;

    int posisi = binary(daftar, p, k);

    if (posisi != -1)
    {
        cout << k << " Terletak pada indeks ke "<<posisi<<endl;
    } else
    {
        cout << k << " Tidak ditemukan "<<endl;
    }
}
// prosedur daftar menu pada aplikasi
void menu(int x1, int x2, int p)
{
    system("cls");// untuk menghapus output pada cmd
    cout << "================================ \n";Sleep(100);// sebagai timer untuk memperlambat menampilkan output pada cmd dengan satuan detik
    cout << "= SELAMAT DATANG DI PURWOKERTO = \n";Sleep(100);
    cout << "================================ \n";Sleep(100);
    cout << "= 1. Pencarian                 = \n";Sleep(100);
    cout << "= 2. Wisata                    = \n";Sleep(100);
    cout << "= 3. HTM                       = \n";Sleep(100);
    cout << "= 4. Keluar                    = \n";Sleep(100);
    cout << "================================ \n";Sleep(100);
    cout << "Masukkan Pilihan : ";cin >> x1;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;

    switch(x1)
    {
    case 1:
        system("cls");
        cari();
        ulang();
        break;
    case 2 : // daftra menu nama tempat wisata daerah purwokerto
        system("cls");
        cout << "===================================== \n";Sleep(100);
        cout << "= Berikut daftar tempat wisata      = \n";Sleep(100);
        cout << "===================================== \n";Sleep(100);
        cout << "= 1. Bukit Tranggulasih             = \n";Sleep(100);
        cout << "= 2. Caping Park                    = \n";Sleep(100);
        cout << "= 3. Curug Gomblang                 = \n";Sleep(100);
        cout << "= 4. Galery Waterpasrk Karangmangu  = \n";Sleep(100);
        cout << "= 5. Hutan Pinus                    = \n";Sleep(100);
        cout << "= 6. Lokawisata Baturaden           = \n";Sleep(100);
        cout << "= 7. Pagubugan Melung               = \n";Sleep(100);
        cout << "= 8. Small World                    = \n";Sleep(100);
        cout << "= 9. The Village                   = \n";Sleep(100);
        cout << "===================================== \n";Sleep(100);
        cout << "Pilihan tempat wisata : "; cin >> x2;
        cout << endl;

        switch(x2)
        {
            case 1:
                system("cls");
                bukit();
                cout << "\n";
                ulang();
                break;
            case 2:
                system("cls");
                caping_park();
                cout << "\n";
                ulang();
                break;
            case 3:
                system("cls");
                curug_gomblang();
                cout << "\n";
                ulang();
                break;
            case 4:
                system("cls");
                gallery_water_karangmangu();
                cout << "\n";
                ulang();
                break;
            case 5:
                system("cls");
                hutan_pinus();
                cout << "\n";
                ulang();
                break;
            case 6:
                system("cls");
                Lokawisata_Baturaden();
                cout << "\n";
                ulang();
                break;
            case 7:
                system("cls");
                Pagubugan_Melung();
                cout << "\n";
                ulang();
                break;
            case 8:
                system("cls");
                Small_World();
                cout << "\n";
                ulang();
                break;
            case 9:
                system("cls");
                The_Village();
                cout << "\n";
                ulang();
                break;
            default:
                system("cls");
                cout << endl;
                cout << "\t \t Pilihan yang anda minta tidak tersedia";
                cout << endl;
                Sleep(100);
                cout << endl;
                ulang();
        }break;

        case 3:
        system("cls");
        htm();
        break;

        case 4:
        system("cls");
        closing();
        break;

    default:
        cout << "Pilihan yang anda minta tidak tersedia \n";
        Sleep(500);
        system("cls");
        menu(x1, x2, p);
        break;
    }

}
// prosedur unruk pengulangan kembali ke menu atau keluar program
void ulang()
{
    int x1, x2, p;
    char pilih;
    cout << endl;
    cout << "Inputkan [Y] untuk kembali ke menu."<<endl;
    cout << "Inputkan [T] untuk keluar program."<<endl;
    cout << "[Y/T]...? : ";
    cin >> pilih;
    if(pilih=='Y' || pilih=='y')
    {
        menu(x1, x2, p);
    }
    else if(pilih=='T' || pilih=='t')
    {
        closing();
    }
    else
    {
        system("cls");
        cout << endl;
        cout << "\t \t  Silahkan ulang kembali  "<<endl;
        cout << endl;
    }
}
// prosedur informasi mengenai tempat wisata
void bukit()
{
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": Bukit Tranggulasih                                                                     :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": ALAMAT :                                                                               :\n";Sleep(100);
    cout << ": Windujaya, Kedungbanteng, Dusun III, Windujaya, Kab. Banyumas, Jawa Tengah 53152       :\n";Sleep(100);
    cout << ":                                                                                        :\n";Sleep(100);
    cout << ": DESKRIPSI :                                                                            :\n";Sleep(100);
    cout << ": Terletak di Desa  Windujaya kecamatan  Kedungbanteng Banyumas, tepatnya di RT 03 RW 05,:\n";Sleep(100);
    cout << ": sekitar 15km dari pusat kota. Bukit ini banyak menyita perhatian wisatawan dalam maupun:\n";Sleep(100);
    cout << ": luar kota. Dapat ditempuh  dari dua jalur, bisa dari desa  Kedungbanteng ke utara lewat:\n";Sleep(100);
    cout << ": gerbang masuk Curug Gomblang, atau bisa juga dari kawasan wisata Curug Bayan/Curug Gede:\n";Sleep(100);
    cout << ": Baturaden. Hanya dengan  membayar tiket masuk  senilai Rp. 3000,- saja  kita sudah bisa:\n";Sleep(100);
    cout << ": berekreasi sepuasnya di tempat ini.                                                    :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);

}

void caping_park()
{
    cout << ":=======================================================================================:\n";Sleep(100);
    cout << ": Caping Park                                                                           :\n";Sleep(100);
    cout << ":=======================================================================================:\n";Sleep(100);
    cout << ": ALAMAT :                                                                              :\n";Sleep(100);
    cout << ": Dusun II, Kebumen, Kec. Baturaden, Kabupaten Banyumas, Jawa Tengah 53151              :\n";Sleep(100);
    cout << ":                                                                                       :\n";Sleep(100);
    cout << ": DESKRIPSI :                                                                           :\n";Sleep(100);
    cout << ":    Terletak di Jalan Raya  Baturraden  Barat, Desa Kebumen, Baturraden, Banyumas, Jawa:\n";Sleep(100);
    cout << ": Tengah , dengan jembatan kaca yang  berukuran 2,5 x 17 meter yang membuat  Caping Park:\n";Sleep(100);
    cout << ": menjadi incaran para wisatawan baik dari dalam ataupun luar kota. Caping Park tentunya:\n";Sleep(100);
    cout << ": tidak hanya menyediakan  jembatan kaca saja bagi  para pengunjung, masih  ada beberapa:\n";Sleep(100);
    cout << ": spot wisatanya seperti taman bunga, Kebun binatang mini, taman bermain, arena festival:\n";Sleep(100);
    cout << ": dan teater outdoor. Caping Park juga  menyediakan  cafe untuk  mempermudah  pengunjung:\n";Sleep(100);
    cout << ": dalam  mencari mencari  makanan. Tempat ini  buka dari mulai  pukul 08.00 - 18.00 WIB :\n";Sleep(100);
    cout << ": dengan HTM Rp.20.000 untuk  weekday  dan  Rp.25.000  untuk  weekend  kita  sudah  bisa:\n";Sleep(100);
    cout << ": menikmatik semua spot wisata yang ada di Caping Park.                                 :\n";Sleep(100);
    cout << ":=======================================================================================:\n";Sleep(100);
}

void curug_gomblang()
{
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": Curug Gomblang                                                                         :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": ALAMAT :                                                                               :\n";Sleep(100);
    cout << ": Dusun III, Kalisalak, Kedungbanteng, Kabupaten Banyumas, Jawa Tengah 53152             :\n";Sleep(100);
    cout << ":                                                                                        :\n";Sleep(100);
    cout << ": DESKRIPSI :                                                                            :\n";Sleep(100);
    cout << ": Terletak di Desa Baseh, Kecamatan Kedungbanteng, Curug gomblang ini  banyak  dikunjungi:\n";Sleep(100);
    cout << ": wisatawan karena memiliki  beberapa spot foto yang sangat  indah. Yang  paling  favorit:\n";Sleep(100);
    cout << ": untuk berfoto salah satunya spot yang berbentuk  hati (love). Tidak  pandai  dalam meng:\n";Sleep(100);
    cout << ": ambil foto yang bagus ? tenang saja teman-teman karena dicurug gomblang juga disediakan:\n";Sleep(100);
    cout << ": fotografer, tetapi nggak gratis ya. Tiket masuk curug gomblang cuman Rp.10.000,-. Curug:\n";Sleep(100);
    cout << ": gomblang buka mulai pukul 08.00 - 17.00 WIB.                                           :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);

}

void gallery_water_karangmangu()
{
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": Gallery Waterpark Karangmangu (GWK)                                                    :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": ALAMAT :                                                                               :\n";Sleep(100);
    cout << ": JL Raya Baturaden, Km. 12, Karang Mangu, Dusun III, Karangtengah, Kec. Baturaden,      :\n";Sleep(100);
    cout << ": Kabupaten Banyumas, Jawa Tengah 53151.                                                 :\n";Sleep(100);
    cout << ":                                                                                        :\n";Sleep(100);
    cout << ": DESKRIPSI :                                                                            :\n";Sleep(100);
    cout << ": Gallery Water Karangmangu yang sering disebut dengan GWK merupakan sebuah kolam renang :\n";Sleep(100);
    cout << ": yang dikembangkan  menjadi wisata snorkling yang cukup terkenal di Baturaden. Kolam ini:\n";Sleep(100);
    cout << ": baru didirikan, anda tidak perlu takut  terbawa gelombang, sebab  tempat  snorkling ini:\n";Sleep(100);
    cout << ": bukanlah laut melainkan sumber mata air yang segar dan jernih. GWK juga menyediakan dua:\n";Sleep(100);
    cout << ": kolam renang Anak dengan kedalaman 20 CM – 50 CM, kolam  anak dua dengan kedalaman 1 m.:\n";Sleep(100);
    cout << ": Masih banyak lagi wahana yang ada di GWK dan disana juga menyediakan toko yang  bernama:\n";Sleep(100);
    cout << ": Pusat oleh-oleh yang dimana di tokonya menyediakan  banyak varian  makanan  khas daerah:\n";Sleep(100);
    cout << ": Purwokerto. Buka mulai pukul 08.00 - 18.00 WIB, meskipun  memiliki banyak wahana  harga:\n";Sleep(100);
    cout << ": tiket masuk GWK tetap murah kok teman-teman yaitu Rp.15.000,- saja.                    :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);

}

void hutan_pinus()
{
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": Hutan Pinus                                                                            :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": ALAMAT :                                                                               :\n";Sleep(100);
    cout << ": Desa Limpakuwus, Kecamatan, Kec. Sumbang, Kabupaten Banyumas, Jawa Tengah 53183        :\n";Sleep(100);
    cout << ":                                                                                        :\n";Sleep(100);
    cout << ": DESKRIPSI :                                                                            :\n";Sleep(100);
    cout << ": Lereng selatan  Gunung Slamet yang berada  di Kabupaten Banyumas, Jawa Tengah menyimpan:\n";Sleep(100);
    cout << ": beragam  keindahan alam. Mulai dari  hutan, air terjun, sungai  dan  lainnya.  Semuanya:\n";Sleep(100);
    cout << ": menyajikan  sensasi  tersendiri, tetapi  semuanya  berujung pada  daya  tarik  alamnya.:\n";Sleep(100);
    cout << ": Seperti hutan pinus Limpakuwus yang terletak di Desa Limpakuwus, Kecamatan Sumbang yang:\n";Sleep(100);
    cout << ": berbatasan persis dengan Kemutug Lor, Kecamatan Baturraden atau sekitar 15 km dari Kota:\n";Sleep(100);
    cout << ": Purwokerto.Hutan pinus Limpakuwus yang berada dilereng selatan Gunung Slamet itu berada:\n";Sleep(100);
    cout << ": pada ketinggian sekitar 750 meter di atas permukaan laut (mdpl). Dengan ketinggian itu,:\n";Sleep(100);
    cout << ": maka kesejukan sudah terasa. Bahkan, disaat  pagi dan  sore menjelang senja, kabut juga:\n";Sleep(100);
    cout << ": turun menambah syahdu suasana. Harga tiket  masuknya hanya Rp.10.000 saja. Namun, kalau:\n";Sleep(100);
    cout << ": pengunjung akan  mencoba  fasilitas lainnya  masih harus merogoh  ongkos. Misalnya sewa:\n";Sleep(100);
    cout << ": arena ATV, hammock / jika ada acara  seperti prewedding. Tetapi, tarifnya tidak terlalu:\n";Sleep(100);
    cout << ": mahal. Misalnya untuk sewa hamock hanya Rp.5.000, sewa ATV Rp.20.000  dengan 4x putaran:\n";Sleep(100);
    cout << ": dan kalau untuk prewedding bayar Rp.100.000. Buka mulai pukul 08.00 - 17.00 WIB.       :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);

}

void Lokawisata_Baturaden()
{
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": Lokawisata Baturaden                                                                   :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": ALAMAT :                                                                               :\n";Sleep(100);
    cout << ": Lokawisata, Dusun I Karangmangu, Karangmangu, Kec. Baturaden, Kabupaten Banyumas,      :\n";Sleep(100);
    cout << ": Jawa Tengah 53151                                                                      :\n";Sleep(100);
    cout << ":                                                                                        :\n";Sleep(100);
    cout << ": DESKRIPSI :                                                                            :\n";Sleep(100);
    cout << ": Objek wisata ini terletak di patahan tebing lereng gunung dimana di tengahnya mengalir :\n";Sleep(100);
    cout << ": sungai kecil  yang menyebar pada tebing bebatuan  sehingga terlihat seperti air terjun :\n";Sleep(100);
    cout << ": mini. Di sekelingnya terdapat area  taman yang  hijau  asri berhias bunga warna-warni. :\n";Sleep(100);
    cout << ": Konturnya yang tidak rata dimanfaatkan dengan membagun jalur tangga untuk pejalan kaki :\n";Sleep(100);
    cout << ": sehingga sususannya  terlihat apik. Di sebelah  kiri  taman  juga  terdapat sebuah air :\n";Sleep(100);
    cout << ": mancur buatan yang tinggi  menjulang yang  menjadi  daya tarik sendiri bagi pengunjung :\n";Sleep(100);
    cout << ": harga tiket masuknya adalah Rp14.000. Buka mulai pukul 06.00 - 15.30 WIB.               :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
}

void Pagubugan_Melung()
{
    cout << ":=========================================================================================:\n";Sleep(100);
    cout << ": Pagubugan Melung                                                                        :\n";Sleep(100);
    cout << ":=========================================================================================:\n";Sleep(100);
    cout << ": ALAMAT :                                                                                :\n";Sleep(100);
    cout << ": Dusun III, Melung, Kec. Kedungbanteng, Kabupaten Banyumas, Jawa Tengah 53152            :\n";Sleep(100);
    cout << ":                                                                                         :\n";Sleep(100);
    cout << ": DESKRIPSI :                                                                             :\n";Sleep(100);
    cout << ": Desa Melung, Kecamatan Kedungbanteng, Kabupaten Banyumas  mengusung konsep  wisata  unik:\n";Sleep(100);
    cout << ": dengan memanfaatkan sawah  terasering  milik  desa. Lanskap  kolam  pemandian  berlokasi:\n";Sleep(100);
    cout << ": diapit teras-teras sawah dengan pemandangan bukit menjulang di bawah kolong langit biru :\n";Sleep(100);
    cout << ": Latar belakang dibangunnya kolam pemandian unik ini, melayangkan kenangan anak-anak desa:\n";Sleep(100);
    cout << ": yang bermain air, berenang, di tengah hijau persawahan. Pengembangan kolam pemandian ini:\n";Sleep(100);
    cout << ": sebagai daya tarik utama wisata Pagubukan Melung sepenuhnya memakai dana desa.          :\n";Sleep(100);
    cout << ": Keberadaan kolam  pemandian yang mulai  beroperasi pada Januari 2019 lalu diamati Kartim:\n";Sleep(100);
    cout << ": meningkatkan jumlah pengunjung ke Pagubukan Melung. Bila sebelumnya dalam 1hari maksimal:\n";Sleep(100);
    cout << ": datang 50 pengunjung, saat ini kunjungan perhari rata-rata 150 orang. Kebanyakan  pengun:\n";Sleep(100);
    cout << ": jung adalah anak-anak muda dari perkotaan purwokerto. KetuaUnit Wisata Pagubugan Marsono:\n";Sleep(100);
    cout << ": menambahkan mengunjungi Pagubugan Melung pengunjung juga dapat menikmati sejumlah wahana:\n";Sleep(100);
    cout << ": selain kolam pemandian yakni Grujugan Bengkok, Watu Jodoh dan Jembatan Manggis. Jam buka:\n";Sleep(100);
    cout << ": atau jam operasional Pagubugan Melung dibuka  mulai jam 07.30 sampai 17.30.  Untuk  saat:\n";Sleep(100);
    cout << ": harga tiket masuk Rp 5.000, untuk semua spot wisata.                                    :\n";Sleep(100);
    cout << ":=========================================================================================:\n";Sleep(100);
}

void Small_World()
{
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": Small World                                                                            :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": ALAMAT :                                                                               :\n";Sleep(100);
    cout << ": Jl. Raya Baturaden Barat No.270, Ketenger, Dusun I Karangmangu, Karangmangu, Kec.      :\n";Sleep(100);
    cout << ": Baturaden, Purwokerto, Jawa Tengah 53151                                               :\n";Sleep(100);
    cout << ":                                                                                        :\n";Sleep(100);
    cout << ": DESKRIPSI :                                                                            :\n";Sleep(100);
    cout << ": Sebagai wahana rekreasi  sekaligus  edukasi, rencananya  Small World  ini akan memiliki:\n";Sleep(100);
    cout << ": banyak sekali miniatur bangunan terkenal dari seluruh dunia, Weekday Dewasa Rp.20.000,-:\n";Sleep(100);
    cout << ": Anak-anak sampai 12 Tahun Rp10.000 Weekend (Sabtu - Minggu) Dewasa Rp 25.000, anak-anak:\n";Sleep(100);
    cout << ": ribu buka setiap hari mulai jam 7 pagi sampai 5 sore. Lokasinya  juga  mudah  dijangkau:\n";Sleep(100);
    cout << ": terletak di Jalan Raya Barat Baturraden, sekitar 2.5 km dari lokawisata Baturraden atau:\n";Sleep(100);
    cout << ": 500 meteran dari pertigaan yang ke arah Curug Bayan. Buka mulai pukul 07.00-17.00 WIB. :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
}

void The_Village()
{
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": The Village                                                                            :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
    cout << ": ALAMAT :                                                                               :\n";Sleep(100);
    cout << ": Dusun I, Rempoah, Kec. Baturaden, Kabupaten Banyumas, Jawa Tengah 53151                :\n";Sleep(100);
    cout << ":                                                                                        :\n";Sleep(100);
    cout << ": DESKRIPSI :                                                                            :\n";Sleep(100);
    cout << ": The Village hadir dengan gaya bangunan unik ala eropa. Design  bangunannya  terlihat   :\n";Sleep(100);
    cout << ": berbeda karena tinggi besar dengan tembok bata yang memberi kesan klasik dan elegan.   :\n";Sleep(100);
    cout << ": The Village dapat dijadikan daftar tujuan wisata anda di hari libur ini. Konsep unik   :\n";Sleep(100);
    cout << ": Family Park cocok dijadikan destinasi wisata bersama keluarga. Harga tiket  masuknya   :\n";Sleep(100);
    cout << ": sangat terjangkau, yaitu hanya seharga Rp 10.000/orang berlaku setiap hari Senin -     :\n";Sleep(100);
    cout << ": Jumat (weekday) pukul 18.00-21.00 WIB, Rp 23.000/orang pukul 10.00-17.59 WIB (weekday).:\n";Sleep(100);
    cout << ": Untuk hari sabtu minggu (weekend) pukul 18.00-21.00 WIB Rp 10.000, pukul 09.00-17.59   :\n";Sleep(100);
    cout << ": Rp 23.000.                                                                             :\n";Sleep(100);
    cout << ":========================================================================================:\n";Sleep(100);
}
// prosedur untuk sorting harga tiket masuk dari yang termurah
void sorting_nilai(int weekday[], int p)
    {/* deklarasi posisi minimal dan tempat untuk
    proses pertukaran nilai */
        int pos_min, tmp;
    // perulangan untuk proses pertukaran & pengurutan nilai
        for (int i=0; i<p-1; i++)
        {// posisi minimal sama dengan i
            pos_min = i;
            for (int j=i+1; j<p; j++)
            {/* kondisi jika nilai pada array j lebih
                kecil dari nilai pada posisi minimal */
                if (weekday[j] < weekday[pos_min])
                {
                    pos_min = j;
                }
            }
// kondisi jika posisi minimal tidak sama dgn i
            if (pos_min != i)
            {// proses pertukaran nilai kemudian diurutkan
                tmp = weekday[i];
                weekday[i] = weekday[pos_min];
                weekday[pos_min] = tmp;
            }// menampilkan proses pertukaran nilai pd output

        }
    }
// prosedur untuk menampilkan nilai yang telah diurutkan
    void print_arr(int weekday[], int p)
    {// perulangan untuk menampilkan nilai pada output
        for(int i=0; i<p; i++)
        {
            cout << weekday[i] << "\n";
        }
        cout << endl;
    }

// prosedur menu harga tiket masuk
void htm()
{
    cout << "================================ \n";Sleep(100);
    cout << "= Harga Tiket Masuk (HTM)      = \n";Sleep(100);
    cout << "================================ \n";Sleep(100);
    cout << "= 1. Weekday                   = \n";Sleep(100);
    cout << "= 2. Weekend                   = \n";Sleep(100);
    cout << "================================ \n";Sleep(100);
    cout << "Masukkan pilihan : ";
    cin >> x3;
    cout << endl;

    sorting_nilai(weekday, 9);
    sorting_nilai(weekend, 9);

    switch(x3)
    {
        case 1:
            cout << "HTM weekday 9 tempat wisata dari yang termurah :"<<endl;
            cout << endl;
            for(int i=0; i<9; i++)
            {
                cout <<(i+1)<<". "<<daftar2[i]<<endl;
            }
            cout << endl;

            sorting_nilai(weekday, p);
            cout << "HTM weekday 9 tempat wisata dari yang termurah :"<<endl;
            cout << endl;
            print_arr(weekday, p);
            cout << endl;
            ulang();
            break;

        case 2:
            cout << "HTM weekend 9 tempat wisata dari yang termurah :"<<endl;
            cout << endl;
            for(int i=0; i<9; i++)
            {
                cout <<(i+1)<<". "<<daftar3[i]<<endl;
            }
            cout << endl;

            cout << "HTM weekend 9 tempat wisata dari yang termurah :"<<endl;
            cout << endl;
            print_arr(weekend, p);
            ulang();
            break;

        default:
            cout << "Pilihan yang anda minta tidak tersedia \n";
            Sleep(500);
            system("cls");
            ulang();
            break;
    }

}
// prosedur closing untuk keluar program
void closing()
{
    system("cls");
    cout << "\n";
    cout << "\t\t\t\tTerima Kasih";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    for(int i=0; i<30; i++)
    {
        cout << ". ";
        Sleep(100);
    }cout << "Kelompok 7";
    cout << endl;
}

// program utama
int main()
{
    int x1, x2, p;

    loading();

    menu(x1, x2, p);

    return 0;
}

