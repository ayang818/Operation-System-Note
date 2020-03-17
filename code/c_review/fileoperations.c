#include <stdio.h>

const char filename[] = "D:/test.txt";

void writefile() {
    FILE *fp = NULL;

    fp = fopen(filename, "w+");
    fputs("Hello world\n from ayang818` first c I/O", fp);
    fclose(fp);
}

void readfile() {
    FILE *fp = NULL;
    char buffer[255];

    fp = fopen(filename, "r");
    char *string = fgets(buffer, 255, fp);
    printf("%s", string);
    while (string != NULL) {
        string = fgets(buffer, 255, fp);
        if (string != NULL)
        printf("%s", string);
    }
    fclose(fp);
}

int main() {
    writefile();
    readfile();
}