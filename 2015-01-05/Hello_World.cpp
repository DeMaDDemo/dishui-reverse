

#include <stdio.h>

int main(void)
{
    printf("Hello World\n");
    int a;
    scanf("%d",&a);
    return 0;
}

//这个文件用来使用 gcc，vscode的反汇编功能

//编译命令 先在终端 gcc Hello_World.cpp 或者 gcc Hello_World.cpp -o helloworld
//区别就是 一个默认编译生成a.exe,一个默认编译生成 helloworld.exe,名字的区别罢了

//运行命令 ./a.exe 或者 ./helloworld.exe
//就能直接运行，试一下能运行才能继续反汇编

//反汇编命令 gcc -S Hello_World.cpp 或者 gcc Hello_World.cpp -o helloworld
//也是名字 默认和自定义的区别