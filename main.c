#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kelompokQuestion1();
int kelompokQuestion2();
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

    if((strcmp(username, usernameInp)==0)&&(strcmp(password, passwordInp)==0)){
        printf("Anda Berhasil Login!\n");
    }
    else{
        printf("Anda Gagal Login\n");
    }
        
    kelompokQuestion1();
    if(poin==1600000){
        printf("berhasil");
    }
}
    
    int kelompokQuestion1()
{

    int poin = 0;
    char jawaban;

    poin += 100000;
    printf("pertanyaan ke 1\t\tpoin %d\n", poin);
    printf("Apa warna bendera Indonesia?\n");
    printf("A.Merah dan putih\t\tB.Biru dan kuning\nC.Hitam dan merah\t\tD.Hijau dan putih\n");
    printf("jawaban anda : ");
    scanf("%c", &jawaban);
    while (getchar() != '\n');
    if (jawaban == 'A')
    {
        printf("benar\t\tpoin anda %d\n\n", poin);
        printf("pertanyaan ke 2\t\tpoin %d\n", poin *= 2);
        printf("Berapa jumlah provinsi di Indonesia saat ini?\n");
        printf("A.31\t\tB.30\nC.41\t\tD.38\n");
        printf("jawaban anda : ");
        scanf("%c", &jawaban);
        while (getchar() != '\n');
        if (jawaban == 'D')
        {
            printf("benar\t\tpoin anda %d\n\n", poin);
            printf("pertanyaan ke 3\t\tpoin %d\n", poin *= 2);
            printf("Apa nama pulau terbesar di Indonesia?\n");
            printf("A.Kalimantan\t\tB.Sulawesi\nC.Sumatra\t\tD.Jawa\n");
            printf("jawaban anda : ");
            scanf("%c", &jawaban);
            while (getchar() != '\n');
            if (jawaban == 'A')
            {
                printf("benar\t\tpoin anda %d\n\n", poin);
                printf("pertanyaan ke 4\t\tpoin %d\n", poin *= 2);
                printf("Secara etimologis, demokrasi berasal dari bahasa Yunani, yaitu demos dan kratos yang artinya?\n");
                printf("A.Kekuasaan negara\t\tB.Kekuasaan pemerintah\nC.Pemerintahan rakyat\t\tD.Pemerintahan berdaulat\n");
                printf("jawaban anda : ");
                scanf("%c", &jawaban);
                while (getchar() != '\n');
                if (jawaban == 'C')
                {
                    printf("benar\t\tpoin anda %d\n\n", poin);
                    printf("pertanyaan ke 5\t\tpoin %d\n", poin *= 2);
                     printf("Demokrasi yang diterapkan di setiap negara berbeda-beda disebabkan oleh faktor-faktor berikut, kecuali?\n");
                    printf("A.Ideologi\t\tB.Sejarah\nC.Budaya\t\tD.Jumlah penduduk\n");
                    printf("jawaban anda : ");
                    scanf("%c", &jawaban);
                    while (getchar() != '\n');
                    if (jawaban == 'A')
                    {
                        printf("benar\t\tpoin anda Rp:1.600.000\n\n");
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

    int poin = 0;
    char jawaban;

    poin += 1600000;
    printf("pertanyaan ke 6\t\tpoin %d\n", poin);
    printf("Di benua mana negara Rusia terletak?\n");
    printf("A.Australia\t\tB.Amerika\nC.Afrika\t\tD.Eropa\n");
    printf("jawaban anda : ");
    scanf("%c", &jawaban);
    while (getchar() != '\n')
        ;
    if (jawaban == 'D' || jawaban == 'd')
    {
        printf("benar\t\tpoin anda %d\n\n", poin);
        printf("pertanyaan ke 7\t\tpoin %d\n", poin *= 2);
        printf("Berapa jumlah provinsi di Indonesia saat ini?\n");
        printf("A.31\t\tB.30\nC.41\t\tD.38\n");
        printf("jawaban anda : ");
        scanf("%c", &jawaban);
        while (getchar() != '\n')
            ;
        if (jawaban == 'D')
        {
            printf("benar\t\tpoin anda %d\n\n", poin);
            printf("pertanyaan ke 8\t\tpoin %d\n", poin *= 2);
            printf("Siapakah presiden pertama Amerika Serikat?\n");
            printf("A.George Washington\t\tB.Thomas Jefferson\nC.John F. Kennedy\t\tD.Abraham Lincoln\n");
            printf("jawaban anda : ");
            scanf("%c", &jawaban);
            while (getchar() != '\n')
                ;
            if (jawaban == 'A' || jawaban == 'a')
            {
                printf("benar\t\tpoin anda %d\n\n", poin);
                printf("pertanyaan ke 9\t\tpoin %d\n", poin *= 2);
                printf("Apa nama ibukota Australia?\n");
                printf("A.Sydney\t\tB.Canberra\nC.Melbourne\t\tD.Brisbane\n");
                printf("jawaban anda : ");
                scanf("%c", &jawaban);
                while (getchar() != '\n')
                    ;
                if (jawaban == 'B' || jawaban == 'b')
                {
                    printf("benar\t\tpoin anda %d\n\n", poin);
                    printf("pertanyaan ke 10\t\tpoin %d\n", poin *= 2);
                    printf("Siapakah pelukis terkenal yang melukis Mona Lisa?\n");
                    printf("A.Vincent van Gogh\t\tB.Leonardo da Vinci\nC.Pablo Picasso\t\tD.Michelangelo\n");
                    printf("jawaban anda : ");
                    scanf("%c", &jawaban);
                    while (getchar() != '\n')
                        ;
                    if (jawaban == 'B' || jawaban == 'b')
                    {
                        printf("benar\t\tpoin anda Rp:1.600.000\n\n");
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
