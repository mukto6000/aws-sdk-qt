// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTEREQUEST_H
#define QTAWS_DELETEROUTEREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteRouteRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT DeleteRouteRequest : public MigrationHubRefactorSpacesRequest {

public:
    DeleteRouteRequest(const DeleteRouteRequest &other);
    DeleteRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
