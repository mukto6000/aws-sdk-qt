include(../../common.pri)

TARGET = ds
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addiproutesrequest.h \
    addiproutesrequest_p.h \
    addiproutesresponse.h \
    addiproutesresponse_p.h \
    addtagstoresourcerequest.h \
    addtagstoresourcerequest_p.h \
    addtagstoresourceresponse.h \
    addtagstoresourceresponse_p.h \
    cancelschemaextensionrequest.h \
    cancelschemaextensionrequest_p.h \
    cancelschemaextensionresponse.h \
    cancelschemaextensionresponse_p.h \
    connectdirectoryrequest.h \
    connectdirectoryrequest_p.h \
    connectdirectoryresponse.h \
    connectdirectoryresponse_p.h \
    createaliasrequest.h \
    createaliasrequest_p.h \
    createaliasresponse.h \
    createaliasresponse_p.h \
    createcomputerrequest.h \
    createcomputerrequest_p.h \
    createcomputerresponse.h \
    createcomputerresponse_p.h \
    createconditionalforwarderrequest.h \
    createconditionalforwarderrequest_p.h \
    createconditionalforwarderresponse.h \
    createconditionalforwarderresponse_p.h \
    createdirectoryrequest.h \
    createdirectoryrequest_p.h \
    createdirectoryresponse.h \
    createdirectoryresponse_p.h \
    createmicrosoftadrequest.h \
    createmicrosoftadrequest_p.h \
    createmicrosoftadresponse.h \
    createmicrosoftadresponse_p.h \
    createsnapshotrequest.h \
    createsnapshotrequest_p.h \
    createsnapshotresponse.h \
    createsnapshotresponse_p.h \
    createtrustrequest.h \
    createtrustrequest_p.h \
    createtrustresponse.h \
    createtrustresponse_p.h \
    deleteconditionalforwarderrequest.h \
    deleteconditionalforwarderrequest_p.h \
    deleteconditionalforwarderresponse.h \
    deleteconditionalforwarderresponse_p.h \
    deletedirectoryrequest.h \
    deletedirectoryrequest_p.h \
    deletedirectoryresponse.h \
    deletedirectoryresponse_p.h \
    deletesnapshotrequest.h \
    deletesnapshotrequest_p.h \
    deletesnapshotresponse.h \
    deletesnapshotresponse_p.h \
    deletetrustrequest.h \
    deletetrustrequest_p.h \
    deletetrustresponse.h \
    deletetrustresponse_p.h \
    deregistereventtopicrequest.h \
    deregistereventtopicrequest_p.h \
    deregistereventtopicresponse.h \
    deregistereventtopicresponse_p.h \
    describeconditionalforwardersrequest.h \
    describeconditionalforwardersrequest_p.h \
    describeconditionalforwardersresponse.h \
    describeconditionalforwardersresponse_p.h \
    describedirectoriesrequest.h \
    describedirectoriesrequest_p.h \
    describedirectoriesresponse.h \
    describedirectoriesresponse_p.h \
    describedomaincontrollersrequest.h \
    describedomaincontrollersrequest_p.h \
    describedomaincontrollersresponse.h \
    describedomaincontrollersresponse_p.h \
    describeeventtopicsrequest.h \
    describeeventtopicsrequest_p.h \
    describeeventtopicsresponse.h \
    describeeventtopicsresponse_p.h \
    describesnapshotsrequest.h \
    describesnapshotsrequest_p.h \
    describesnapshotsresponse.h \
    describesnapshotsresponse_p.h \
    describetrustsrequest.h \
    describetrustsrequest_p.h \
    describetrustsresponse.h \
    describetrustsresponse_p.h \
    directoryserviceclient.h \
    directoryserviceclient_p.h \
    disableradiusrequest.h \
    disableradiusrequest_p.h \
    disableradiusresponse.h \
    disableradiusresponse_p.h \
    disablessorequest.h \
    disablessorequest_p.h \
    disablessoresponse.h \
    disablessoresponse_p.h \
    enableradiusrequest.h \
    enableradiusrequest_p.h \
    enableradiusresponse.h \
    enableradiusresponse_p.h \
    enablessorequest.h \
    enablessorequest_p.h \
    enablessoresponse.h \
    enablessoresponse_p.h \
    getdirectorylimitsrequest.h \
    getdirectorylimitsrequest_p.h \
    getdirectorylimitsresponse.h \
    getdirectorylimitsresponse_p.h \
    getsnapshotlimitsrequest.h \
    getsnapshotlimitsrequest_p.h \
    getsnapshotlimitsresponse.h \
    getsnapshotlimitsresponse_p.h \
    listiproutesrequest.h \
    listiproutesrequest_p.h \
    listiproutesresponse.h \
    listiproutesresponse_p.h \
    listschemaextensionsrequest.h \
    listschemaextensionsrequest_p.h \
    listschemaextensionsresponse.h \
    listschemaextensionsresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    registereventtopicrequest.h \
    registereventtopicrequest_p.h \
    registereventtopicresponse.h \
    registereventtopicresponse_p.h \
    removeiproutesrequest.h \
    removeiproutesrequest_p.h \
    removeiproutesresponse.h \
    removeiproutesresponse_p.h \
    removetagsfromresourcerequest.h \
    removetagsfromresourcerequest_p.h \
    removetagsfromresourceresponse.h \
    removetagsfromresourceresponse_p.h \
    restorefromsnapshotrequest.h \
    restorefromsnapshotrequest_p.h \
    restorefromsnapshotresponse.h \
    restorefromsnapshotresponse_p.h \
    startschemaextensionrequest.h \
    startschemaextensionrequest_p.h \
    startschemaextensionresponse.h \
    startschemaextensionresponse_p.h \
    updateconditionalforwarderrequest.h \
    updateconditionalforwarderrequest_p.h \
    updateconditionalforwarderresponse.h \
    updateconditionalforwarderresponse_p.h \
    updatenumberofdomaincontrollersrequest.h \
    updatenumberofdomaincontrollersrequest_p.h \
    updatenumberofdomaincontrollersresponse.h \
    updatenumberofdomaincontrollersresponse_p.h \
    updateradiusrequest.h \
    updateradiusrequest_p.h \
    updateradiusresponse.h \
    updateradiusresponse_p.h \
    verifytrustrequest.h \
    verifytrustrequest_p.h \
    verifytrustresponse.h \
    verifytrustresponse_p.h \

SOURCES += \
    addiproutesrequest.cpp \
    addiproutesresponse.cpp \
    addtagstoresourcerequest.cpp \
    addtagstoresourceresponse.cpp \
    cancelschemaextensionrequest.cpp \
    cancelschemaextensionresponse.cpp \
    connectdirectoryrequest.cpp \
    connectdirectoryresponse.cpp \
    createaliasrequest.cpp \
    createaliasresponse.cpp \
    createcomputerrequest.cpp \
    createcomputerresponse.cpp \
    createconditionalforwarderrequest.cpp \
    createconditionalforwarderresponse.cpp \
    createdirectoryrequest.cpp \
    createdirectoryresponse.cpp \
    createmicrosoftadrequest.cpp \
    createmicrosoftadresponse.cpp \
    createsnapshotrequest.cpp \
    createsnapshotresponse.cpp \
    createtrustrequest.cpp \
    createtrustresponse.cpp \
    deleteconditionalforwarderrequest.cpp \
    deleteconditionalforwarderresponse.cpp \
    deletedirectoryrequest.cpp \
    deletedirectoryresponse.cpp \
    deletesnapshotrequest.cpp \
    deletesnapshotresponse.cpp \
    deletetrustrequest.cpp \
    deletetrustresponse.cpp \
    deregistereventtopicrequest.cpp \
    deregistereventtopicresponse.cpp \
    describeconditionalforwardersrequest.cpp \
    describeconditionalforwardersresponse.cpp \
    describedirectoriesrequest.cpp \
    describedirectoriesresponse.cpp \
    describedomaincontrollersrequest.cpp \
    describedomaincontrollersresponse.cpp \
    describeeventtopicsrequest.cpp \
    describeeventtopicsresponse.cpp \
    describesnapshotsrequest.cpp \
    describesnapshotsresponse.cpp \
    describetrustsrequest.cpp \
    describetrustsresponse.cpp \
    directoryserviceclient.cpp \
    disableradiusrequest.cpp \
    disableradiusresponse.cpp \
    disablessorequest.cpp \
    disablessoresponse.cpp \
    enableradiusrequest.cpp \
    enableradiusresponse.cpp \
    enablessorequest.cpp \
    enablessoresponse.cpp \
    getdirectorylimitsrequest.cpp \
    getdirectorylimitsresponse.cpp \
    getsnapshotlimitsrequest.cpp \
    getsnapshotlimitsresponse.cpp \
    listiproutesrequest.cpp \
    listiproutesresponse.cpp \
    listschemaextensionsrequest.cpp \
    listschemaextensionsresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    registereventtopicrequest.cpp \
    registereventtopicresponse.cpp \
    removeiproutesrequest.cpp \
    removeiproutesresponse.cpp \
    removetagsfromresourcerequest.cpp \
    removetagsfromresourceresponse.cpp \
    restorefromsnapshotrequest.cpp \
    restorefromsnapshotresponse.cpp \
    startschemaextensionrequest.cpp \
    startschemaextensionresponse.cpp \
    updateconditionalforwarderrequest.cpp \
    updateconditionalforwarderresponse.cpp \
    updatenumberofdomaincontrollersrequest.cpp \
    updatenumberofdomaincontrollersresponse.cpp \
    updateradiusrequest.cpp \
    updateradiusresponse.cpp \
    verifytrustrequest.cpp \
    verifytrustresponse.cpp \

win32:CONFIG += skip_target_version_ext
