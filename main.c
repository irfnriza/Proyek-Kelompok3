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
    }
    else{
        printf("Anda Gagal Login");
    }

    return 0;
}
