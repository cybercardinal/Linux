#include<stdio.h>
#include<unistd.h> // for fork()
 
int main()
{
 
    int flag = 0; // Counter variable
    while (fork() > 0)
    {
                flag++;  // Counts the No. of Zombie Processes
                printf("%d\n", flag);
    }
    return 0;
}
