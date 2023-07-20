
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#define M 1000 
char s1[M], s2[M];
int a[M], b[M];
int  len1, len2, i;

void BJ()
{
    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 > len2)
        std::cout << "greater\n";
    if (len1 < len2)
        std::cout <<"less\n";
    if (len1 == len2)
    {
        int cmp = strcmp(s1, s2);
        if (cmp > 0) {
            std::cout << "greater\n";
        }
        else if (cmp < 0) {
            std::cout << "less\n";
        }
        else {
            std::cout << "equal\n";
        }
    }
}

void string2char(std::string src, char* dest) {
    memcpy(dest, src.c_str(), strlen(src.c_str()));
}

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        std::cout << "invalid input!\n";
        return 1;
    }
    strcpy(s1, argv[1]);
    strcpy(s2, argv[2]);
    BJ();
}
