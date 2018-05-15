include(../../common.pri)

TARGET = QtAwsAlexaForBusiness
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    alexaforbusinessclient.h \
    alexaforbusinessclient_p.h \
    alexaforbusinessrequest.h \
    alexaforbusinessrequest_p.h \
    alexaforbusinessresponse.h \
    alexaforbusinessresponse_p.h \
    associatecontactwithaddressbookrequest.h \
    associatecontactwithaddressbookrequest_p.h \
    associatecontactwithaddressbookresponse.h \
    associatecontactwithaddressbookresponse_p.h \
    associatedevicewithroomrequest.h \
    associatedevicewithroomrequest_p.h \
    associatedevicewithroomresponse.h \
    associatedevicewithroomresponse_p.h \
    associateskillgroupwithroomrequest.h \
    associateskillgroupwithroomrequest_p.h \
    associateskillgroupwithroomresponse.h \
    associateskillgroupwithroomresponse_p.h \
    createaddressbookrequest.h \
    createaddressbookrequest_p.h \
    createaddressbookresponse.h \
    createaddressbookresponse_p.h \
    createcontactrequest.h \
    createcontactrequest_p.h \
    createcontactresponse.h \
    createcontactresponse_p.h \
    createprofilerequest.h \
    createprofilerequest_p.h \
    createprofileresponse.h \
    createprofileresponse_p.h \
    createroomrequest.h \
    createroomrequest_p.h \
    createroomresponse.h \
    createroomresponse_p.h \
    createskillgrouprequest.h \
    createskillgrouprequest_p.h \
    createskillgroupresponse.h \
    createskillgroupresponse_p.h \
    createuserrequest.h \
    createuserrequest_p.h \
    createuserresponse.h \
    createuserresponse_p.h \
    deleteaddressbookrequest.h \
    deleteaddressbookrequest_p.h \
    deleteaddressbookresponse.h \
    deleteaddressbookresponse_p.h \
    deletecontactrequest.h \
    deletecontactrequest_p.h \
    deletecontactresponse.h \
    deletecontactresponse_p.h \
    deleteprofilerequest.h \
    deleteprofilerequest_p.h \
    deleteprofileresponse.h \
    deleteprofileresponse_p.h \
    deleteroomrequest.h \
    deleteroomrequest_p.h \
    deleteroomresponse.h \
    deleteroomresponse_p.h \
    deleteroomskillparameterrequest.h \
    deleteroomskillparameterrequest_p.h \
    deleteroomskillparameterresponse.h \
    deleteroomskillparameterresponse_p.h \
    deleteskillgrouprequest.h \
    deleteskillgrouprequest_p.h \
    deleteskillgroupresponse.h \
    deleteskillgroupresponse_p.h \
    deleteuserrequest.h \
    deleteuserrequest_p.h \
    deleteuserresponse.h \
    deleteuserresponse_p.h \
    disassociatecontactfromaddressbookrequest.h \
    disassociatecontactfromaddressbookrequest_p.h \
    disassociatecontactfromaddressbookresponse.h \
    disassociatecontactfromaddressbookresponse_p.h \
    disassociatedevicefromroomrequest.h \
    disassociatedevicefromroomrequest_p.h \
    disassociatedevicefromroomresponse.h \
    disassociatedevicefromroomresponse_p.h \
    disassociateskillgroupfromroomrequest.h \
    disassociateskillgroupfromroomrequest_p.h \
    disassociateskillgroupfromroomresponse.h \
    disassociateskillgroupfromroomresponse_p.h \
    getaddressbookrequest.h \
    getaddressbookrequest_p.h \
    getaddressbookresponse.h \
    getaddressbookresponse_p.h \
    getcontactrequest.h \
    getcontactrequest_p.h \
    getcontactresponse.h \
    getcontactresponse_p.h \
    getdevicerequest.h \
    getdevicerequest_p.h \
    getdeviceresponse.h \
    getdeviceresponse_p.h \
    getprofilerequest.h \
    getprofilerequest_p.h \
    getprofileresponse.h \
    getprofileresponse_p.h \
    getroomrequest.h \
    getroomrequest_p.h \
    getroomresponse.h \
    getroomresponse_p.h \
    getroomskillparameterrequest.h \
    getroomskillparameterrequest_p.h \
    getroomskillparameterresponse.h \
    getroomskillparameterresponse_p.h \
    getskillgrouprequest.h \
    getskillgrouprequest_p.h \
    getskillgroupresponse.h \
    getskillgroupresponse_p.h \
    listdeviceeventsrequest.h \
    listdeviceeventsrequest_p.h \
    listdeviceeventsresponse.h \
    listdeviceeventsresponse_p.h \
    listskillsrequest.h \
    listskillsrequest_p.h \
    listskillsresponse.h \
    listskillsresponse_p.h \
    listtagsrequest.h \
    listtagsrequest_p.h \
    listtagsresponse.h \
    listtagsresponse_p.h \
    putroomskillparameterrequest.h \
    putroomskillparameterrequest_p.h \
    putroomskillparameterresponse.h \
    putroomskillparameterresponse_p.h \
    resolveroomrequest.h \
    resolveroomrequest_p.h \
    resolveroomresponse.h \
    resolveroomresponse_p.h \
    revokeinvitationrequest.h \
    revokeinvitationrequest_p.h \
    revokeinvitationresponse.h \
    revokeinvitationresponse_p.h \
    searchaddressbooksrequest.h \
    searchaddressbooksrequest_p.h \
    searchaddressbooksresponse.h \
    searchaddressbooksresponse_p.h \
    searchcontactsrequest.h \
    searchcontactsrequest_p.h \
    searchcontactsresponse.h \
    searchcontactsresponse_p.h \
    searchdevicesrequest.h \
    searchdevicesrequest_p.h \
    searchdevicesresponse.h \
    searchdevicesresponse_p.h \
    searchprofilesrequest.h \
    searchprofilesrequest_p.h \
    searchprofilesresponse.h \
    searchprofilesresponse_p.h \
    searchroomsrequest.h \
    searchroomsrequest_p.h \
    searchroomsresponse.h \
    searchroomsresponse_p.h \
    searchskillgroupsrequest.h \
    searchskillgroupsrequest_p.h \
    searchskillgroupsresponse.h \
    searchskillgroupsresponse_p.h \
    searchusersrequest.h \
    searchusersrequest_p.h \
    searchusersresponse.h \
    searchusersresponse_p.h \
    sendinvitationrequest.h \
    sendinvitationrequest_p.h \
    sendinvitationresponse.h \
    sendinvitationresponse_p.h \
    startdevicesyncrequest.h \
    startdevicesyncrequest_p.h \
    startdevicesyncresponse.h \
    startdevicesyncresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updateaddressbookrequest.h \
    updateaddressbookrequest_p.h \
    updateaddressbookresponse.h \
    updateaddressbookresponse_p.h \
    updatecontactrequest.h \
    updatecontactrequest_p.h \
    updatecontactresponse.h \
    updatecontactresponse_p.h \
    updatedevicerequest.h \
    updatedevicerequest_p.h \
    updatedeviceresponse.h \
    updatedeviceresponse_p.h \
    updateprofilerequest.h \
    updateprofilerequest_p.h \
    updateprofileresponse.h \
    updateprofileresponse_p.h \
    updateroomrequest.h \
    updateroomrequest_p.h \
    updateroomresponse.h \
    updateroomresponse_p.h \
    updateskillgrouprequest.h \
    updateskillgrouprequest_p.h \
    updateskillgroupresponse.h \
    updateskillgroupresponse_p.h \

SOURCES += \
    alexaforbusinessclient.cpp \
    alexaforbusinessrequest.cpp \
    alexaforbusinessresponse.cpp \
    associatecontactwithaddressbookrequest.cpp \
    associatecontactwithaddressbookresponse.cpp \
    associatedevicewithroomrequest.cpp \
    associatedevicewithroomresponse.cpp \
    associateskillgroupwithroomrequest.cpp \
    associateskillgroupwithroomresponse.cpp \
    createaddressbookrequest.cpp \
    createaddressbookresponse.cpp \
    createcontactrequest.cpp \
    createcontactresponse.cpp \
    createprofilerequest.cpp \
    createprofileresponse.cpp \
    createroomrequest.cpp \
    createroomresponse.cpp \
    createskillgrouprequest.cpp \
    createskillgroupresponse.cpp \
    createuserrequest.cpp \
    createuserresponse.cpp \
    deleteaddressbookrequest.cpp \
    deleteaddressbookresponse.cpp \
    deletecontactrequest.cpp \
    deletecontactresponse.cpp \
    deleteprofilerequest.cpp \
    deleteprofileresponse.cpp \
    deleteroomrequest.cpp \
    deleteroomresponse.cpp \
    deleteroomskillparameterrequest.cpp \
    deleteroomskillparameterresponse.cpp \
    deleteskillgrouprequest.cpp \
    deleteskillgroupresponse.cpp \
    deleteuserrequest.cpp \
    deleteuserresponse.cpp \
    disassociatecontactfromaddressbookrequest.cpp \
    disassociatecontactfromaddressbookresponse.cpp \
    disassociatedevicefromroomrequest.cpp \
    disassociatedevicefromroomresponse.cpp \
    disassociateskillgroupfromroomrequest.cpp \
    disassociateskillgroupfromroomresponse.cpp \
    getaddressbookrequest.cpp \
    getaddressbookresponse.cpp \
    getcontactrequest.cpp \
    getcontactresponse.cpp \
    getdevicerequest.cpp \
    getdeviceresponse.cpp \
    getprofilerequest.cpp \
    getprofileresponse.cpp \
    getroomrequest.cpp \
    getroomresponse.cpp \
    getroomskillparameterrequest.cpp \
    getroomskillparameterresponse.cpp \
    getskillgrouprequest.cpp \
    getskillgroupresponse.cpp \
    listdeviceeventsrequest.cpp \
    listdeviceeventsresponse.cpp \
    listskillsrequest.cpp \
    listskillsresponse.cpp \
    listtagsrequest.cpp \
    listtagsresponse.cpp \
    putroomskillparameterrequest.cpp \
    putroomskillparameterresponse.cpp \
    resolveroomrequest.cpp \
    resolveroomresponse.cpp \
    revokeinvitationrequest.cpp \
    revokeinvitationresponse.cpp \
    searchaddressbooksrequest.cpp \
    searchaddressbooksresponse.cpp \
    searchcontactsrequest.cpp \
    searchcontactsresponse.cpp \
    searchdevicesrequest.cpp \
    searchdevicesresponse.cpp \
    searchprofilesrequest.cpp \
    searchprofilesresponse.cpp \
    searchroomsrequest.cpp \
    searchroomsresponse.cpp \
    searchskillgroupsrequest.cpp \
    searchskillgroupsresponse.cpp \
    searchusersrequest.cpp \
    searchusersresponse.cpp \
    sendinvitationrequest.cpp \
    sendinvitationresponse.cpp \
    startdevicesyncrequest.cpp \
    startdevicesyncresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updateaddressbookrequest.cpp \
    updateaddressbookresponse.cpp \
    updatecontactrequest.cpp \
    updatecontactresponse.cpp \
    updatedevicerequest.cpp \
    updatedeviceresponse.cpp \
    updateprofilerequest.cpp \
    updateprofileresponse.cpp \
    updateroomrequest.cpp \
    updateroomresponse.cpp \
    updateskillgrouprequest.cpp \
    updateskillgroupresponse.cpp \

win32:CONFIG += skip_target_version_ext