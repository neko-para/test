#include <sys/types.h>

enum CompileState {
	COMPILE_OK,
	COMPILE_ERR,
	COMPILE_TLE,
	COMPILE_MLE,
};
enum RunState {
	RUN_OK,
	RUN_RE,
	RUN_TLE,
	RUN_MLE,
};
enum CheckState {
	CHECK_OK,
	CHECK_WA,
	CHECK_PE,
	CHECK_FE,
};

CompileState Compile(const char* gxx, const char* src, const char* bin, size_t ml, size_t tl, char* log, ...);
CompileState Compilev(const char* gxx, const char* src, const char* bin, size_t ml, size_t tl, char* log, const char* const arg[]);
RunState Run(const char* program, size_t ml, size_t tl, size_t* mu, size_t* tu);
CheckState Check(const char* program, const char* fileA, const char* fileB, const char* param, char* log);