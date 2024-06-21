#include <Python.h>

extern "C"
{
	void PyInit_sip();
	void PyInit_Qt();
	void PyInit_QtCore();
	void PyInit_QtGui();
	void PyInit_QtWidgets();
	void PyInit_QtXml();
	void PyInit_QtSvg();
}

static void AddModuleAlias(PyObject *module, const char *name, const char *alias_name)
{
	auto *dict = PyImport_GetModuleDict();
	auto *alias = PyDict_GetItemString(dict, name);
	if (alias)
	{
		Py_IncRef(alias);
		PyModule_AddObject(module, alias_name, alias);
	}
}

#if PY_VERSION_HEX > 0x03090000
static struct PyModuleDef PyQt5Module = {
    PyModuleDef_HEAD_INIT,
    "PyQt5",
    nullptr,
    -1,
    nullptr,
};
#endif

PyMODINIT_FUNC initPyQt5()
{
#if PY_VERSION_HEX < 0x03090000
	PyObject *module = Py_InitModule("PyQt5", nullptr);
#else
	PyObject *module = PyModule_Create(&PyQt5Module);
#endif
	PyInit_sip();
	AddModuleAlias(module, "PyQt5.sip", "sip");

	PyInit_QtCore();
	AddModuleAlias(module, "PyQt5.QtCore", "QtCore");

	PyInit_QtGui();
	AddModuleAlias(module, "PyQt5.QtGui", "QtGui");

	PyInit_QtWidgets();
	AddModuleAlias(module, "PyQt5.QtWidgets", "QtWidgets");

	PyInit_QtXml();
	AddModuleAlias(module, "PyQt5.QtXml", "QtXml");

	PyInit_QtSvg();
	AddModuleAlias(module, "PyQt5.QtSvg", "QtSvg");

	PyInit_Qt();
	AddModuleAlias(module, "PyQt5.Qt", "Qt");

#if PY_VERSION_HEX > 0x03090000
	return 0;
#endif
}
