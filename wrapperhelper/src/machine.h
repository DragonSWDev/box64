#pragma once

#ifndef MACHINE_H
#define MACHINE_H

#include "cstring.h"
#include "khash.h"
#include "vector.h"

struct macro_s; // preproc_private.h

typedef struct machine_s {
	// Preprocessor
	size_t npaths;
	char **include_path;
	
	size_t npredefs;
	char **predef_macros_name;
	struct macro_s **predef_macros;
	
	// Parsing
	size_t size_long;
	// TODO: also have info on unnamed bitfields, etc
} machine_t;

extern machine_t machine_x86_64;
// extern machine_t machine_x86;
// extern machine_t machine_arm64;

int init_machines(size_t npaths, const char *const *extra_include_path);
void del_machines(void);

#endif // MACHINE_H