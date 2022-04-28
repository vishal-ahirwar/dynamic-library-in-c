#include"../include/hello_world.h"
#include<iostream>
void hello_world()
{
   printf("\ahello:world\n");
};
void println(const char*str)
{
    std::clog<<"[println]";
};
void lib_info()
{
    printf("\nlast compile of hello_world was %s %s\n",__TIME__,__DATE__);
};