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
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
    printf("jawaban anda : ");
    scanf("%c", &jawaban);
    while (getchar() != '\n');
    if (jawaban == 'c')
    {
        printf("benar\t\tpoin anda Rp:100000\n\n");
        printf("pertanyaan ke 2\t\tpoin Rp:200000\n");
        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
        printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
        printf("jawaban anda : ");
        scanf("%c", &jawaban);
        while (getchar() != '\n');
        if (jawaban == 'c')
        {
            printf("benar\t\tpoin anda Rp:200.000\n\n");
            printf("pertanyaan ke 3\t\tpoin Rp:400.000\n");
            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
            printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
            printf("jawaban anda : ");
            scanf("%c", &jawaban);
            while (getchar() != '\n');
            if (jawaban == 'c')
            {
                printf("benar\t\tpoin anda Rp:400.000\n\n");
                printf("pertanyaan ke 4\t\tpoin Rp:800.000\n");
                printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                printf("jawaban anda : ");
                scanf("%c", &jawaban);
                while (getchar() != '\n');
                if (jawaban == 'c')
                {
                    printf("benar\t\tpoin anda Rp:800.000\n\n", poin[0]);
                    printf("pertanyaan ke 5\t\tpoin Rp:1.600.000\n");
                    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                    printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                    printf("jawaban anda : ");
                    scanf("%c", &jawaban);
                    while (getchar() != '\n');
                    if (jawaban == 'c')
                    {
                        poin[0] = 1600000;
                        printf("benar\t\tpoin anda Rp:1.600.000\n\n");
                        printf("pertanyaan ke 6\t\tpoin Rp:p3.200.000\n");
                        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                        printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                        printf("jawaban anda : ");
                        scanf("%c", &jawaban);
                        while (getchar() != '\n');
                        if (jawaban == 'c')
                        {
                            printf("benar\t\tpoin anda Rp:3.200.000\n\n");
                            printf("pertanyaan ke 7\t\tpoin Rp:6.400.000\n");
                            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                            printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                            printf("jawaban anda : ");
                            scanf("%c", &jawaban);
                            while (getchar() != '\n');
                            if (jawaban == 'c')
                            { 
                                printf("benar\t\tpoin anda Rp:6.400.000\n\n");
                                printf("pertanyaan ke 8\t\tpoin Rp:12.800.000\n");
                                printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                                printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                                printf("jawaban anda : ");
                                scanf("%c", &jawaban);
                                while (getchar() != '\n');
                                if (jawaban == 'c')
                                {      
                                    printf("benar\t\tpoin anda Rp:12.800.000\n\n");
                                    printf("pertanyaan ke 9\t\tpoin Rp:25.600.000\n");
                                    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                                    printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                                    printf("jawaban anda : ");
                                    scanf("%c", &jawaban);
                                    while (getchar() != '\n');
                                    if (jawaban == 'c')
                                    {
                                        printf("benar\t\tpoin anda Rp:25.600.000\n\n");
                                        printf("pertanyaan ke 10\t\tpoin Rp:51.200.000\n");
                                        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                                        printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                                        printf("jawaban anda : ");
                                        scanf("%c", &jawaban);
                                        while (getchar() != '\n');
                                        if (jawaban == 'c')
                                        {
                                            poin[1] = 51200000 - poin[0];
                                            printf("benar\t\tpoin anda Rp:51.200.000\n\n");
                                            printf("pertanyaan ke 11\t\tpoin Rp:102.400.000\n");
                                            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                                            printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                                            printf("jawaban anda : ");
                                            scanf("%c", &jawaban);
                                            while (getchar() != '\n')
                                                ;
                                            if (jawaban == 'c')
                                            {
                                                printf("benar\t\tpoin anda Rp:102.400.000\n\n");
                                                printf("pertanyaan ke 12\t\tpoin Rp:204.800.000\n");
                                                printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                                                printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                                                printf("jawaban anda : ");
                                                scanf("%c", &jawaban);
                                                while (getchar() != '\n')
                                                    ;
                                                if (jawaban == 'c')
                                                {                       
                                                    printf("benar\t\tpoin anda Rp:204.800.000\n\n");
                                                    printf("pertanyaan ke 13\t\tpoin Rp:409.600.000\n");
                                                    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                                                    printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                                                    printf("jawaban anda : ");
                                                    scanf("%c", &jawaban);
                                                    while (getchar() != '\n');
                                                    if (jawaban == 'c')
                                                    {                           
                                                        printf("benar\t\tpoin anda Rp:409.600.000\n\n");
                                                        printf("pertanyaan ke 14\t\tpoin Rp:819.200.000\n");
                                                        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                                                        printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                                                        printf("jawaban anda : ");
                                                        scanf("%c", &jawaban);
                                                        while (getchar() != '\n') ;
                                                        if (jawaban == 'c')
                                                        {                               
                                                            printf("benar\t\tpoin anda Rp:819.200.000\n\n");
                                                            printf("pertanyaan ke 15\t\tpoin Rp:1.638.400.000\n");
                                                            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
                                                            printf("A.xxxxxxxx\t\tB.xxxxxxxx\nC.xxxxxxxx\t\tD.xxxxxxxx\n");
                                                            printf("jawaban anda : ");
                                                            scanf("%c", &jawaban);
                                                            while (getchar() != '\n')
                                                                ;
                                                            if (jawaban == 'c')
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
