include(../../common.pri)

TARGET = organizations
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    accepthandshakerequest.h \
    accepthandshakerequest_p.h \
    accepthandshakeresponse.h \
    accepthandshakeresponse_p.h \
    attachpolicyrequest.h \
    attachpolicyrequest_p.h \
    attachpolicyresponse.h \
    attachpolicyresponse_p.h \
    cancelhandshakerequest.h \
    cancelhandshakerequest_p.h \
    cancelhandshakeresponse.h \
    cancelhandshakeresponse_p.h \
    createaccountrequest.h \
    createaccountrequest_p.h \
    createaccountresponse.h \
    createaccountresponse_p.h \
    createorganizationalunitrequest.h \
    createorganizationalunitrequest_p.h \
    createorganizationalunitresponse.h \
    createorganizationalunitresponse_p.h \
    createorganizationrequest.h \
    createorganizationrequest_p.h \
    createorganizationresponse.h \
    createorganizationresponse_p.h \
    createpolicyrequest.h \
    createpolicyrequest_p.h \
    createpolicyresponse.h \
    createpolicyresponse_p.h \
    declinehandshakerequest.h \
    declinehandshakerequest_p.h \
    declinehandshakeresponse.h \
    declinehandshakeresponse_p.h \
    deleteorganizationalunitrequest.h \
    deleteorganizationalunitrequest_p.h \
    deleteorganizationalunitresponse.h \
    deleteorganizationalunitresponse_p.h \
    deleteorganizationresponse.h \
    deleteorganizationresponse_p.h \
    deletepolicyrequest.h \
    deletepolicyrequest_p.h \
    deletepolicyresponse.h \
    deletepolicyresponse_p.h \
    describeaccountrequest.h \
    describeaccountrequest_p.h \
    describeaccountresponse.h \
    describeaccountresponse_p.h \
    describecreateaccountstatusrequest.h \
    describecreateaccountstatusrequest_p.h \
    describecreateaccountstatusresponse.h \
    describecreateaccountstatusresponse_p.h \
    describehandshakerequest.h \
    describehandshakerequest_p.h \
    describehandshakeresponse.h \
    describehandshakeresponse_p.h \
    describeorganizationalunitrequest.h \
    describeorganizationalunitrequest_p.h \
    describeorganizationalunitresponse.h \
    describeorganizationalunitresponse_p.h \
    describeorganizationresponse.h \
    describeorganizationresponse_p.h \
    describepolicyrequest.h \
    describepolicyrequest_p.h \
    describepolicyresponse.h \
    describepolicyresponse_p.h \
    detachpolicyrequest.h \
    detachpolicyrequest_p.h \
    detachpolicyresponse.h \
    detachpolicyresponse_p.h \
    disableawsserviceaccessrequest.h \
    disableawsserviceaccessrequest_p.h \
    disableawsserviceaccessresponse.h \
    disableawsserviceaccessresponse_p.h \
    disablepolicytyperequest.h \
    disablepolicytyperequest_p.h \
    disablepolicytyperesponse.h \
    disablepolicytyperesponse_p.h \
    enableallfeaturesrequest.h \
    enableallfeaturesrequest_p.h \
    enableallfeaturesresponse.h \
    enableallfeaturesresponse_p.h \
    enableawsserviceaccessrequest.h \
    enableawsserviceaccessrequest_p.h \
    enableawsserviceaccessresponse.h \
    enableawsserviceaccessresponse_p.h \
    enablepolicytyperequest.h \
    enablepolicytyperequest_p.h \
    enablepolicytyperesponse.h \
    enablepolicytyperesponse_p.h \
    inviteaccounttoorganizationrequest.h \
    inviteaccounttoorganizationrequest_p.h \
    inviteaccounttoorganizationresponse.h \
    inviteaccounttoorganizationresponse_p.h \
    leaveorganizationresponse.h \
    leaveorganizationresponse_p.h \
    listaccountsforparentrequest.h \
    listaccountsforparentrequest_p.h \
    listaccountsforparentresponse.h \
    listaccountsforparentresponse_p.h \
    listaccountsrequest.h \
    listaccountsrequest_p.h \
    listaccountsresponse.h \
    listaccountsresponse_p.h \
    listawsserviceaccessfororganizationrequest.h \
    listawsserviceaccessfororganizationrequest_p.h \
    listawsserviceaccessfororganizationresponse.h \
    listawsserviceaccessfororganizationresponse_p.h \
    listchildrenrequest.h \
    listchildrenrequest_p.h \
    listchildrenresponse.h \
    listchildrenresponse_p.h \
    listcreateaccountstatusrequest.h \
    listcreateaccountstatusrequest_p.h \
    listcreateaccountstatusresponse.h \
    listcreateaccountstatusresponse_p.h \
    listhandshakesforaccountrequest.h \
    listhandshakesforaccountrequest_p.h \
    listhandshakesforaccountresponse.h \
    listhandshakesforaccountresponse_p.h \
    listhandshakesfororganizationrequest.h \
    listhandshakesfororganizationrequest_p.h \
    listhandshakesfororganizationresponse.h \
    listhandshakesfororganizationresponse_p.h \
    listorganizationalunitsforparentrequest.h \
    listorganizationalunitsforparentrequest_p.h \
    listorganizationalunitsforparentresponse.h \
    listorganizationalunitsforparentresponse_p.h \
    listparentsrequest.h \
    listparentsrequest_p.h \
    listparentsresponse.h \
    listparentsresponse_p.h \
    listpoliciesfortargetrequest.h \
    listpoliciesfortargetrequest_p.h \
    listpoliciesfortargetresponse.h \
    listpoliciesfortargetresponse_p.h \
    listpoliciesrequest.h \
    listpoliciesrequest_p.h \
    listpoliciesresponse.h \
    listpoliciesresponse_p.h \
    listrootsrequest.h \
    listrootsrequest_p.h \
    listrootsresponse.h \
    listrootsresponse_p.h \
    listtargetsforpolicyrequest.h \
    listtargetsforpolicyrequest_p.h \
    listtargetsforpolicyresponse.h \
    listtargetsforpolicyresponse_p.h \
    moveaccountrequest.h \
    moveaccountrequest_p.h \
    moveaccountresponse.h \
    moveaccountresponse_p.h \
    organizationsclient.h \
    organizationsclient_p.h \
    removeaccountfromorganizationrequest.h \
    removeaccountfromorganizationrequest_p.h \
    removeaccountfromorganizationresponse.h \
    removeaccountfromorganizationresponse_p.h \
    updateorganizationalunitrequest.h \
    updateorganizationalunitrequest_p.h \
    updateorganizationalunitresponse.h \
    updateorganizationalunitresponse_p.h \
    updatepolicyrequest.h \
    updatepolicyrequest_p.h \
    updatepolicyresponse.h \
    updatepolicyresponse_p.h \

SOURCES += \
    accepthandshakerequest.cpp \
    accepthandshakeresponse.cpp \
    attachpolicyrequest.cpp \
    attachpolicyresponse.cpp \
    cancelhandshakerequest.cpp \
    cancelhandshakeresponse.cpp \
    createaccountrequest.cpp \
    createaccountresponse.cpp \
    createorganizationalunitrequest.cpp \
    createorganizationalunitresponse.cpp \
    createorganizationrequest.cpp \
    createorganizationresponse.cpp \
    createpolicyrequest.cpp \
    createpolicyresponse.cpp \
    declinehandshakerequest.cpp \
    declinehandshakeresponse.cpp \
    deleteorganizationalunitrequest.cpp \
    deleteorganizationalunitresponse.cpp \
    deleteorganizationresponse.cpp \
    deletepolicyrequest.cpp \
    deletepolicyresponse.cpp \
    describeaccountrequest.cpp \
    describeaccountresponse.cpp \
    describecreateaccountstatusrequest.cpp \
    describecreateaccountstatusresponse.cpp \
    describehandshakerequest.cpp \
    describehandshakeresponse.cpp \
    describeorganizationalunitrequest.cpp \
    describeorganizationalunitresponse.cpp \
    describeorganizationresponse.cpp \
    describepolicyrequest.cpp \
    describepolicyresponse.cpp \
    detachpolicyrequest.cpp \
    detachpolicyresponse.cpp \
    disableawsserviceaccessrequest.cpp \
    disableawsserviceaccessresponse.cpp \
    disablepolicytyperequest.cpp \
    disablepolicytyperesponse.cpp \
    enableallfeaturesrequest.cpp \
    enableallfeaturesresponse.cpp \
    enableawsserviceaccessrequest.cpp \
    enableawsserviceaccessresponse.cpp \
    enablepolicytyperequest.cpp \
    enablepolicytyperesponse.cpp \
    inviteaccounttoorganizationrequest.cpp \
    inviteaccounttoorganizationresponse.cpp \
    leaveorganizationresponse.cpp \
    listaccountsforparentrequest.cpp \
    listaccountsforparentresponse.cpp \
    listaccountsrequest.cpp \
    listaccountsresponse.cpp \
    listawsserviceaccessfororganizationrequest.cpp \
    listawsserviceaccessfororganizationresponse.cpp \
    listchildrenrequest.cpp \
    listchildrenresponse.cpp \
    listcreateaccountstatusrequest.cpp \
    listcreateaccountstatusresponse.cpp \
    listhandshakesforaccountrequest.cpp \
    listhandshakesforaccountresponse.cpp \
    listhandshakesfororganizationrequest.cpp \
    listhandshakesfororganizationresponse.cpp \
    listorganizationalunitsforparentrequest.cpp \
    listorganizationalunitsforparentresponse.cpp \
    listparentsrequest.cpp \
    listparentsresponse.cpp \
    listpoliciesfortargetrequest.cpp \
    listpoliciesfortargetresponse.cpp \
    listpoliciesrequest.cpp \
    listpoliciesresponse.cpp \
    listrootsrequest.cpp \
    listrootsresponse.cpp \
    listtargetsforpolicyrequest.cpp \
    listtargetsforpolicyresponse.cpp \
    moveaccountrequest.cpp \
    moveaccountresponse.cpp \
    organizationsclient.cpp \
    removeaccountfromorganizationrequest.cpp \
    removeaccountfromorganizationresponse.cpp \
    updateorganizationalunitrequest.cpp \
    updateorganizationalunitresponse.cpp \
    updatepolicyrequest.cpp \
    updatepolicyresponse.cpp \

win32:CONFIG += skip_target_version_ext
