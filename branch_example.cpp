#include <iostream>

void branch_example(int a);

int main(){
int a = 10;
std::cout<<"calling branch_example with a = "<< a << std::endl;
branch_example(a);
return 0;
}

void branch_example(int a){
asm volatile(
"cmp $5, %[value]\n\t" //compare value of a with 5
"jle less_equal\n\t" //jump to 'less equal' if 'a' <= 5
"mov $0x1, %%eax\n\t" //set result to 1 (greater than 5)
"jmp end\n\t"//jump to the end
"less_equal:\n\t"
"mov $0x0, %%eax\n\t" //set result to 0 
"end:\n\t"
:
: [value] "r" (a) //input operand
: "%eax" //Clobbered register
);

int result;
asm volatile("mov %%eax, %[result]" : [result] "=r" (result));
std::cout<<"Result of comparison: " <<result<<std::endl;
}


