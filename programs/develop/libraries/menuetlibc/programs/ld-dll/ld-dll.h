#ifndef __LD_DLL_H
#define __LD_DLL_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<mcoff/mcoff.h>

unsigned long kexport_lookup(char * name);

typedef struct {
 coffobj_t * obj;
 void (* entry_point)(void);
 char * d_name;
} dll_t;

SYMENT * dl_find_dll_symbol(char * name,dll_t ** xdll);
unsigned long dl_get_ref(char * symname);
void init_dll(void);
dll_t * load_dll(char * name);
int relocate_dlls(void);
dll_t * find_dll(char * name);

#endif
