#ifdef MYDLL_EXPORT
#define MYDLL _declspec(dllexport)
#else
#define MYDLL _declspec(dllimport)
#endif // MYDLL_EXPORT

MYDLL int add(int a, int b);