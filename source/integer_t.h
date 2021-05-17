#undef NATIVO_
#undef PREF_
#define NATIVO_ int
#define PREF_(COISA) Int_ ## COISA
#include convertenativo.h
