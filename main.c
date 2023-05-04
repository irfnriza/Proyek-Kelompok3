#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    if((strcmp(username, usernameInp)==0)&&(strcmp(password, passwordInp)==0)){
        printf("Anda Berhasil Login!");
        
        char jawaban;
    int poin[]= {0,0,0};
    
    printf("pertanyaan ke 1\t\tpoin Rp:100.000\n");
    printf("Apa warna bendera Indonesia?\n");
    printf("A.Merah dan putih\t\tB.Biru dan kuning\nC.Hitam dan merah\t\tD.Hijau dan putih\n");
    printf("jawaban anda : ");
    scanf("%c", &jawaban);
    while (getchar() != '\n');
    if (jawaban == 'A' || jawaban == 'a')
    {
        printf("benar\t\tpoin anda Rp:100000\n\n");
        printf("pertanyaan ke 2\t\tpoin Rp:200000\n");
        printf("Berapa jumlah provinsi di Indonesia saat ini?\n");
        printf("A.31\t\tB.30\nC.41\t\tD.38\n");
        printf("jawaban anda : ");
        scanf("%c", &jawaban);
        while (getchar() != '\n');
        if (jawaban == 'D' || jawaban == 'd')
        {
            printf("benar\t\tpoin anda Rp:200.000\n\n");
            printf("pertanyaan ke 3\t\tpoin Rp:400.000\n");
            printf("Apa nama pulau terbesar di Indonesia?\n");
            printf("A.Kalimantan\t\tB.Sulawesi\nC.Sumatra\t\tD.Jawa\n");
            printf("jawaban anda : ");
            scanf("%c", &jawaban);
            while (getchar() != '\n');
            if (jawaban == 'A' || jawaban == 'a')
            {
                printf("benar\t\tpoin anda Rp:400.000\n\n");
                printf("pertanyaan ke 4\t\tpoin Rp:800.000\n");
                printf("Secara etimologis, demokrasi berasal dari bahasa Yunani, yaitu demos dan kratos yang artinya?\n");
                printf("A.Kekuasaan negara\t\tB.Kekuasaan pemerintah\nC.Pemerintahan rakyat\t\tD.Pemerintahan berdaulat\n");
                printf("jawaban anda : ");
                scanf("%c", &jawaban);
                while (getchar() != '\n');
                if (jawaban == 'C' || jawaban == 'c')
                {
                    printf("benar\t\tpoin anda Rp:800.000\n\n", poin[0]);
                    printf("pertanyaan ke 5\t\tpoin Rp:1.600.000\n");
                    printf("Demokrasi yang diterapkan di setiap negara berbeda-beda disebabkan oleh faktor-faktor berikut, kecuali?\n");
                    printf("A.Ideologi\t\tB.Sejarah\nC.Budaya\t\tD.Jumlah penduduk\n");
                    printf("jawaban anda : ");
                    scanf("%c", &jawaban);
                    while (getchar() != '\n');
                    if (jawaban == 'A' || jawaban == 'a')
                    {
                        poin[0] = 1600000;
                        printf("benar\t\tpoin anda Rp:1.600.000\n\n");
                        printf("pertanyaan ke 6\t\tpoin Rp:p3.200.000\n");
                        printf("Di benua mana negara Rusia terletak?\n");
                        printf("A.Australia\t\tB.Amerika\nC.Afrika\t\tD.Eropa\n");
                        printf("jawaban anda : ");
                        scanf("%c", &jawaban);
                        while (getchar() != '\n');
                        if (jawaban == 'D' || jawaban == 'd')
                        {
                            printf("benar\t\tpoin anda Rp:3.200.000\n\n");
                            printf("pertanyaan ke 7\t\tpoin Rp:6.400.000\n");
                            printf("Siapakah presiden pertama Amerika Serikat?\n");
                            printf("A.George Washington\t\tB.Thomas Jefferson\nC.John F. Kennedy\t\tD.Abraham Lincoln\n");
                            printf("jawaban anda : ");
                            scanf("%c", &jawaban);
                            while (getchar() != '\n');
                            if (jawaban == 'A' || jawaban == 'a')
                            { 
                                printf("benar\t\tpoin anda Rp:6.400.000\n\n");
                                printf("pertanyaan ke 8\t\tpoin Rp:12.800.000\n");
                                printf("Apa nama ibukota Australia?\n");
                                printf("A.Sydney\t\tB.Canberra\nC.Melbourne\t\tD.Brisbane\n");
                                printf("jawaban anda : ");
                                scanf("%c", &jawaban);
                                while (getchar() != '\n');
                                if (jawaban == 'B' || jawaban == 'b')
                                {      
                                    printf("benar\t\tpoin anda Rp:12.800.000\n\n");
                                    printf("pertanyaan ke 9\t\tpoin Rp:25.600.000\n");
                                    printf("Siapakah pelukis terkenal yang melukis Mona Lisa?\n");
                                    printf("A.Vincent van Gogh\t\tB.Leonardo da Vinci\nC.Pablo Picasso\t\tD.Michelangelo\n");
                                    printf("jawaban anda : ");
                                    scanf("%c", &jawaban);
                                    while (getchar() != '\n');
                                    if (jawaban == 'B' || jawaban == 'b')
                                    {
                                        printf("benar\t\tpoin anda Rp:25.600.000\n\n");
                                        printf("pertanyaan ke 10\t\tpoin Rp:51.200.000\n");
                                        printf("Apa nama sungai terpanjang di dunia?\n");
                                        printf("A.Sungai Amazon\t\tB.Sungai Yangtze\nC.Sungai Nil\t\tD.Sungai Mississipi\n");
                                        printf("jawaban anda : ");
                                        scanf("%c", &jawaban);
                                        while (getchar() != '\n');
                                        if (jawaban == 'C' || jawaban == 'c')
                                        {
                                            poin[1] = 51200000 - poin[0];
                                            printf("benar\t\tpoin anda Rp:51.200.000\n\n");
                                            printf("pertanyaan ke 11\t\tpoin Rp:102.400.000\n");
                                            printf("Siapakah penemu telepon?\n");
                                            printf("A.Thomas Edison\t\tB.Alexander Graham Bell\nC.Nikola Tesla\t\tD.Albert Einstein\n");
                                            printf("jawaban anda : ");
                                            scanf("%c", &jawaban);
                                            while (getchar() != '\n')
                                                ;
                                            if (jawaban == 'B' || jawaban == 'b')
                                            {
                                                printf("benar\t\tpoin anda Rp:102.400.000\n\n");
                                                printf("pertanyaan ke 12\t\tpoin Rp:204.800.000\n");
                                                printf("Siapakah penulis buku Harry Potter?\n");
                                                printf("A.Stephen King\t\tB.George R.R. Martin\nC.Suzanne Collins\t\tD.J.K. Rowling\n");
                                                printf("jawaban anda : ");
                                                scanf("%c", &jawaban);
                                                while (getchar() != '\n')
                                                    ;
                                                if (jawaban == 'D' || jawaban == 'd')
                                                {                       
                                                    printf("benar\t\tpoin anda Rp:204.800.000\n\n");
                                                    printf("pertanyaan ke 13\t\tpoin Rp:409.600.000\n");
                                                    printf("Apa nama negara terkecil di dunia?\n");
                                                    printf("A.San Marino\t\tB.Andorra\nC.Vatikan\t\tD.Liechtenstein\n");
                                                    printf("jawaban anda : ");
                                                    scanf("%c", &jawaban);
                                                    while (getchar() != '\n');
                                                    if (jawaban == 'C' || jawaban == 'c')
                                                    {                           
                                                        printf("benar\t\tpoin anda Rp:409.600.000\n\n");
                                                        printf("pertanyaan ke 14\t\tpoin Rp:819.200.000\n");
                                                        printf("Apa nama sungai yang melintasi kota Paris?\n");
                                                        printf("A.Sungai Seine\t\tB.Sungai Thames\nC.Sungai Rhine\t\tD.Sungai Danube\n");
                                                        printf("jawaban anda : ");
                                                        scanf("%c", &jawaban);
                                                        while (getchar() != '\n') ;
                                                        if (jawaban == 'A' || jawaban == 'a')
                                                        {                               
                                                            printf("benar\t\tpoin anda Rp:819.200.000\n\n");
                                                            printf("pertanyaan ke 15\t\tpoin Rp:1.638.400.000\n");
                                                            printf("Siapakah pelopor revolusi industri?\n");
                                                            printf("A.Henry Ford\t\tB.Alexander Graham Bell\nC.Thomas Edison\t\tD.James Watt\n");
                                                            printf("jawaban anda : ");
                                                            scanf("%c", &jawaban);
                                                            while (getchar() != '\n')
                                                                ;
                                                            if (jawaban == 'D' || jawaban == 'd')
                                                            {
                                                                poin[2] = 1638400000 - poin[1] - poin[0];
                                                                printf("benar\n\n");
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
    printf("total poin anda Rp:%i",poin[0]+poin[1]+poin[2]);
    }
    else{
        printf("Anda Gagal Login");
    }

    return 0;
}
