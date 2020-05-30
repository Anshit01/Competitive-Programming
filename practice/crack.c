
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }
    char *hash = argv[1];
    char salt[3];
    salt[0] = hash[0];
    salt[1] = hash[1];
    salt[2] = '\0';
    char pw[6] = "\0\0\0\0\0\0";
    
    for(char a = '\0'; a <= 'z'; a = (a == '\0')? 'A': (a == 'Z')? 'a':a+1)
    {
        for(char b = '\0'; b <= 'z'; b = (b == '\0')? 'A': (b == 'Z')? 'a':b+1)
        {
            for(char c = '\0'; c <= 'z'; c = (c == '\0')? 'A': (c == 'Z')? 'a':c+1)
            {
                for(char d = '\0'; d <= 'z'; d = (d == '\0')? 'A': (d == 'Z')? 'a':d+1)
                {
                    for(char e = '\0'; e <= 'z'; e = (e == '\0')? 'A': (e == 'Z')? 'a':e+1)
                    {
                        pw[0] = e;
                        pw[1] = d;
                        pw[3] = c;
                        pw[4] = b;
                        pw[5] = a;
                        if(strcmp(hash, crypt1(pw, salt)) == 0)
                        {
                            printf("%s\n", pw);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
