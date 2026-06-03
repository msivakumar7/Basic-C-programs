#include <stdio.h>
#define SIZE 10
int hashTable[SIZE];
void insert(int key) // LINEAR PROBING TECHNIQUE!!!
{
    int index = key % SIZE;
    while(hashTable[index] != -1)
        index = (index + 1)%SIZE;
    hashTable[index]  = key;
}
void insertDoub(int key)
{
    int h = key % SIZE;
    int step = 7 - (key % SIZE);
    int i = 0;
    int index;

    for(int i = 0;i < SIZE;i++)
    {
        index = (h + i * step) % SIZE;

        if(hashTable[index] == -1)
        {
            hashTable[index] = key;
            return;
        }

        i++;
    }
    printf("Hash table is Full !!!");
}
int main()
{
for(int i = 0;i < SIZE;i++)
    hashTable[i] = -1;
    
    int n,value;
    scanf("%d",&n);
if(n > SIZE)
{
    printf("Huge Data to insert, It is not possible to insert All Data!!!");
        return 0;
}
for(int i = 0;i < n;i++)
    {
        scanf("%d",&value);
        insertDoub(value);
    }
    for(int i = 0;i < SIZE;i++)
        printf("%d %d\n",i,hashTable[i]);
    return 0;
}
