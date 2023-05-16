#include <Python.h>

extern "C"
{
	void initsip();
	void initQt();
	void initQtCore();
	void initQtGui();
	void initQtWidgets();
	void initQtXml();
	void initQtSvg();
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

PyMODINIT_FUNC initPyQt5()
{
	PyObject *module = Py_InitModule("PyQt5", nullptr);
	initsip();
	AddModuleAlias(module, "PyQt5.sip", "sip");

	initQtCore();
	AddModuleAlias(module, "PyQt5.QtCore", "QtCore");

	initQtGui();
	AddModuleAlias(module, "PyQt5.QtGui", "QtGui");

	initQtWidgets();
	AddModuleAlias(module, "PyQt5.QtWidgets", "QtWidgets");

	initQtXml();
	AddModuleAlias(module, "PyQt5.QtXml", "QtXml");

	initQtSvg();
	AddModuleAlias(module, "PyQt5.QtSvg", "QtSvg");

	initQt();
	AddModuleAlias(module, "PyQt5.Qt", "Qt");
}
