//#pragma pack(1)
#pragma pack(2)
//#pragma pack(4)

#include <stdio.h>

struct s0 {
    int a;         //4
    short int b;   //2
    signed char c; //1
    signed char d; //1
};//8

struct s1 {
    int a;             //4  
    signed char b[3];  //3 
    int c;         //4
    signed char d;     //1

};//14

struct s2 {
    int a;            //4
    signed char c;    //1
    int x;            //4
    signed char y;    //1
};//16

#define getoffset(type,mem) \
    ( unsigned int ) &( (type *)0 )->mem
// => ( unsigned int ) &( *(type *)0 ).mem
int main(void)
{
    printf("sizeof(s0)=%d\n", sizeof(struct s0));
    printf("sizeof(s1)=%d\n", sizeof(struct s1));
    printf("sizeof(s2)=%d\n", sizeof(struct s2));

    printf("%d\n", getoffset(struct s1, b));
    printf("%d\n", getoffset(struct s1, a));
    printf("%d\n", getoffset(struct s1, c));
    printf("%d\n", getoffset(struct s1, d));
    return 0;
}