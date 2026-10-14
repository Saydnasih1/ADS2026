#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int hashTable[SIZE];
void initTable()
{
 for(int i=0;i<SIZE;i++)
  {
    hashTable[i]=-1;
  }
}
int hashFunction(int key)
{
 return key%SIZE;
}
void insert(int key)
{
 int index=hashFunction(key);
 int originalIndex=index;
 while(hashTable[index]!=-1)
  {
   if(index==originalIndex)
    {
     printf("Hash Table is full!cannot insert key %d\n",key);
     return;
    }
  }
 hashTable[index]=key;
 printf("inserted %d at index %d\n",key,index);
}
void displayTable()
{
  printf("\n-----Hash Table Contents---\n");
  for(int i=0;i<SIZE;i++)
  {
    if(hashTable[i]!=-1)
    {
     printf("index %d :%d\n",i,hashTable[i]);
    }
    else
    {
     printf("index %d:Empty\n",i);
    }
  }
  printf("------------------\n\n");
}
int main()
{
  initTable();
  insert(12);
  insert(22);
  insert(42);
  insert(15);
  displayTable();
  return 0;
}
