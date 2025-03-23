QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 qt

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addproduct.cpp \
    cap.cpp \
    createbill.cpp \
    dashboard.cpp \
    edit.cpp \
    employee_dashboard.cpp \
    employee_registration.cpp \
    inventory.cpp \
    main.cpp \
    mainwindow.cpp \
    member_registration.cpp \
    registerdialog.cpp \
    viewaccounts.cpp

HEADERS += \
    addproduct.h \
    cap.h \
    employee_dashboard.h \
    mainwindow.h \
    dashboard.h \
    createbill.h \
    inventory.h \
    edit.h \
    viewaccounts.h \
    registerdialog.h \
    employee_registration.h \
    member_registration.h


FORMS += \
    addproduct.ui \
    cap.ui \
    createbill.ui \
    dashboard.ui \
    edit.ui \
    employee_dashboard.ui \
    employee_registration.ui \
    inventory.ui \
    mainwindow.ui \
    member_registration.ui \
    registerdialog.ui \
    viewaccounts.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc
