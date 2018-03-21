include(../../common.pri)

TARGET = dms
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagstoresourcerequest.h \
    addtagstoresourcerequest_p.h \
    addtagstoresourceresponse.h \
    addtagstoresourceresponse_p.h \
    createendpointrequest.h \
    createendpointrequest_p.h \
    createendpointresponse.h \
    createendpointresponse_p.h \
    createeventsubscriptionrequest.h \
    createeventsubscriptionrequest_p.h \
    createeventsubscriptionresponse.h \
    createeventsubscriptionresponse_p.h \
    createreplicationinstancerequest.h \
    createreplicationinstancerequest_p.h \
    createreplicationinstanceresponse.h \
    createreplicationinstanceresponse_p.h \
    createreplicationsubnetgrouprequest.h \
    createreplicationsubnetgrouprequest_p.h \
    createreplicationsubnetgroupresponse.h \
    createreplicationsubnetgroupresponse_p.h \
    createreplicationtaskrequest.h \
    createreplicationtaskrequest_p.h \
    createreplicationtaskresponse.h \
    createreplicationtaskresponse_p.h \
    databasemigrationserviceclient.h \
    databasemigrationserviceclient_p.h \
    deletecertificaterequest.h \
    deletecertificaterequest_p.h \
    deletecertificateresponse.h \
    deletecertificateresponse_p.h \
    deleteendpointrequest.h \
    deleteendpointrequest_p.h \
    deleteendpointresponse.h \
    deleteendpointresponse_p.h \
    deleteeventsubscriptionrequest.h \
    deleteeventsubscriptionrequest_p.h \
    deleteeventsubscriptionresponse.h \
    deleteeventsubscriptionresponse_p.h \
    deletereplicationinstancerequest.h \
    deletereplicationinstancerequest_p.h \
    deletereplicationinstanceresponse.h \
    deletereplicationinstanceresponse_p.h \
    deletereplicationsubnetgrouprequest.h \
    deletereplicationsubnetgrouprequest_p.h \
    deletereplicationsubnetgroupresponse.h \
    deletereplicationsubnetgroupresponse_p.h \
    deletereplicationtaskrequest.h \
    deletereplicationtaskrequest_p.h \
    deletereplicationtaskresponse.h \
    deletereplicationtaskresponse_p.h \
    describeaccountattributesrequest.h \
    describeaccountattributesrequest_p.h \
    describeaccountattributesresponse.h \
    describeaccountattributesresponse_p.h \
    describecertificatesrequest.h \
    describecertificatesrequest_p.h \
    describecertificatesresponse.h \
    describecertificatesresponse_p.h \
    describeconnectionsrequest.h \
    describeconnectionsrequest_p.h \
    describeconnectionsresponse.h \
    describeconnectionsresponse_p.h \
    describeendpointsrequest.h \
    describeendpointsrequest_p.h \
    describeendpointsresponse.h \
    describeendpointsresponse_p.h \
    describeendpointtypesrequest.h \
    describeendpointtypesrequest_p.h \
    describeendpointtypesresponse.h \
    describeendpointtypesresponse_p.h \
    describeeventcategoriesrequest.h \
    describeeventcategoriesrequest_p.h \
    describeeventcategoriesresponse.h \
    describeeventcategoriesresponse_p.h \
    describeeventsrequest.h \
    describeeventsrequest_p.h \
    describeeventsresponse.h \
    describeeventsresponse_p.h \
    describeeventsubscriptionsrequest.h \
    describeeventsubscriptionsrequest_p.h \
    describeeventsubscriptionsresponse.h \
    describeeventsubscriptionsresponse_p.h \
    describeorderablereplicationinstancesrequest.h \
    describeorderablereplicationinstancesrequest_p.h \
    describeorderablereplicationinstancesresponse.h \
    describeorderablereplicationinstancesresponse_p.h \
    describerefreshschemasstatusrequest.h \
    describerefreshschemasstatusrequest_p.h \
    describerefreshschemasstatusresponse.h \
    describerefreshschemasstatusresponse_p.h \
    describereplicationinstancesrequest.h \
    describereplicationinstancesrequest_p.h \
    describereplicationinstancesresponse.h \
    describereplicationinstancesresponse_p.h \
    describereplicationinstancetasklogsrequest.h \
    describereplicationinstancetasklogsrequest_p.h \
    describereplicationinstancetasklogsresponse.h \
    describereplicationinstancetasklogsresponse_p.h \
    describereplicationsubnetgroupsrequest.h \
    describereplicationsubnetgroupsrequest_p.h \
    describereplicationsubnetgroupsresponse.h \
    describereplicationsubnetgroupsresponse_p.h \
    describereplicationtaskassessmentresultsrequest.h \
    describereplicationtaskassessmentresultsrequest_p.h \
    describereplicationtaskassessmentresultsresponse.h \
    describereplicationtaskassessmentresultsresponse_p.h \
    describereplicationtasksrequest.h \
    describereplicationtasksrequest_p.h \
    describereplicationtasksresponse.h \
    describereplicationtasksresponse_p.h \
    describeschemasrequest.h \
    describeschemasrequest_p.h \
    describeschemasresponse.h \
    describeschemasresponse_p.h \
    describetablestatisticsrequest.h \
    describetablestatisticsrequest_p.h \
    describetablestatisticsresponse.h \
    describetablestatisticsresponse_p.h \
    importcertificaterequest.h \
    importcertificaterequest_p.h \
    importcertificateresponse.h \
    importcertificateresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    modifyendpointrequest.h \
    modifyendpointrequest_p.h \
    modifyendpointresponse.h \
    modifyendpointresponse_p.h \
    modifyeventsubscriptionrequest.h \
    modifyeventsubscriptionrequest_p.h \
    modifyeventsubscriptionresponse.h \
    modifyeventsubscriptionresponse_p.h \
    modifyreplicationinstancerequest.h \
    modifyreplicationinstancerequest_p.h \
    modifyreplicationinstanceresponse.h \
    modifyreplicationinstanceresponse_p.h \
    modifyreplicationsubnetgrouprequest.h \
    modifyreplicationsubnetgrouprequest_p.h \
    modifyreplicationsubnetgroupresponse.h \
    modifyreplicationsubnetgroupresponse_p.h \
    modifyreplicationtaskrequest.h \
    modifyreplicationtaskrequest_p.h \
    modifyreplicationtaskresponse.h \
    modifyreplicationtaskresponse_p.h \
    rebootreplicationinstancerequest.h \
    rebootreplicationinstancerequest_p.h \
    rebootreplicationinstanceresponse.h \
    rebootreplicationinstanceresponse_p.h \
    refreshschemasrequest.h \
    refreshschemasrequest_p.h \
    refreshschemasresponse.h \
    refreshschemasresponse_p.h \
    reloadtablesrequest.h \
    reloadtablesrequest_p.h \
    reloadtablesresponse.h \
    reloadtablesresponse_p.h \
    removetagsfromresourcerequest.h \
    removetagsfromresourcerequest_p.h \
    removetagsfromresourceresponse.h \
    removetagsfromresourceresponse_p.h \
    startreplicationtaskassessmentrequest.h \
    startreplicationtaskassessmentrequest_p.h \
    startreplicationtaskassessmentresponse.h \
    startreplicationtaskassessmentresponse_p.h \
    startreplicationtaskrequest.h \
    startreplicationtaskrequest_p.h \
    startreplicationtaskresponse.h \
    startreplicationtaskresponse_p.h \
    stopreplicationtaskrequest.h \
    stopreplicationtaskrequest_p.h \
    stopreplicationtaskresponse.h \
    stopreplicationtaskresponse_p.h \
    testconnectionrequest.h \
    testconnectionrequest_p.h \
    testconnectionresponse.h \
    testconnectionresponse_p.h \

SOURCES += \
    addtagstoresourcerequest.cpp \
    addtagstoresourceresponse.cpp \
    createendpointrequest.cpp \
    createendpointresponse.cpp \
    createeventsubscriptionrequest.cpp \
    createeventsubscriptionresponse.cpp \
    createreplicationinstancerequest.cpp \
    createreplicationinstanceresponse.cpp \
    createreplicationsubnetgrouprequest.cpp \
    createreplicationsubnetgroupresponse.cpp \
    createreplicationtaskrequest.cpp \
    createreplicationtaskresponse.cpp \
    databasemigrationserviceclient.cpp \
    deletecertificaterequest.cpp \
    deletecertificateresponse.cpp \
    deleteendpointrequest.cpp \
    deleteendpointresponse.cpp \
    deleteeventsubscriptionrequest.cpp \
    deleteeventsubscriptionresponse.cpp \
    deletereplicationinstancerequest.cpp \
    deletereplicationinstanceresponse.cpp \
    deletereplicationsubnetgrouprequest.cpp \
    deletereplicationsubnetgroupresponse.cpp \
    deletereplicationtaskrequest.cpp \
    deletereplicationtaskresponse.cpp \
    describeaccountattributesrequest.cpp \
    describeaccountattributesresponse.cpp \
    describecertificatesrequest.cpp \
    describecertificatesresponse.cpp \
    describeconnectionsrequest.cpp \
    describeconnectionsresponse.cpp \
    describeendpointsrequest.cpp \
    describeendpointsresponse.cpp \
    describeendpointtypesrequest.cpp \
    describeendpointtypesresponse.cpp \
    describeeventcategoriesrequest.cpp \
    describeeventcategoriesresponse.cpp \
    describeeventsrequest.cpp \
    describeeventsresponse.cpp \
    describeeventsubscriptionsrequest.cpp \
    describeeventsubscriptionsresponse.cpp \
    describeorderablereplicationinstancesrequest.cpp \
    describeorderablereplicationinstancesresponse.cpp \
    describerefreshschemasstatusrequest.cpp \
    describerefreshschemasstatusresponse.cpp \
    describereplicationinstancesrequest.cpp \
    describereplicationinstancesresponse.cpp \
    describereplicationinstancetasklogsrequest.cpp \
    describereplicationinstancetasklogsresponse.cpp \
    describereplicationsubnetgroupsrequest.cpp \
    describereplicationsubnetgroupsresponse.cpp \
    describereplicationtaskassessmentresultsrequest.cpp \
    describereplicationtaskassessmentresultsresponse.cpp \
    describereplicationtasksrequest.cpp \
    describereplicationtasksresponse.cpp \
    describeschemasrequest.cpp \
    describeschemasresponse.cpp \
    describetablestatisticsrequest.cpp \
    describetablestatisticsresponse.cpp \
    importcertificaterequest.cpp \
    importcertificateresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    modifyendpointrequest.cpp \
    modifyendpointresponse.cpp \
    modifyeventsubscriptionrequest.cpp \
    modifyeventsubscriptionresponse.cpp \
    modifyreplicationinstancerequest.cpp \
    modifyreplicationinstanceresponse.cpp \
    modifyreplicationsubnetgrouprequest.cpp \
    modifyreplicationsubnetgroupresponse.cpp \
    modifyreplicationtaskrequest.cpp \
    modifyreplicationtaskresponse.cpp \
    rebootreplicationinstancerequest.cpp \
    rebootreplicationinstanceresponse.cpp \
    refreshschemasrequest.cpp \
    refreshschemasresponse.cpp \
    reloadtablesrequest.cpp \
    reloadtablesresponse.cpp \
    removetagsfromresourcerequest.cpp \
    removetagsfromresourceresponse.cpp \
    startreplicationtaskassessmentrequest.cpp \
    startreplicationtaskassessmentresponse.cpp \
    startreplicationtaskrequest.cpp \
    startreplicationtaskresponse.cpp \
    stopreplicationtaskrequest.cpp \
    stopreplicationtaskresponse.cpp \
    testconnectionrequest.cpp \
    testconnectionresponse.cpp \

win32:CONFIG += skip_target_version_ext
