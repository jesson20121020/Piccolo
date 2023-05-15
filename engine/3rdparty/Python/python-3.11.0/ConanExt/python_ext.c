#include <Python.h>

#ifdef WITH_EXPAT
extern PyObject* PyInit_pyexpat(void);
#endif

#ifdef WITH_SSL
extern PyObject* PyInit__ssl(void);
extern PyObject* PyInit__hashlib(void);
#endif

#ifdef WITH_BZ2
extern PyObject* PyInit__bz2(void);
#endif

#ifdef WITH_DECIMAL
extern PyObject* PyInit__decimal(void);
#endif

#ifdef WITH_SQLITE
extern PyObject* PyInit__sqlite3(void);
#endif

Py_EXPORTED_SYMBOL
void init_python_ext(void) {
    struct _inittab newtab[] = {
#ifdef WITH_EXPAT
        {"pyexpat", PyInit_pyexpat},
#endif
#ifdef WITH_SSL
        {"_ssl", PyInit__ssl},
        {"_hashlib", PyInit__hashlib},
#endif
#ifdef WITH_BZ2
        {"_bz2", PyInit__bz2},
#endif
#ifdef WITH_DECIMAL
        {"_decimal", PyInit__decimal},
#endif
#ifdef WITH_SQLITE
        {"_sqlite3", PyInit__sqlite3},
#endif
        {0, 0},
    };
    PyImport_ExtendInittab(newtab);
}
