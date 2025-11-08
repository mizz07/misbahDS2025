#include <stdio.h>
#define SIZE 10
int hashTable[SIZE];
int hashFunction(int key, int size) { return key % size; }
void initHashTable() { for(int i=0;i<SIZE;i++) hashTable[i]=-1; }
void insert(int key) {
 int index = hashFunction(key, SIZE);
 int i=0;
 while(hashTable[(index+i)%SIZE]!=-1) i++;
 hashTable[(index+i)%SIZE]=key;
 printf("%d inserted at index %d\n", key, (index+i)%SIZE);
}
void search(int key) {
 int index=hashFunction(key,SIZE), i=0;
 while(hashTable[(index+i)%SIZE]!=-1) {
 if(hashTable[(index+i)%SIZE]==key) {
 printf("%d found at index %d\n",key,(index+i)%SIZE);
 return;
 }
 i++; if(i==SIZE) break;
 }
 printf("%d not found\n",key);
}
void deleteKey(int key){
 int index=hashFunction(key,SIZE),i=0;
 while(hashTable[(index+i)%SIZE]!=-1){
 if(hashTable[(index+i)%SIZE]==key){
 hashTable[(index+i)%SIZE]=-1;
 printf("%d deleted\n",key);
 return;
 }
 i++; if(i==SIZE) break;
 }
 printf("%d not found to delete\n",key);
}
void display(){
 printf("Hash Table:\n");
 for(int i=0;i<SIZE;i++){
 if(hashTable[i]!=-1) printf("Index %d -> %d\n",i,hashTable[i]);
 else printf("Index %d -> [empty]\n",i);
 }
}
int main(){
 initHashTable();
 insert(5); insert(15); insert(25);
 display();
 search(15);
 deleteKey(15);
 display();
 return 0;
}

Output:
5 inserted at index 5
15 inserted at index 6
25 inserted at index 7
Hash Table:
Index 0 -> [empty]
Index 1 -> [empty]
Index 2 -> [empty]
Index 3 -> [empty]
Index 4 -> [empty]
Index 5 -> 5
Index 6 -> 15
Index 7 -> 25
Index 8 -> [empty]
Index 9 -> [empty]
15 found at index 6
15 deleted
Hash Table:
Index 0 -> [empty]
Index 1 -> [empty]
Index 2 -> [empty]
Index 3 -> [empty]
Index 4 -> [empty]
Index 5 -> 5
Index 6 -> [empty]
Index 7 -> 25
Index 8 -> [empty]
Index 9 -> [empty]

