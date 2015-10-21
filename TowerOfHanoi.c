#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void TowerOfHanoi(int num, char src, char dest, char auxi)
{
    // Base case: for only 1 disk.
    if(num==0)
    {
     //   printf("Moving %d disk from %c  to %c  \n", num, src, dest);
        return;
    }
    //Recursive case: For more than 1 disks.
    TowerOfHanoi(num-1, src, auxi, dest);

    printf("Moving %d disk from %c to %c  \n", num, src, dest);

    //Moving n-1 disks from auxi to dest using src
    TowerOfHanoi(num-1, auxi, dest, src);
}

int main()
{
    int n=2;
    TowerOfHanoi(n, 'S', 'D', 'A');
    return 0;
}
