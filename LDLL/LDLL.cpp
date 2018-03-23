// LDLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cstdio"
#include <iostream>
#include <windows.h>


int main(int argc, char **argv)
{
	if (argc < 2) {
		std::puts("Must specify argument (target dll path)");
		return -1;
	}
	const char *dllname = argv[1];
	HMODULE dll = LoadLibraryA(dllname);
	if (dll == NULL) {
		std::cout << "Failed to load " << dllname << std::endl;
	}
    return 0;
}

