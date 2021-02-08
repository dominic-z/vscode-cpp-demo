#include <stdio.h>
int main()
{
    // 换个角度理解，就把a看做一个一维数组，只不过这个一维数组里每个元素都是一个int [4]
    // a[1]记录的就是一个第一个int [4]，即第一个int [4]的首元素地址
    // 按照一维数组的理解，a可以被认为是指向首元素的指针，a[1]可以被认为是指向int [4]首元素的指针
    int a[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}}; 
    int (*p)[4] = a; // 先构造一个指针p，用于指向一个长度为4的数组，即int [4]，这样看p是一个指向a第一个元素的指针
    printf("%d\n", *(p + 1)); // p是指向a首元素的指针，p+1就是指向a[1]的指针，而a[1]代表指向int [4]首元素的指针
    printf("%d\n", a[1]); 
    printf("%d\n", **(p + 1));

    int b[2][2][2] = {{{0, 1}, {2, 3}}, {{4, 5}, {6, 7}}}; 
    int (*pb)[2][2]=b; // 就按一维数组来理解，b是一个长度为2的一维数组，每个元素是一个int [2][2]的数组，所以定义pb为指向int [2][2]的数组
    printf("%d\n", *(pb + 1));
    printf("%d\n", b[1]); 
    printf("%d\n", ***(pb + 1));

    return 0;
}