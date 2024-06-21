
/* Frozen modules initializer
 *
 * Frozen modules are written to header files by Programs/_freeze_module.
 * These files are typically put in Python/frozen_modules/.  Each holds
 * an array of bytes named "_Py_M__<module>", which is used below.
 *
 * These files must be regenerated any time the corresponding .pyc
 * file would change (including with changes to the compiler, bytecode
 * format, marshal format).  This can be done with "make regen-frozen".
 * That make target just runs Tools/scripts/freeze_modules.py.
 *
 * The freeze_modules.py script also determines which modules get
 * frozen.  Update the list at the top of the script to add, remove,
 * or modify the target modules.  Then run the script
 * (or run "make regen-frozen").
 *
 * The script does the following:
 *
 * 1. run Programs/_freeze_module on the target modules
 * 2. update the includes and _PyImport_FrozenModules[] in this file
 * 3. update the FROZEN_FILES variable in Makefile.pre.in
 * 4. update the per-module targets in Makefile.pre.in
 * 5. update the lists of modules in PCbuild/_freeze_module.vcxproj and
 *    PCbuild/_freeze_module.vcxproj.filters
 *
 * (Note that most of the data in this file is auto-generated by the script.)
 *
 * Those steps can also be done manually, though this is not recommended.
 * Expect such manual changes to be removed the next time
 * freeze_modules.py runs.
 * */

/* In order to test the support for frozen modules, by default we
   define some simple frozen modules: __hello__, __phello__ (a package),
   and __phello__.spam.  Loading any will print some famous words... */

#include "Python.h"
#include "pycore_import.h"

#include <stdbool.h>

/* Includes for frozen modules: */
/* End includes */

#define GET_CODE(name) _Py_get_##name##_toplevel

/* Start extern declarations */
extern PyObject *_Py_get_importlib__bootstrap_toplevel(void);
extern PyObject *_Py_get_importlib__bootstrap_external_toplevel(void);
extern PyObject *_Py_get_zipimport_toplevel(void);
extern PyObject *_Py_get_abc_toplevel(void);
extern PyObject *_Py_get_codecs_toplevel(void);

extern PyObject *_Py_get_encodings_toplevel(void);
extern PyObject *_Py_get_encodings_aliases_toplevel(void);
extern PyObject *_Py_get_encodings_ascii_toplevel(void);
extern PyObject *_Py_get_encodings_base64_codec_toplevel(void);
extern PyObject *_Py_get_encodings_big5_toplevel(void);
extern PyObject *_Py_get_encodings_big5hkscs_toplevel(void);
extern PyObject *_Py_get_encodings_cp437_toplevel(void);
extern PyObject *_Py_get_encodings_cp932_toplevel(void);
extern PyObject *_Py_get_encodings_euc_jis_2004_toplevel(void);
extern PyObject *_Py_get_encodings_euc_jisx0213_toplevel(void);
extern PyObject *_Py_get_encodings_euc_jp_toplevel(void);
extern PyObject *_Py_get_encodings_euc_kr_toplevel(void);
extern PyObject *_Py_get_encodings_gb2312_toplevel(void);
extern PyObject *_Py_get_encodings_gbk_toplevel(void);
extern PyObject *_Py_get_encodings_hex_codec_toplevel(void);
extern PyObject *_Py_get_encodings_hz_toplevel(void);
extern PyObject *_Py_get_encodings_idna_toplevel(void);
extern PyObject *_Py_get_encodings_iso2022_jp_toplevel(void);
extern PyObject *_Py_get_encodings_iso2022_kr_toplevel(void);
extern PyObject *_Py_get_encodings_iso8859_16_toplevel(void);
extern PyObject *_Py_get_encodings_latin_1_toplevel(void);
extern PyObject *_Py_get_encodings_mbcs_toplevel(void);
extern PyObject *_Py_get_encodings_oem_toplevel(void);
extern PyObject *_Py_get_encodings_utf_8_toplevel(void);
extern PyObject *_Py_get_encodings_utf_16_toplevel(void);
extern PyObject *_Py_get_encodings_utf_32_toplevel(void);
extern PyObject *_Py_get_encodings_uu_codec_toplevel(void);

extern PyObject *_Py_get_io_toplevel(void);
extern PyObject *_Py_get__collections_abc_toplevel(void);
extern PyObject *_Py_get__sitebuiltins_toplevel(void);
extern PyObject *_Py_get_genericpath_toplevel(void);
extern PyObject *_Py_get_ntpath_toplevel(void);
extern PyObject *_Py_get_posixpath_toplevel(void);
extern PyObject *_Py_get_posixpath_toplevel(void);
extern PyObject *_Py_get_os_toplevel(void);
extern PyObject *_Py_get_site_toplevel(void);
extern PyObject *_Py_get_stat_toplevel(void);
extern PyObject *_Py_get_importlib_util_toplevel(void);
extern PyObject *_Py_get_importlib_machinery_toplevel(void);
extern PyObject *_Py_get_runpy_toplevel(void);
extern PyObject *_Py_get___hello___toplevel(void);
extern PyObject *_Py_get___hello___toplevel(void);
extern PyObject *_Py_get___hello___toplevel(void);
extern PyObject *_Py_get___hello___toplevel(void);
extern PyObject *_Py_get___phello___toplevel(void);
extern PyObject *_Py_get___phello___toplevel(void);
extern PyObject *_Py_get___phello___ham_toplevel(void);
extern PyObject *_Py_get___phello___ham_toplevel(void);
extern PyObject *_Py_get___phello___ham_eggs_toplevel(void);
extern PyObject *_Py_get___phello___spam_toplevel(void);
extern PyObject *_Py_get_frozen_only_toplevel(void);
/* End extern declarations */

static const struct _frozen bootstrap_modules[] = {
    {"_frozen_importlib", NULL, 0, false, GET_CODE(importlib__bootstrap)},
    {"_frozen_importlib_external", NULL, 0, false, GET_CODE(importlib__bootstrap_external)},
    {"zipimport", NULL, 0, false, GET_CODE(zipimport)},
    {0, 0, 0} /* bootstrap sentinel */
};
static const struct _frozen stdlib_modules[] = {
    /* stdlib - startup, without site (python -S) */
    {"abc", NULL, 0, false, GET_CODE(abc)},
    {"codecs", NULL, 0, false, GET_CODE(codecs)},

    {"encodings", NULL, 0, true, GET_CODE(encodings)},
    {"encodings.__init__", NULL, 0, false, GET_CODE(encodings)},
    {"encodings.aliases", NULL, 0, false, GET_CODE(encodings_aliases)},
    {"encodings.ascii", NULL, 0, false, GET_CODE(encodings_ascii)},
    {"encodings.base64_codec", NULL, 0, false, GET_CODE(encodings_base64_codec)},
    {"encodings.big5", NULL, 0, false, GET_CODE(encodings_big5)},
    {"encodings.big5hkscs", NULL, 0, false, GET_CODE(encodings_big5hkscs)},
    {"encodings.cp437", NULL, 0, false, GET_CODE(encodings_cp437)},
    {"encodings.cp932", NULL, 0, false, GET_CODE(encodings_cp932)},
    {"encodings.euc_jis_2004", NULL, 0, false, GET_CODE(encodings_euc_jis_2004)},
    {"encodings.euc_jisx0213", NULL, 0, false, GET_CODE(encodings_euc_jisx0213)},
    {"encodings.euc_jp", NULL, 0, false, GET_CODE(encodings_euc_jp)},
    {"encodings.euc_kr", NULL, 0, false, GET_CODE(encodings_euc_kr)},
    {"encodings.gb2312", NULL, 0, false, GET_CODE(encodings_gb2312)},
    {"encodings.gbk", NULL, 0, false, GET_CODE(encodings_gbk)},
    {"encodings.hex_codec", NULL, 0, false, GET_CODE(encodings_hex_codec)},
    {"encodings.hz", NULL, 0, false, GET_CODE(encodings_hz)},
    {"encodings.idna", NULL, 0, false, GET_CODE(encodings_idna)},
    {"encodings.iso2022_jp", NULL, 0, false, GET_CODE(encodings_iso2022_jp)},
    {"encodings.iso2022_kr", NULL, 0, false, GET_CODE(encodings_iso2022_kr)},
    {"encodings.iso8859_16", NULL, 0, false, GET_CODE(encodings_iso8859_16)},
    {"encodings.latin_1", NULL, 0, false, GET_CODE(encodings_latin_1)},
    {"encodings.mbcs", NULL, 0, false, GET_CODE(encodings_mbcs)},
    {"encodings.oem", NULL, 0, false, GET_CODE(encodings_oem)},
    {"encodings.utf_8", NULL, 0, false, GET_CODE(encodings_utf_8)},
    {"encodings.utf_16", NULL, 0, false, GET_CODE(encodings_utf_16)},
    {"encodings.utf_32", NULL, 0, false, GET_CODE(encodings_utf_32)},
    {"encodings.uu_codec", NULL, 0, false, GET_CODE(encodings_uu_codec)},

    {"io", NULL, 0, false, GET_CODE(io)},

    /* stdlib - startup, with site */
    {"_collections_abc", NULL, 0, false, GET_CODE(_collections_abc)},
    {"_sitebuiltins", NULL, 0, false, GET_CODE(_sitebuiltins)},
    {"genericpath", NULL, 0, false, GET_CODE(genericpath)},
    {"ntpath", NULL, 0, false, GET_CODE(ntpath)},
    {"posixpath", NULL, 0, false, GET_CODE(posixpath)},
    {"os.path", NULL, 0, false, GET_CODE(posixpath)},
    {"os", NULL, 0, false, GET_CODE(os)},
    {"site", NULL, 0, false, GET_CODE(site)},
    {"stat", NULL, 0, false, GET_CODE(stat)},

    /* runpy - run module with -m */
    {"importlib.util", NULL, 0, false, GET_CODE(importlib_util)},
    {"importlib.machinery", NULL, 0, false, GET_CODE(importlib_machinery)},
    {"runpy", NULL, 0, false, GET_CODE(runpy)},
    {0, 0, 0} /* stdlib sentinel */
};
static const struct _frozen test_modules[] = {
    {"__hello__", NULL, 0, false, GET_CODE(__hello__)},
    {"__hello_alias__", NULL, 0, false, GET_CODE(__hello__)},
    {"__phello_alias__", NULL, 0, true, GET_CODE(__hello__)},
    {"__phello_alias__.spam", NULL, 0, false, GET_CODE(__hello__)},
    {"__phello__", NULL, 0, true, GET_CODE(__phello__)},
    {"__phello__.__init__", NULL, 0, false, GET_CODE(__phello__)},
    {"__phello__.ham", NULL, 0, true, GET_CODE(__phello___ham)},
    {"__phello__.ham.__init__", NULL, 0, false, GET_CODE(__phello___ham)},
    {"__phello__.ham.eggs", NULL, 0, false, GET_CODE(__phello___ham_eggs)},
    {"__phello__.spam", NULL, 0, false, GET_CODE(__phello___spam)},
    {"__hello_only__", NULL, 0, false, GET_CODE(frozen_only)},
    {0, 0, 0} /* test sentinel */
};
const struct _frozen *_PyImport_FrozenBootstrap = bootstrap_modules;
const struct _frozen *_PyImport_FrozenStdlib = stdlib_modules;
const struct _frozen *_PyImport_FrozenTest = test_modules;

static const struct _module_alias aliases[] = {
    {"_frozen_importlib", "importlib._bootstrap"},
    {"_frozen_importlib_external", "importlib._bootstrap_external"},
    {"os.path", "posixpath"},
    {"__hello_alias__", "__hello__"},
    {"__phello_alias__", "__hello__"},
    {"__phello_alias__.spam", "__hello__"},
    {"__phello__.__init__", "<__phello__"},
    {"__phello__.ham.__init__", "<__phello__.ham"},
    {"__hello_only__", NULL},
    {0, 0} /* aliases sentinel */
};
const struct _module_alias *_PyImport_FrozenAliases = aliases;


/* Embedding apps may change this pointer to point to their favorite
   collection of frozen modules: */

const struct _frozen *PyImport_FrozenModules = stdlib_modules;