project_begin()

project_name("PyQt")
project_version("5.11.3")
project_source_dir("PyQt-5.11.3")

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

project_add_depends(python311)
project_add_depend_externals(Qt)
project_end()