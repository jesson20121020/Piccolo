project_begin()

project_name("PyQt")
project_version("5.11.3")
project_source_dir("PyQt-5.11.3")

project_add_source_excludes(
	"PyQt5/qpy/pylupdate"
	"PyQt5/qpy/pyrcc"
	"PyQt5/qpy/QtDesinger"
	"PyQt5/qpy/QtDBus"
	"PyQt5/qpy/QtQuick"
	"PyQt5/qpy/QtQml"
)

project_add_include_dirs(
	"siplib"
	"PyQt5/qpy/QtCore"
	"PyQt5/qpy/QtWidgets"
	"PyQt5/qpy/QtGui"
	"PyQt5/QtCore"
	"PyQt5/QtGui"
	"PyQt5/QtWidgets"
	"PyQt5/QtXml")

project_add_definitions(
	QT_NO_DEBUG
	QT_NO_EXCEPTIONS
	QT_PLUGIN
	SIP_STATIC_MODULE
	SIP_MODULE_NAME="PyQt5.sip"
)


if (LINK_TYPE EQUAL SHARED)
	project_add_definitions(QT_SHARED)
else()
	project_add_definitions(QT_STATIC)
endif()

project_add_depends(python311)
project_add_depend_externals(Qt)
project_end()