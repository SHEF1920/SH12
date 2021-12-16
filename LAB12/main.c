#include <stdio.h>

int main() {
    FILE *fin1, *fin2, *fout;
    fin1 = fopen("C:/Users/ku10/Desktop/ITMO_Learn/Input1.txt", "r");
    fin2 = fopen("C:/Users/ku10/Desktop/ITMO_Learn/Input2.txt", "r");
    fout = fopen("C:/Users/ku10/Desktop/ITMO_Learn/Output.txt", "w");
    char ch;

    while (1)
    {
        ch = getc(fin1);
        if (ch == EOF)
        {
            fprintf(fout, " ");
            break;
        }
        else
            putc(ch, fout);
    }

    while (1)
    {
        ch = getc(fin2);
        if (ch == EOF)
            break;
        else
            putc(ch, fout);
    }

    fclose(fin1);
    fclose(fin2);
    fclose(fout);
}
