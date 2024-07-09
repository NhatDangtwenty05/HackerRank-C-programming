#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() 
{
    int a = 37, b = 22;
    
    // AND
    unsigned int x = a & b; //(000)->(000)... 1&1 -> 1, 1&0 -> 0, 0&0 -> 0
    printf("%u\n", x);

    // OR
    unsigned int y = a | b; //(000)->(000)... 1|1 -> 1, 1|0 -> 1, 0|0 -> 0
    printf("%u\n", y);

    // NOT
    int z = ~a; //(000)->(111)... ~1 -> 0, ~0 -> 1 
    printf("%d\n", z);

    // XOR
    int t = a ^ b; //(000)^(000)->(000)... 1^1 -> 0, 1^0 -> 1, 0^0 -> 0
    printf("%d\n", t);
    // left shift
    int left = a << 2; // 100101 -> 100101'00'	==	10010100
    printf("%d\n", left);
    // right shift
    int right = b >> 3; // 10110 -> 10 delete(110) == 10
    printf("%d\n", right);  

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    while (getchar() != '\n') {} //	fflush(stdin);	-> clear all

    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // gets(name);	name[] = a b c d e f ... fgets(enter) \0 
    name[strcspn(name, "\n")] = 0;

    printf("age: %d\nname: %s\n", age, name);

    int num_of_char = strlen(name);
    name[num_of_char - 1] = '\0'; // name[] = a b c d e f ... \0 
    num_of_char = strlen(name); // update
    printf("num of char: %d", num_of_char);

    return 0;	
}
