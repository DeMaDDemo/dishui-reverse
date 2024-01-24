

#include <stdio.h>

int main(void)
{
    printf("Hello World\n");
    int a;
    scanf("%d",&a);
    return 0;
}

//1这个文件用来使用 gcc，vscode的反汇编功能 //

//编译命令 先在终端 gcc Hello_World.cpp 或者 gcc Hello_World.cpp -o helloworld
//区别就是 一个默认编译生成a.exe,一个默认编译生成 helloworld.exe,名字的区别罢了

//运行命令 ./a.exe 或者 ./helloworld.exe
//就能直接运行，试一下能运行才能继续反汇编

//反汇编命令 gcc -S Hello_World.cpp 或者 gcc Hello_World.cpp -o helloworld
//也是名字 默认和自定义的区别



//2在终端反汇编（GNU Debugger的命令） //https://www.cnblogs.com/linear345/p/16116493.html

//先给程序打个断点免得一下就跑完
//再在调试控制台里面尝试以下三个命令


//-exec disassemble /m：这个命令的含义是 disassemble（反汇编）当前程序的主模块（main）。
//它会在 GDB 中反汇编当前执行代码所在的函数或者主程序。

//-exec disassemble /m main：这个命令的含义是 disassemble 主模块中的 main 函数。
//它会反汇编主程序中名为 main 的函数。

//所以，两者的区别在于是否指定了具体的函数名。
//第一个命令会尝试反汇编当前执行代码所在的函数，而第二个命令明确指定了要反汇编的函数是 main。

//-exec info registers
//得到寄存器的信息：
