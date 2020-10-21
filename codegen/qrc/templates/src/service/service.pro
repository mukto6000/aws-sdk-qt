include(../../common.pri)

TARGET = {{ModuleName}}
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
{% for header in HeaderFiles %}
    {{ header }} \
{% endfor %}

SOURCES += \
{% for source in SourceFiles %}
    {{ source }} \
{% endfor %}

win32:CONFIG += skip_target_version_ext
