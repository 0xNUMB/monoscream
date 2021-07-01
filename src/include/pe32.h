/* * * * * * * * * * * * * * /
*   pe32.h
*   Describes PE files
* * * * * * * * * * * * * * */

#ifndef _PE32_H
#define _PE32_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef WIN32
#include <Windows.h>
#include <winnt.h>
#include <filesystem> //

/* #define ESPGET(thread) ((thread) -> pr_reg[CORE_ESP]) */
#define REGISTERS_COUNT
#else
#pragma error "Undefined platform"
#endif

//Need flags here
#ifdef WIN32
#define CORE_EAX 0
#define CORE_ECX 1
#define CORE_EDX 2
#define CORE_EBX 3
#define CORE_ESP 4
#define CORE_EBP 5
#define CORE_ESI 6
#define CORE_EDI 7
#define CORE_EIP 8
#define CORE_EFL 9
#define CORE_ESP 10
#endif

#endif //_PE32_H
