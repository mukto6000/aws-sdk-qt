include(../../common.pri)

TARGET = sagemaker
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagsrequest.h \
    addtagsrequest_p.h \
    addtagsresponse.h \
    addtagsresponse_p.h \
    createendpointconfigrequest.h \
    createendpointconfigrequest_p.h \
    createendpointconfigresponse.h \
    createendpointconfigresponse_p.h \
    createendpointrequest.h \
    createendpointrequest_p.h \
    createendpointresponse.h \
    createendpointresponse_p.h \
    createmodelrequest.h \
    createmodelrequest_p.h \
    createmodelresponse.h \
    createmodelresponse_p.h \
    createnotebookinstancelifecycleconfigrequest.h \
    createnotebookinstancelifecycleconfigrequest_p.h \
    createnotebookinstancelifecycleconfigresponse.h \
    createnotebookinstancelifecycleconfigresponse_p.h \
    createnotebookinstancerequest.h \
    createnotebookinstancerequest_p.h \
    createnotebookinstanceresponse.h \
    createnotebookinstanceresponse_p.h \
    createpresignednotebookinstanceurlrequest.h \
    createpresignednotebookinstanceurlrequest_p.h \
    createpresignednotebookinstanceurlresponse.h \
    createpresignednotebookinstanceurlresponse_p.h \
    createtrainingjobrequest.h \
    createtrainingjobrequest_p.h \
    createtrainingjobresponse.h \
    createtrainingjobresponse_p.h \
    deleteendpointconfigrequest.h \
    deleteendpointconfigrequest_p.h \
    deleteendpointconfigresponse.h \
    deleteendpointconfigresponse_p.h \
    deleteendpointrequest.h \
    deleteendpointrequest_p.h \
    deleteendpointresponse.h \
    deleteendpointresponse_p.h \
    deletemodelrequest.h \
    deletemodelrequest_p.h \
    deletemodelresponse.h \
    deletemodelresponse_p.h \
    deletenotebookinstancelifecycleconfigrequest.h \
    deletenotebookinstancelifecycleconfigrequest_p.h \
    deletenotebookinstancelifecycleconfigresponse.h \
    deletenotebookinstancelifecycleconfigresponse_p.h \
    deletenotebookinstancerequest.h \
    deletenotebookinstancerequest_p.h \
    deletenotebookinstanceresponse.h \
    deletenotebookinstanceresponse_p.h \
    deletetagsrequest.h \
    deletetagsrequest_p.h \
    deletetagsresponse.h \
    deletetagsresponse_p.h \
    describeendpointconfigrequest.h \
    describeendpointconfigrequest_p.h \
    describeendpointconfigresponse.h \
    describeendpointconfigresponse_p.h \
    describeendpointrequest.h \
    describeendpointrequest_p.h \
    describeendpointresponse.h \
    describeendpointresponse_p.h \
    describemodelrequest.h \
    describemodelrequest_p.h \
    describemodelresponse.h \
    describemodelresponse_p.h \
    describenotebookinstancelifecycleconfigrequest.h \
    describenotebookinstancelifecycleconfigrequest_p.h \
    describenotebookinstancelifecycleconfigresponse.h \
    describenotebookinstancelifecycleconfigresponse_p.h \
    describenotebookinstancerequest.h \
    describenotebookinstancerequest_p.h \
    describenotebookinstanceresponse.h \
    describenotebookinstanceresponse_p.h \
    describetrainingjobrequest.h \
    describetrainingjobrequest_p.h \
    describetrainingjobresponse.h \
    describetrainingjobresponse_p.h \
    listendpointconfigsrequest.h \
    listendpointconfigsrequest_p.h \
    listendpointconfigsresponse.h \
    listendpointconfigsresponse_p.h \
    listendpointsrequest.h \
    listendpointsrequest_p.h \
    listendpointsresponse.h \
    listendpointsresponse_p.h \
    listmodelsrequest.h \
    listmodelsrequest_p.h \
    listmodelsresponse.h \
    listmodelsresponse_p.h \
    listnotebookinstancelifecycleconfigsrequest.h \
    listnotebookinstancelifecycleconfigsrequest_p.h \
    listnotebookinstancelifecycleconfigsresponse.h \
    listnotebookinstancelifecycleconfigsresponse_p.h \
    listnotebookinstancesrequest.h \
    listnotebookinstancesrequest_p.h \
    listnotebookinstancesresponse.h \
    listnotebookinstancesresponse_p.h \
    listtagsrequest.h \
    listtagsrequest_p.h \
    listtagsresponse.h \
    listtagsresponse_p.h \
    listtrainingjobsrequest.h \
    listtrainingjobsrequest_p.h \
    listtrainingjobsresponse.h \
    listtrainingjobsresponse_p.h \
    sagemakerclient.h \
    sagemakerclient_p.h \
    startnotebookinstancerequest.h \
    startnotebookinstancerequest_p.h \
    startnotebookinstanceresponse.h \
    startnotebookinstanceresponse_p.h \
    stopnotebookinstancerequest.h \
    stopnotebookinstancerequest_p.h \
    stopnotebookinstanceresponse.h \
    stopnotebookinstanceresponse_p.h \
    stoptrainingjobrequest.h \
    stoptrainingjobrequest_p.h \
    stoptrainingjobresponse.h \
    stoptrainingjobresponse_p.h \
    updateendpointrequest.h \
    updateendpointrequest_p.h \
    updateendpointresponse.h \
    updateendpointresponse_p.h \
    updateendpointweightsandcapacitiesrequest.h \
    updateendpointweightsandcapacitiesrequest_p.h \
    updateendpointweightsandcapacitiesresponse.h \
    updateendpointweightsandcapacitiesresponse_p.h \
    updatenotebookinstancelifecycleconfigrequest.h \
    updatenotebookinstancelifecycleconfigrequest_p.h \
    updatenotebookinstancelifecycleconfigresponse.h \
    updatenotebookinstancelifecycleconfigresponse_p.h \
    updatenotebookinstancerequest.h \
    updatenotebookinstancerequest_p.h \
    updatenotebookinstanceresponse.h \
    updatenotebookinstanceresponse_p.h \

SOURCES += \
    addtagsrequest.cpp \
    addtagsresponse.cpp \
    createendpointconfigrequest.cpp \
    createendpointconfigresponse.cpp \
    createendpointrequest.cpp \
    createendpointresponse.cpp \
    createmodelrequest.cpp \
    createmodelresponse.cpp \
    createnotebookinstancelifecycleconfigrequest.cpp \
    createnotebookinstancelifecycleconfigresponse.cpp \
    createnotebookinstancerequest.cpp \
    createnotebookinstanceresponse.cpp \
    createpresignednotebookinstanceurlrequest.cpp \
    createpresignednotebookinstanceurlresponse.cpp \
    createtrainingjobrequest.cpp \
    createtrainingjobresponse.cpp \
    deleteendpointconfigrequest.cpp \
    deleteendpointconfigresponse.cpp \
    deleteendpointrequest.cpp \
    deleteendpointresponse.cpp \
    deletemodelrequest.cpp \
    deletemodelresponse.cpp \
    deletenotebookinstancelifecycleconfigrequest.cpp \
    deletenotebookinstancelifecycleconfigresponse.cpp \
    deletenotebookinstancerequest.cpp \
    deletenotebookinstanceresponse.cpp \
    deletetagsrequest.cpp \
    deletetagsresponse.cpp \
    describeendpointconfigrequest.cpp \
    describeendpointconfigresponse.cpp \
    describeendpointrequest.cpp \
    describeendpointresponse.cpp \
    describemodelrequest.cpp \
    describemodelresponse.cpp \
    describenotebookinstancelifecycleconfigrequest.cpp \
    describenotebookinstancelifecycleconfigresponse.cpp \
    describenotebookinstancerequest.cpp \
    describenotebookinstanceresponse.cpp \
    describetrainingjobrequest.cpp \
    describetrainingjobresponse.cpp \
    listendpointconfigsrequest.cpp \
    listendpointconfigsresponse.cpp \
    listendpointsrequest.cpp \
    listendpointsresponse.cpp \
    listmodelsrequest.cpp \
    listmodelsresponse.cpp \
    listnotebookinstancelifecycleconfigsrequest.cpp \
    listnotebookinstancelifecycleconfigsresponse.cpp \
    listnotebookinstancesrequest.cpp \
    listnotebookinstancesresponse.cpp \
    listtagsrequest.cpp \
    listtagsresponse.cpp \
    listtrainingjobsrequest.cpp \
    listtrainingjobsresponse.cpp \
    sagemakerclient.cpp \
    startnotebookinstancerequest.cpp \
    startnotebookinstanceresponse.cpp \
    stopnotebookinstancerequest.cpp \
    stopnotebookinstanceresponse.cpp \
    stoptrainingjobrequest.cpp \
    stoptrainingjobresponse.cpp \
    updateendpointrequest.cpp \
    updateendpointresponse.cpp \
    updateendpointweightsandcapacitiesrequest.cpp \
    updateendpointweightsandcapacitiesresponse.cpp \
    updatenotebookinstancelifecycleconfigrequest.cpp \
    updatenotebookinstancelifecycleconfigresponse.cpp \
    updatenotebookinstancerequest.cpp \
    updatenotebookinstanceresponse.cpp \

win32:CONFIG += skip_target_version_ext
