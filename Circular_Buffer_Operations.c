#include <stdio.h>

#define SIZE 5   

int main() 
{
    int buffer[SIZE];

    int head = 0;   // write pointer (producer)
    int tail = 0;   // read pointer (consumer)
    int count = 0;  // To keep track of elements and print

    // Producer writes 5 elements
    buffer[head] = 10; 
    head = (head + 1) % SIZE; 
    count++;
    
    buffer[head] = 20; 
    head = (head + 1) % SIZE; 
    count++;
    
    buffer[head] = 30; 
    head = (head + 1) % SIZE; 
    count++;
    
    buffer[head] = 40; 
    head = (head + 1) % SIZE; 
    count++;
    
    buffer[head] = 50; 
    head = (head + 1) % SIZE; 
    count++;

    // Consumer reads 3 elements
    printf("%d\n", buffer[tail]); //10
    tail = (tail + 1) % SIZE; 
    count--; 
    
    printf("%d\n", buffer[tail]); //20
    tail = (tail + 1) % SIZE; 
    count--;
    
    printf("%d\n", buffer[tail]); //30
    tail = (tail + 1) % SIZE; 
    count--;

    //Write two more elements
    buffer[head] = 60; 
    head = (head + 1) % SIZE; 
    count++;
    
    buffer[head] = 70; 
    head = (head + 1) % SIZE; 
    count++;

    // Consumer reads remaining elements
    while (count > 0) 
    {
        printf("%d\n", buffer[tail]);
        tail = (tail + 1) % SIZE;
        count--;
    }

    return 0;
}
