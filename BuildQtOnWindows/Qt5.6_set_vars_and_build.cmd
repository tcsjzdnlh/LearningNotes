REM 1. Set up system path
@SET SystemRoot=C:\Windows
@SET PATH=C:\Windows;C:\Windows\System32;C:\Windows\System32\Wbem

REM 2. Set up \Microsoft Visual Studio 2015, where <arch> is \c amd64, \c x86, etc.
CALL "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x86

@echo on
REM now should set up all SDK, include: icu, directx, angle, openssl,
REM but here we setting it in qt configure options: -icu, -angle dynamic -no-openssl


REM 3. Set up ICU : include, lib, bin
@SET ICU_DIR=E:\XfsFile\CodeLibs\BuildQtDependencies\icu
@SET INCLUDE=%INCLUDE%;%ICU_DIR%\include
@SET LIB=%LIB%;%ICU_DIR%\lib
@SET PATH=%PATH%;%ICU_DIR%\bin

REM 4. Set up Perl, Python, Ruby
@SET PATH=%PATH%;C:\Perl\bin;C:\Perl\site\bin;C:\Python27\;C:\Python27\Scripts;C:\Ruby22\bin

@SET _ROOT=E:\XfsFile\CodeLibs\QtCode\Qt5.6\qt-everywhere-opensource-src-5.6.0
@SET PATH=%_ROOT%\qtbase\bin;%_ROOT%\gnuwin32\bin;%PATH%
REM Uncomment the below line when using a git checkout of the source repository
@REM SET PATH = %_ROOT%\qtrepotools\bin; %PATH%
@SET QMAKESPEC=win32-msvc2015
@SET _ROOT=
REM type configure - debug - nomake examples - opensource  to build qt
REM after that then type jom or nmake if you don't have a jom

SET XFS_QT_CONFIGURE_PATH=E:\XfsFile\CodeLibs\QtCode\Qt5.6\qt-everywhere-opensource-src-5.6.0
%XFS_QT_CONFIGURE_PATH%\configure -loadconfig configure_minimalbuildqt.cache