// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACEPROPERTIESREQUEST_H
#define QTAWS_MODIFYWORKSPACEPROPERTIESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspacePropertiesRequestPrivate;

class QTAWSWORKSPACES_EXPORT ModifyWorkspacePropertiesRequest : public WorkSpacesRequest {

public:
    ModifyWorkspacePropertiesRequest(const ModifyWorkspacePropertiesRequest &other);
    ModifyWorkspacePropertiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyWorkspacePropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
