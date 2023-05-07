#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kelompokQuestion1();
int kelompokQuestion2();
int kelompokQuestion3();
int poin;
int *ptr = &poin;

// Command Line Argument
int main(int argc, char const *argv[])
{
    //jika argumen cuma satu, pemain akan diminta untuk registrasi username dan password
       char login[20];
    if (argc == 1){
    FILE *fptr = fopen("database/login.bin", "wb");
    printf("\t\t\tRegistrasi akun\n");
    printf("Masukkan username dan password sesuai dengan format berikut!\n");
    printf("username$password : ");
    scanf("%s", &login);
    fwrite(&login, sizeof(login),1, fptr);
    printf("Cara Login: ./FileAppProram username password");
    fclose(fptr);
       }
    // memastikan argumen yang diinput sesuai ketentuan
    if (argc != 3 && argc !=3)
    {
        printf("Login Gagal!\n");
        printf("Cara Login: ./FileAppProram username password");
    }
    // deklarasikan variabel baru untuk menampung argumen yang diinput
    char usernameInp[30], passwordInp[30];

    // digunakan strcpy() untuk meng-copy string dari satu variabel ke variabel lain
    strcpy(usernameInp, argv[1]);
    strcpy(passwordInp, argv[2]);

    FILE *fptr;
    // buka file login.bin
    // gunakan mode 'rb' untuk read binary
    if ((fptr = fopen("database/login.bin", "rb")) == NULL)
    {
        printf("No File Detected!");
        // program akan keluar jika file tidak ditemukan
        exit(1);
    }
    // deklarasikan variabel acc untuk menyimpan isi dari file login.bin
    char acc[35];
    fread(acc, sizeof(char), sizeof(acc), fptr);

    // file fptr ditutup
    fclose(fptr);

    // deklarasikan variabel baru untuk menampung sementara hasil pemisahan dari variabel acc
    char *str[3];
    char username[30], password[30];
    int i = 0;

    // Digunakan strtok untuk memisahkan string dari karakter (huruf) tertentu
    str[i] = strtok(acc, "$");
    while (str[i++] != NULL)
    {
        str[i] = strtok(NULL, "$");
    }

    // hasil pemisahan disimpan ke dalam variabel str[0] dan str[1]
    // Digunakan strcpy() untuk meng-copy string dari satu variabel ke variabel lain
    strcpy(username, str[0]);
    strcpy(password, str[1]);

    // Gunakan strcmp() untuk membandingkan string dengan string yang lainnya
    if ((strcmp(username, usernameInp) == 0) && (strcmp(password, passwordInp) == 0))
    {
        // jika login berhasil, maka akan langsung masuk ke dalam permainan
        printf(
            "\t\t\t __        _______ _     ____ ___  __  __ _____   _____ ___    ____ _____  _    ____   ___  _   _ ___ ______ _            \n"
            "\t\t\t \\ \\      / / ____| |   / ___/ _ \\|  \\/  | ____| |_   _/ _ \\  / ___|_   _|/ \\  |  _ \\ / _ \\| | | |_ _|__  / | |    \n"
            "\t\t\t  \\ \\ /\\ / /|  _| | |  | |  | | | | |\\/| |  _|     | || | | | \\___ \\ | | / _ \\ | |_) | | | | | | || |  / /  | |     \n"
            "\t\t\t   \\ V  V / | |___| |__| |__| |_| | |  | | |___    | || |_| |  ___) || |/ ___ \\|  _ <| |_| | |_| || | / /_  |_|          \n"
            "\t\t\t    \\_/\\_/  |_____|_____\\____\\___/|_|  |_|_____|   |_| \\___/  |____/ |_/_/   \\_\\_| \\_\\____\\_\\___/|___/____| (_) \n\n\n\n\n\n");
        printf(
            "  ___ _   _ _    ___ ___  \n"
            " | _ \\ | | | |  | __/ __| \n"
            " |   / |_| | |__| _|\\__ \\ \n"
            " |_|_\\____/|____|___|___/ \n");

        printf(" ______________________________________________________________________________________________________________________________________________________\n");
        printf("|%-150s|\n", "");
        printf("|%-144s|\n", "\tBerikut ini adalah beberapa peraturan permainan: ");
        printf("|%-144s|\n", "\t1. Permainan akan dibagi menjadi 3 ronde. Dalam setiap ronde terdapat 5 pertanyaan.");
        printf("|%-144s|\n", "\t2. Masing-masing pertanyaan memiliki hadiah yang dapat diperoleh jika pertanyaan dijawab dengan benar.");
        printf("|%-144s|\n", "\t3. Jika berhasil menjawab 5 pertanyaan dengan benar, maka hadiah dari 5 pertanyaan tersebut akan disimpan dan pemain masuk ke ronde");
        printf("|%-144s|\n", "\t   berikutnya.");
        printf("|%-144s|\n", "\t4. Hadiah akan hangus dan tidak dapat melanjutkan permainan jika salah menjawab satu pertanyaan di dalam ronde pertama.");
        printf("|%-144s|\n", "\t5. Hadiah dari ronde sebelumnya dapat diperoleh jika pemain gagal menjawab salah satu pertanyaan di ronde berikutnya.");
        printf("|%-144s|\n", "\t6. Jika berhasil menjawab semua pertanyaan dari tiap ronde dengan benar, maka akan memperoleh hadiah utama.");
        printf("|%-144s|\n", "\t7. Hadiah utama adalah akumulasi hadiah dari seluruh pertanyaan yang telah dijawab dengan benar yang kemudian ditambah bonus sehingga");
        printf("|%-144s|\n", "\t   totalnya adalah 2.000.000.000 rupiah.");
        printf("|%-144s|\n", "\t8. Baiklah, selamat try hard ^.^");
        printf("|%150s|\n", "       \\:.             .:/ ");
        printf("|%150s|\n", "        \\``._________.''/  ");
        printf("|%150s|\n", "         \\             /   ");
        printf("|%150s|\n", " .--.--, / .':.   .':. \\   ");
        printf("|%150s|\n", "/__:  /  | '::' . '::' |   ");
        printf("|%150s|\n", "   / /   |`.   ._.   .'|   ");
        printf("|%150s|\n", "  / /    |.'         '.|   ");
        printf("|%150s|\n", " /___-_-,|.\\  \\   /  /.|   ");
        printf("|%150s|\n", "      // |''\\.;   ;,/ '|   ");
        printf("|%150s|\n", "      `==|:=         =:|   ");
        printf("|%150s|\n", "         `.          .'    ");
        printf("|%150s|\n", "           :-._____.-:     ");
        printf("|%150s|\n", "          `''       `''    ");
        printf("|______________________________________________________________________________________________________________________________________________________|\n\n\n");
        int check;
        printf("Harap baca semua aturan yang tertera karena kami sudah susah payah mengetiknya.\nKalau sudah, apakah Anda siap untuk lanjut ke pertanyaan?\n1. 1000 persen siap!\n2. Em .. gajadi deh.\njawaban Anda: ");
        scanf("%d", &check);
        while (getchar() != '\n')
            ;
        if (check == 1)
        {
            kelompokQuestion1();

            if (poin == 1600000)
            {
                printf("Selamat, Anda memasuki ronde kedua. Akumulasi hadiah Anda telah disimpan.\nBerikut pertanyaan ronde kedua:\n\n");
                kelompokQuestion2();

                if (poin == 51200000)
                {
                    printf("Selamat, Anda memasuki ronde ketiga. Akumulasi hadiah Anda telah disimpan.\nBerikut pertanyaan ronde ketiga:\n\n");
                    kelompokQuestion3();

                    if (poin == 2000000000)
                    {
                        printf("Jeng ... jeng ... jeng!\nSELAMAT! Anda berhasil menjawab semua pertanyaan dengan benar. Wawasan Anda tidak perlu diragukan lagi. Atas kegigihan dan usaha Anda, berikut hadiah utama senilai Rp2.000.000.000,00 kami berikan kepada Anda (jangan lupa pajak :D)\n.");
                    }
                    else if (poin == 409600000)
                    {
                        printf("Pengetahuan Anda sangat luas, tetapi mengorbankan segalanya demi keserakahan bukan cara Anda. keputusan Anda sangat baik dan kami mengapresiasinya. Anda berhak membawa pulang hadiah senilai 409.600.000 rupiah.\n");
                    }
                    else if (poin > 409600000 && poin < 2000000000)
                    {
                        printf("Terkadang keberanian dapat membawa keberuntungan. Tetapi kali ini dewi fortuna tidak memihak pada Anda.\nMohon maaf dengan berat hari kami menyatakan bahwa Anda telah gagal dan tidak akan menerima hadiah apa pun.\n");
                        printf("Perjalanan panjang membawa kita pada keputusan sulit. Siapalah kita yang berani menantang takdir hidup yang seperti roller coaster. jangan menangis, tetaplah gembira. Namun, jangan pernah semangat dan tetaplah menyerah karena Anda baru saja kehilangan kesempatan menjadi jutawan.\n");
                    }
                    else
                    {
                        printf("Anda orang yang berpengetahuan luas. Mungkin kali ini Anda hanya kurang beruntung saja (^^)\n Eitss...tapi jangan khawatir! Atas kegigihan Anda, Anda berhak membawa pulang hadiah hadiah senilai Rp.51.200.000,00\n");
                    }
                }
                else
                {
                    printf("Anda orang yang berpengetahuan luas. Mungkin kali ini Anda hanya kurang beruntung saja (^^)\nEitss...tapi jangan khawatir! Atas kegigihan Anda, Anda berhak membawa pulang hadiah hadiah senilai Rp.1.600.000,00\n");
                }
            }
            else
            {
                printf("Hadiah Anda 0 rupiah T.T\n");
            }
        }
        else
        {
            printf("Siapa yang menyangka ternyata Anda begitu pengecut! padahal hadiah sudah di depan mata. Huh, sudahlah kami kecewa.\n");
        }
        if (poin > 1600000 && poin <= 409600000 && poin == 2000000000)
        {
            printf("Cara mengambil hadiah akan kami infokan melalui email masing-masing.\n");
        }
        printf("\t\t\t _____        _              _  __        _ _      ___         _      _      ___                     _ \n"
               "\t\t\t|_   _|__ _ _(_)_ __  __ _  | |/ /__ _ __(_) |_   / __|_  _ __| |__ _| |_   | _ ) ___ _ _ _ __  __ _(_)_ _\n"
               "\t\t\t  | |/ -_) '_| | '  \\/ _` | | ' </ _` (_-< | ' \\  \\__ \\ || / _` / _` | ' \\  | _ \\/ -_) '_| '  \\/ _` | | ' \\ \n"
               "\t\t\t  |_|\\___|_| |_|_|_|_\\__,_| |_|\\_\\__,_/__/_|_||_| |___/\\_,_\\__,_\\__,_|_||_| |___/\\___|_| |_|_|_\\__,_|_|_||_|\n");
    }
    else
    {
        printf("Anda Gagal Login\nHarap masukan username dan password yang sesuai\n");
    }
}
int kelompokQuestion1()
{

    int poin = 0;
    char jawaban;
    
    // Menampilkan teks pertanyaan dan pilihan jawaban ke layar
    printf(" ______________________\n");
    printf("|Hadiah Anda saat ini: |\t"
           "Pertanyaan ke 1\n");
    printf("|                      |\t"
           "Apa warna bendera Indonesia?\n");
    printf("|%-22d|\t"
           "A.Merah dan putih\t\tB.Biru dan kuning\n",
           poin);
    printf("|______________________|\t"
           "C.Hitam dan merah\t\tD.Hijau dan putih\n");
    
    // Memberikan jumlah poin yang dimiliki oleh pemain
    printf("Poin soal ini:%d\n", poin += 100000);
    
    // Meminta pemain untuk memasukkan jawaban dengan menggunakan fungsi scanf()
    printf("jawaban anda : ");
    scanf("%c", &jawaban);
    
    // Membersihkan input buffer setelah meminta input dari pemain
    while (getchar() != '\n')
        ;
    
    // Memproses jawaban yang dimasukkan oleh pemain dengan menggunakan statement if
    if (jawaban == 'A' || jawaban == 'a')
    {
        printf("Benar!\n\n");
        printf(" ______________________\n");
        printf("|Hadiah Anda saat ini: |\t"
               "pertanyaan ke 2\n");
        printf("|                      |\t"
               "Berapa jumlah provinsi di Indonesia saat ini?\n");
        printf("|%-22d|\t"
               "A.31\t\tB.30\n",
               poin);
        printf("|______________________|\t"
               "C.41\t\tD.38\n");
        printf("Poin soal ini:%d\n", poin *= 2);
        printf("Jawaban anda : ");
        scanf("%c", &jawaban);
        while (getchar() != '\n')
            ;
        if (jawaban == 'D' || jawaban == 'd')
        {
            printf("Benar!\n\n");
            printf(" ______________________\n");

            printf("|Hadiah Anda saat ini: |\t"
                   "pertanyaan ke 3\n");
            printf("|                      |\t"
                   "Apa nama pulau terbesar di Indonesia?\n");
            printf("|%-22d|\t"
                   "A.Kalimantan\t\tB.Sulawesi\n",
                   poin);
            printf("|______________________|\t"
                   "C.Sumatra\t\tD.Jawa\n");
            printf("Poin soal ini:%d\n", poin *= 2);
            printf("jawaban anda : ");
            scanf("%c", &jawaban);
            while (getchar() != '\n')
                ;
            if (jawaban == 'A' || jawaban == 'a')
            {
                printf("Benar!\n\n");
                printf(" ______________________\n");
                printf("|Hadiah Anda saat ini: |\t"
                       "pertanyaan ke 4\n");
                printf("|                      |\t"
                       "Secara etimologis, demokrasi berasal dari bahasa Yunani, yaitu demos dan kratos yang artinya?\n");
                printf("|%-22d|\t"
                       "A.Kekuasaan negara\t\tB.Kekuasaan pemerintah\n",
                       poin);
                printf("|______________________|\t"
                       "C.Pemerintahan rakyat\t\tD.Pemerintahan berdaulat\n");
                printf("Poin soal ini:%d\n", poin *= 2);
                printf("jawaban anda : ");
                scanf("%c", &jawaban);
                while (getchar() != '\n')
                    ;
                if (jawaban == 'C' || jawaban == 'c')
                {
                    printf("Benar!\n\n");
                    printf(" ______________________\n");
                    printf("|Hadiah Anda saat ini: |\t"
                           "pertanyaan ke 5\n");
                    printf("|                      |\t"
                           "Demokrasi yang diterapkan di setiap negara berbeda-beda disebabkan oleh faktor-faktor berikut, kecuali?\n");
                    printf("|%-22d|\t"
                           "A.Ideologi\t\tB.Sejarah\n",
                           poin);
                    printf("|______________________|\t"
                           "C.Budaya\t\tD.Jumlah penduduk\n");
                    printf("Poin soal ini:%d\n", poin *= 2);
                    printf("jawaban anda : ");
                    scanf("%c", &jawaban);
                    while (getchar() != '\n')
                        ;
                    if (jawaban == 'A' || jawaban == 'a')
                    {
                        printf("Benar!\n\n");
                        *ptr = poin;
                    }
                    else
                    {
                        printf("jawaban salah\nSayang sekali Anda tidak memperoleh hadiah apa pun karena pengetahuan Anda masih sangat minim (-,-)\n");
                    }
                }
                else
                {
                    printf("jawaban salah\nSayang sekali Anda tidak memperoleh hadiah apa pun karena pengetahuan Anda masih sangat minim (-,-)\n");
                }
            }
            else
            {
                printf("jawaban salah\nSayang sekali Anda tidak memperoleh hadiah apa pun karena pengetahuan Anda masih sangat minim (-,-)\n");
            }
        }
        else
        {
            printf("jawaban salah\nSayang sekali Anda tidak memperoleh hadiah apa pun karena pengetahuan Anda masih sangat minim (-,-)\n");
        }
    }
    else
    {
        printf("jawaban salah\nSayang sekali Anda tidak memperoleh hadiah apa pun karena pengetahuan Anda masih sangat minim (-,-)\n");
    }
    return *ptr;
}

int kelompokQuestion2()
{
    char jawaban;
    
    // Menampilkan teks pertanyaan dan pilihan jawaban ke layar
    printf(" ______________________\n");
    printf("|Hadiah Anda saat ini: |\t"
           "pertanyaan ke 6\n");
    printf("|                      |\t"
           "Di benua mana negara Rusia terletak?\n");
    printf("|%-22d|\t"
           "A.Australia\t\tB.Amerika\n",
           poin);
    printf("|______________________|\t"
           "C.Afrika\t\tD.Eropa\n");
    
    // Menggandakan jumlah poin yang dimiliki oleh pemain
    printf("Poin soal ini:%d\n", poin *= 2);
    
    // Meminta pemain untuk memasukkan jawaban dengan menggunakan fungsi scanf()
    printf("jawaban anda : ");
    scanf("%c", &jawaban);
    
    // Membersihkan input buffer setelah meminta input dari pemain
    while (getchar() != '\n')
        ;
    
    // Memproses jawaban yang dimasukkan oleh pemain dengan menggunakan statement if
    if (jawaban == 'D' || jawaban == 'd')
    {
        printf("Benar!\n\n");
        printf(" ______________________\n");
        printf("|Hadiah Anda saat ini: |\t"
               "pertanyaan ke 7\n");
        printf("|                      |\t"
               "Berapa jumlah provinsi di Indonesia saat ini?\n");
        printf("|%-22d|\t"
               "A.31\t\tB.30\n",
               poin);
        printf("|______________________|\t"
               "C.41\t\tD.38\n");
        printf("Poin soal ini:%d\n", poin *= 2);
        printf("jawaban anda : ");
        scanf("%c", &jawaban);
        while (getchar() != '\n')
            ;
        if (jawaban == 'D' || jawaban == 'd')
        {
            printf("Benar!\n\n");
            printf(" ______________________\n");
            printf("|Hadiah Anda saat ini: |\t"
                   "pertanyaan ke 8\n");
            printf("|                      |\t"
                   "Siapakah presiden pertama Amerika Serikat?\n");
            printf("|%-22d|\t"
                   "A.George Washington\t\tB.Thomas Jefferson\n",
                   poin);
            printf("|______________________|\t"
                   "C.John F. Kennedy\t\tD.Abraham Lincoln\n");
            printf("Poin soal ini:%d\n", poin *= 2);
            printf("jawaban anda : ");
            scanf("%c", &jawaban);
            while (getchar() != '\n')
                ;
            if (jawaban == 'A' || jawaban == 'a')
            {
                printf("Benar!\n\n");
                printf(" ______________________\n");
                printf("|Hadiah Anda saat ini: |\t"
                       "pertanyaan ke 9\n");
                printf("|                      |\t"
                       "Apa nama ibukota Australia?\n");
                printf("|%-22d|\t"
                       "A.Sydney\t\tB.Canberra\n",
                       poin);
                printf("|______________________|\t"
                       "C.Melbourne\t\tD.Brisbane\n");
                printf("Poin soal ini:%d\n", poin *= 2);
                printf("jawaban anda : ");
                scanf("%c", &jawaban);
                while (getchar() != '\n')
                    ;
                if (jawaban == 'B' || jawaban == 'b')
                {
                    printf("Benar!\n\n");
                    printf(" ______________________\n");
                    printf("|Hadiah Anda saat ini: |\t"
                           "pertanyaan ke 10\n");
                    printf("|                      |\t"
                           "Siapakah pelukis terkenal yang melukis Mona Lisa?\n");
                    printf("|%-22d|\t"
                           "A.Vincent van Gogh\t\tB.Leonardo da Vinci\n",
                           poin);
                    printf("|______________________|\t"
                           "C.Pablo Picasso\t\t\tD.Michelangelo\n");
                    printf("Poin soal ini:%d\n", poin *= 2);
                    printf("jawaban anda : ");
                    scanf("%c", &jawaban);
                    while (getchar() != '\n')
                        ;
                    if (jawaban == 'B' || jawaban == 'b')
                    {
                        printf("Benar!\n\n");
                        *ptr = poin;
                    }
                    else
                    {
                        printf("jawaban salah\n");
                    }
                }
                else
                {
                    printf("jawaban salah\n");
                }
            }
            else
            {
                printf("jawaban salah\n");
            }
        }
        else
        {
            printf("jawaban salah\n");
        }
    }
    else
    {
        printf("jawaban salah\n");
    }
    return *ptr;
}

int kelompokQuestion3()
{
    int check;
    char jawaban;
    
    // Menampilkan teks pertanyaan dan pilihan jawaban ke layar
    printf(" ______________________\n");
    printf("|Hadiah Anda saat ini: |\t"
           "pertanyaan ke 11\n");
    printf("|                      |\t"
           "Siapakah penemu telepon?\n");
    printf("|%-22d|\t"
           "A.Thomas Edison\t\tB.Alexander Graham Bell\n",
           poin);
    printf("|______________________|\t"
           "C.Nikola Tesla\t\tD.Albert Einstein\n");
    
    // Menggandakan jumlah poin yang dimiliki oleh pemain
    printf("Poin soal ini:%d\n", poin *= 2);
    
    // Meminta pemain untuk memasukkan jawaban dengan menggunakan fungsi scanf()
    printf("jawaban anda : ");
    scanf("%c", &jawaban);
    
    // Membersihkan input buffer setelah meminta input dari pemain.
    while (getchar() != '\n')
        ;
    
    // Memproses jawaban yang dimasukkan oleh pemain dengan menggunakan statement if
    if (jawaban == 'B' || jawaban == 'b')
    {
        printf("Benar!\n\n");
        printf(" ______________________\n");
        printf("|Hadiah Anda saat ini: |\t"
               "pertanyaan ke 12\n");
        printf("|                      |\t"
               "Siapakah penulis buku Harry Potter?\n");
        printf("|%-22d|\t"
               "A.Stephen King\t\tB.George R.R. Martin\n",
               poin);
        printf("|______________________|\t"
               "C.Suzanne Collins\tD.J.K. Rowling\n");
        printf("Poin soal ini:%d\n", poin *= 2);
        printf("jawaban anda : ");
        scanf("%c", &jawaban);
        while (getchar() != '\n')
            ;
        if (jawaban == 'D' || jawaban == 'd')
        {
            printf("Benar!\n\n");
            printf(" ______________________\n");
            printf("|Hadiah Anda saat ini: |\t"
                   "pertanyaan ke 13\n");
            printf("|______________________|\t"
                   "Apa nama negara terkecil di dunia?\n");
            printf("|%-22d|\t"
                   "A.San Marino\t\tB.Andorra\n",
                   poin);
            printf("|______________________|\t"
                   "C.Vatikan\t\tD.Liechtenstein\n");
            printf("Poin soal ini:%d\n", poin *= 2);
            printf("jawaban anda : ");
            scanf("%c", &jawaban);
            while (getchar() != '\n')
                ;
            if (jawaban == 'C' || jawaban == 'c')
            {
                printf("Benar!\n\n");

                printf("Sekarang anda masuk ke babak terakhir yang memaksa anda mempertaruhkan semuanya. Dua pertanyaan terakhir dapat anda jawab untuk memperoleh hadiah utama. Namun, anda juga dapat berhenti di sini.\n");
                printf("PERINGATAN: Apabila anda gagal menjawab satu dari dua pertanyaan terakhir, maka semua hadiah anda akan hangus.");
                printf("Apakah anda ingin lanjut demi kesempatan mendapat hadiah utama?\n1. Lanjut apa pun yang terjadi\n2. Saya pikir sudah cukup. Saya berhenti saja.\n");
                printf("Jawaban Anda: ");
                scanf("%d", &check);
                while (getchar() != '\n')
                    ;
                if (check == 1)
                {
                    printf(" ______________________\n");
                    printf("|Hadiah Anda saat ini: |\t"
                           "pertanyaan ke 14\n");
                    printf("|______________________|\t"
                           "Apa nama sungai yang melintasi kota Paris?\n");
                    printf("|%-22d|\t"
                           "A.Sungai Seine\t\tB.Sungai Thames\n",
                           poin);
                    printf("|______________________|\t"
                           "C.Sungai Rhine\t\tD.Sungai Danube\n");
                    printf("Poin soal ini:%d\n", poin *= 2);
                    printf("jawaban anda : ");
                    scanf("%c", &jawaban);
                    while (getchar() != '\n')
                        ;
                    if (jawaban == 'A' || jawaban == 'a')
                    {
                        printf("Benar!\n\n");
                        printf(" ______________________\n");
                        printf("|Hadiah Anda saat ini: |\t"
                               "pertanyaan ke 15\n");
                        printf("|______________________|\t"
                               "Siapakah pelopor revolusi industri?\n");
                        printf("|%-22d|\t"
                               "A.Henry Ford\t\tB.Alexander Graham Bell\n",
                               poin);
                        printf("|______________________|\t"
                               "C.Thomas Edison\t\tD.James Watt\n");
                        printf("Poin soal ini:%d\n", poin *= 2);
                        printf("jawaban anda : ");
                        scanf("%c", &jawaban);
                        while (getchar() != '\n')
                            ;
                        if (jawaban == 'D' || jawaban == 'd')
                        {
                            poin += 361600000;
                            printf("benar\t\tpoin anda %d\n", poin);
                            *ptr = poin;
                        }
                        else
                        {
                            printf("jawaban salah\n");
                        }
                    }
                    else
                    {
                        printf("jawaban salah\n");
                    }
                }
                else
                {
                    printf("Pilihan bijak. ");
                }
            }
            else
            {
                printf("jawaban salah\n");
            }
        }
        else
        {
            printf("jawaban salah\n");
        }
    }

    return *ptr;
}
