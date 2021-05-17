#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* typedef do malloc */
typedef void * (* func1_1size_t ) (size_t tamanho);

/* typedef do memcpy */
typedef void * (* func1_2void_1size_t) (void * restrict um, const void * restrict dois, unsigned int tamanho);

/* typedef do free */
typedef void (* func0_1void_t) (void *um);

#endif
