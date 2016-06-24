TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    illustration.cpp \
    basicDataTypes/literalconstants.cpp \
    basicDataTypes/basicdatatypes.cpp \
    basicDataTypes/variable.cpp \
    basicDataTypes/pointer.cpp \
    basicDataTypes/stringtype.cpp \
    basicDataTypes/referencetype.cpp \
    basicDataTypes/booltype.cpp \
    basicDataTypes/enumerationtype.cpp \
    basicDataTypes/arraytype.cpp \
    basicDataTypes/vectortype.cpp \
    basicDataTypes/complexnumbertype.cpp \
    basicDataTypes/volatilekeywords.cpp \
    basicDataTypes/pairtype.cpp \
    basicDataTypes/classtype.cpp \
    expression/expression.cpp \
    expression/whatsexpression.cpp \
    expression/arithmeticoperator.cpp \
    expression/logicaloperators.cpp \
    expression/assignmentoperator.cpp \
    expression/complexnumberoperator.cpp \
    expression/sizeofopereator.cpp \
    expression/newdeleteexpression.cpp \
    expression/bitoperator.cpp \
    expression/bitsetoperator.cpp \
    expression/typeconversion.cpp \
    expression/stackclass.cpp \
    statement/judgment.cpp \
    statement/statement.cpp \
    statement/loopstatement.cpp \
    abstractcontainer/abstractcontainer.cpp \
    keywords/keywords.cpp \
    keywords/typedefkeywords.cpp \
    keywords/constkeywords.cpp \
    keywords/keywordsIntroduce.cpp \
    filetool.cpp

#include(deployment.pri)
#qtcAddDeployment()

HEADERS += \
    mainhead.h \
    basicDataTypes/literalconstants.h \
    basicDataTypes/basicdatatypes.h \
    basicDataTypes/variable.h \
    basicDataTypes/pointer.h \
    basicDataTypes/stringtype.h \
    basicDataTypes/referencetype.h \
    basicDataTypes/booltype.h \
    basicDataTypes/enumerationtype.h \
    basicDataTypes/arraytype.h \
    basicDataTypes/vectortype.h \
    basicDataTypes/complexnumbertype.h \
    basicDataTypes/volatilekeywords.h \
    basicDataTypes/pairtype.h \
    basicDataTypes/classtype.h \
    expression/expression.h \
    expression/whatsexpression.h \
    expression/arithmeticoperator.h \
    expression/logicaloperators.h \
    expression/assignmentoperator.h \
    expression/complexnumberoperator.h \
    expression/sizeoperator.h \
    expression/newdeleteexpression.h \
    expression/bitoperator.h \
    expression/bitsetoperator.h \
    expression/typeconversion.h \
    expression/stackclass.h \
    statement/judgment.h \
    statement/statement.h \
    statement/loopstatement.h \
    abstractcontainer/abstractcontainer.h \
    keywords/keywords.h \
    keywords/typedefkeywords.h \
    keywords/constkeywords.h \
    keywords/keywordsIntroduce.h \
    filetool.h

