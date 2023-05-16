# -*- coding: UTF-8 -*-

from BuildTools import BuildProject
from BuildTools import BuildCondition
import os
from distutils import dir_util


class PyQt5BuildModule(BuildProject.ExternalProject):

	def __init__(self, builder, name, path):
		super(PyQt5BuildModule, self).__init__(builder, name, path)

		assert builder.Windows

		self.std = "c++17"

		# Add dependency.
		self.Dependency.add('PythonCore')

		# Add additional include path.
		self.PrivateIncludePath = [
			self.SourcePath,
			self.SourcePath + '/siplib',
			self.SourcePath + '/PyQt5/qpy/QtCore',
			self.SourcePath + '/PyQt5/qpy/QtWidgets',
			self.SourcePath + '/PyQt5/qpy/QtGui',
			self.SourcePath + '/PyQt5/QtCore',
			self.SourcePath + '/PyQt5/QtGui',
			self.SourcePath + '/PyQt5/QtWidgets',
			self.SourcePath + '/PyQt5/QtXml',
			self.SourcePath + '/PyQt5/QtSvg',
			self.SourcePath + "/Qt/Include",
			self.SourcePath + "/Qt/Include/QtCore",
			self.SourcePath + "/Qt/Include/QtGui",
			self.SourcePath + "/Qt/Include/QtWidgets",
			self.SourcePath + "/Qt/Include/QtXml",
			self.SourcePath + "/Qt/Include/QtSvg",
		]

		# Add additional macros.
		self.PublicDefinitions['CC_STATIC'] = '1'

		# Compile units.
		self.AvailableModules = [
			'module_main.cpp',
			'siplib',
			'PyQt5',
		]
		self.UnitRule = {
		}

		self.DirectoryRule = {
			'PyQt5/qpy/pylupdate': self.SetExclude,
			'PyQt5/qpy/pyrcc': self.SetExclude,
			'PyQt5/qpy/QtDesigner': self.SetExclude,
			'PyQt5/qpy/QtDBus': self.SetExclude,
			'PyQt5/qpy/QtQuick': self.SetExclude,
			'PyQt5/qpy/QtQml': self.SetExclude,
			'Qt/Include': self.SetExclude,
		}

		# Add additional lib path.
		self.LibraryPath = [
			(BuildCondition.PlatformCondition('x64'), self.SourcePath + '/Qt/Lib'),
		]
		for lib in ['Qt5Core', 'Qt5Gui', 'Qt5Widgets', 'Qt5Xml', 'Qt5Svg']:
			self.LibraryDep += [
				(BuildCondition.ConfigurationCondition(
					'Debug'),	lib + ".lib"),
				(BuildCondition.ConfigurationCondition(
					'Hybrid'),	lib + ".lib"),
				(BuildCondition.ConfigurationCondition(
					'Purify'),	lib + ".lib"),
				(BuildCondition.ConfigurationCondition(
					'Profile'), lib + ".lib"),
			]
		
		# copy dlls
		qtdlls = self.SourcePath + '/Qt/Dll/'
		win64dir = builder.EngineDirectory + '/Binaries/Win64/'

		if os.path.exists(win64dir):
			dir_util.copy_tree(qtdlls, win64dir)

		
	def SetExclude(self, x):
		x.ExcludeBuild = True
