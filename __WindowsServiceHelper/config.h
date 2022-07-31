#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

#include <stdio.h>
//Provides the core input and output

#include <stdlib.h>
//Performing a variety of operations, including conversion, pseudo-random numbers, memory allocation, process control, environment, signaling, searching, and sorting.

#include <conio.h>
//For doing console input output

#define _WIN32_WINNT 0x0500
//constant for console resizing (redefinition)

#include <windows.h>
//Defines a very large number of Windows specific functions that can be used in C.

#include "conio2.h"
//<Conio.h> not working in code blocks(gcc), so manually added this (https://sourceforge.net/projects/conio/)

#include <string.h>
//For manipulating several kinds of strings.

#include <time.h>
//For converting between various time and date formats.

#include <winsock2.h>
//Contains functions for socket programming

#include <ctype.h>
//Contains functions used to classify characters by their types or to convert between upper and lower case in a way that is independent of the used character set

#include <process.h>



#endif // CONFIG_H_INCLUDED
