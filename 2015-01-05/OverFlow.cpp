//OverFlow.cpp :Defines the entry point for the console allication.

//#include "stdafx.h"
#include "stdio.h"

void Attack()
{
    
    while(1)
    {
        printf("攻击程序\n");
    }
    getchar();
}

int main(int argc,char* argv[])
{
    int arr[5] = {0};
    arr[6] = (int)Attack;

    return 0;
}