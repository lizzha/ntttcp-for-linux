// ----------------------------------------------------------------------------------
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
// Author: Shihua (Simon) Xiao, sixiao@microsoft.com
// ----------------------------------------------------------------------------------

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <getopt.h>
#include "util.h"

enum {S_THREADS = 0, S_PROCESSOR, S_HOST, S_DONE};

int parse_arguments(struct ntttcp_test *test, int argc, char **argv);
int verify_args(struct ntttcp_test *test);

void print_flags(struct ntttcp_test *test);
void print_usage();
void print_version();
