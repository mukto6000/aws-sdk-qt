// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBUILDWORKSPACESREQUEST_H
#define QTAWS_REBUILDWORKSPACESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RebuildWorkspacesRequestPrivate;

class QTAWSWORKSPACES_EXPORT RebuildWorkspacesRequest : public WorkSpacesRequest {

public:
    RebuildWorkspacesRequest(const RebuildWorkspacesRequest &other);
    RebuildWorkspacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebuildWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
