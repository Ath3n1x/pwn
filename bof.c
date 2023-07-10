#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void init()
{
    setvbuf(stdout, 0, 2, 0);
    setvbuf(stdin, 0, 2, 0);
    //setvbuf(stderr, 0, 2, 0);
    alarm(60);
}

void iaminvisibe()
{
    printf("Congratulations!\n");
    printf("You have entered in the secret function!\n");
    __asm__("pop %rax");
    system("cat flag.txt");
}

void func()
{
    init();
    char buffer[20];
    printf("Break me if you can\n");
    printf("Gib me input\n");
    scanf("%s", buffer);
    printf("entered input is: %s\n", buffer);    
}

int main()
{

    func();

    return 0;
}