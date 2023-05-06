#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kelompokQuestion1();
int kelompokQuestion2();
int kelompokQuestion3();
int poin;
int *ptr = &poin;
int main(int argc, char const *argv[])
{

       if (argc != 3)
       {
              printf("Login Gagal!\n");
              printf("Cara Login: ./FileAppProram username password");
       }

       char usernameInp[30], passwordInp[30];
       strcpy(usernameInp, argv[1]);
       strcpy(passwordInp, argv[2]);

       FILE *fptr;

       if ((fptr = fopen("database/login.bin", "rb")) == NULL)
       {
              printf("No File Detected!");
              exit(1);
       }

       char acc[35];
       fread(acc, sizeof(char), sizeof(acc), fptr);

       fclose(fptr);

       char *str[3];
       char username[30], password[30];
       int i = 0;

       str[i] = strtok(acc, "$");
       while (str[i++] != NULL)
       {
              str[i] = strtok(NULL, "$");
       }

       strcpy(username, str[0]);
       strcpy(password, str[1]);

       if ((strcmp(username, usernameInp) == 0) && (strcmp(password, passwordInp) == 0))
       {
              printf(
                  "\t\t\t __        _______ _     ____ ___  __  __ _____   _____ ___    ____ _____  _    ____   ___  _   _ ___ ______ _            \n"
                  "\t\t\t \\ \\      / / ____| |   / ___/ _ \\|  \\/  | ____| |_   _/ _ \\  / ___|_   _|/ \\  |  _ \\ / _ \\| | | |_ _|__  / | |    \n"
                  "\t\t\t  \\ \\ /\\ / /|  _| | |  | |  | | | | |\\/| |  _|     | || | | | \\___ \\ | | / _ \\ | |_) | | | | | | || |  / /  | |     \n"
                  "\t\t\t   \\ V  V / | |___| |__| |__| |_| | |  | | |___    | || |_| |  ___) || |/ ___ \\|  _ <| |_| | |_| || | / /_  |_|          \n"
                  "\t\t\t    \\_/\\_/  |_____|_____\\____\\___/|_|  |_|_____|   |_| \\___/  |____/ |_/_/   \\_\\_| \\_\\____\\_\\___/|___/____| (_) \n\n\n\n\n\n");
              ;
       }
       else
       {
              printf("Anda Gagal Login\n");
       }

       printf(
           "  ___ _   _ _    ___ ___  \n"
           " | _ \\ | | | |  | __/ __| \n"
           " |   / |_| | |__| _|\\__ \\ \n"
           " |_|_\\____/|____|___|___/ \n");

       printf(" ______________________________________________________________________________________________________________________________________________________\n");
       printf("|%-150s|\n", "");
       printf("|%-144s|\n", "\tBerikut ini adalah beberapa peraturan permainan: ");
       printf("|%-144s|\n", "\t1. Permainan akan dibagi menjadi 3 ronde yang mana di setiap ronde terdapat 5 pertanyaan");
       printf("|%-144s|\n", "\t2. Masing-masing pertanyaan memiliki hadiah yang dapat diperoleh jika pertanyaan dijawab dengan benar");
       printf("|%-144s|\n", "\t3. Jika berhasil menjawab 5 pertanyaan dengan benar, maka hadiah dari 5 pertanyaan tersebut akan disimpan dan masuk ke ronde");
       printf("|%-144s|\n", "\t   berikutnya");
       printf("|%-144s|\n", "\t4. Hadiah akan hangus dan tidak dapat melanjutkan permainan jika salah menjawab satu pertanyaan di dalam satu ronde");
       printf("|%-144s|\n", "\t5. Hadiah dari ronde sebelumnya dapat diperoleh jika terhenti di ronde selanjutnya");
       printf("|%-144s|\n", "\t6. Jika berhasil menjawab semua pertanyaan dari tiap ronde dengan benar, maka akan memperoleh hadiah utama");
       printf("|%-144s|\n", "\t7. Hadiah utama adalah jumlah hadiah dari seluruh pertanyaan yang telah dijawab dengan benar");

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
       printf("|______________________________________________________________________________________________________________________________________________________|\n");
       kelompokQuestion1();
       if (poin == 1600000)
       {
              kelompokQuestion2();
       }

       if (poin == 51200000)
       {
              kelompokQuestion3();
       }

       if (poin == 2000000000)
       {
              printf("Selamat Anda berhasil memperoleh hadiah utama. Pengetahuan Anda sangat luas!");
       }
}
int kelompokQuestion1()
{

       int poin = 0;
       char jawaban;

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
       printf("Poin soal ini:%d\n", poin += 100000);
       printf("jawaban anda : ");
       scanf("%c", &jawaban);
       while (getchar() != '\n')
              ;
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
                                          printf("jawaban salah");
                                   }
                            }
                            else
                            {
                                   printf("jawaban salah");
                            }
                     }
                     else
                     {
                            printf("jawaban salah");
                     }
              }
              else
              {
                     printf("jawaban salah");
              }
       }
       else
       {
              printf("jawaban salah");
       }
       return *ptr;
}

int kelompokQuestion2()
{
       char jawaban;
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
                                          printf("jawaban salah");
                                   }
                            }
                            else
                            {
                                   printf("jawaban salah");
                            }
                     }
                     else
                     {
                            printf("jawaban salah");
                     }
              }
              else
              {
                     printf("jawaban salah");
              }
       }
       else
       {
              printf("jawaban salah");
       }
       return *ptr;
}

int kelompokQuestion3()
{

       char jawaban;
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
                                   poin += 361600000;
                                   if (jawaban == 'D' || jawaban == 'd')
                                   {
                                          printf("benar\t\tpoin anda %d\n", poin);
                                          *ptr = poin;
                                   }
                                   else
                                   {
                                          printf("jawaban salah");
                                   }
                            }
                            else
                            {
                                   printf("jawaban salah");
                            }
                     }
                     else
                     {
                            printf("jawaban salah");
                     }
              }
              else
              {
                     printf("jawaban salah");
              }
       }
       else
       {
              printf("jawaban salah");
       }
       return *ptr;
}
