// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESREQUEST_H
#define QTAWS_LISTSERVICESREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListServicesRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT ListServicesRequest : public MigrationHubRefactorSpacesRequest {

public:
    ListServicesRequest(const ListServicesRequest &other);
    ListServicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServicesRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
