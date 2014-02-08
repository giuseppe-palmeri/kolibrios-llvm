
#include <sys/types.h>
#include <sys/kos_io.h>

int delete_file(const char *path)
{
     int retval;
     __asm__ __volatile__ (
     "pushl $0 \n\t"
     "pushl $0 \n\t"
     "movl %0, 1(%%esp) \n\t"
     "pushl $0 \n\t"
     "pushl $0 \n\t"
     "pushl $0 \n\t"
     "pushl $0 \n\t"
     "pushl $8 \n\t"
     "movl %%esp, %%ebx \n\t"
     "movl $70, %%eax \n\t"
     "int $0x40 \n\t"
     "addl $28, %%esp \n\t"
     :"=a" (retval)
     :"r" (path)
     :"ebx");
  return retval;
};

