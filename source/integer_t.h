#ifndef INT_H
#define INT_H

#undef NATIVO_
#undef PREF_
#define NATIVO_ int
#define PREF_(COISA) Int_ ## COISA
#include "converteNativo.h"

#endif
