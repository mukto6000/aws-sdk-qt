// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESNAPSHOTACCESSREQUEST_H
#define QTAWS_AUTHORIZESNAPSHOTACCESSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeSnapshotAccessRequestPrivate;

class QTAWSREDSHIFT_EXPORT AuthorizeSnapshotAccessRequest : public RedshiftRequest {

public:
    AuthorizeSnapshotAccessRequest(const AuthorizeSnapshotAccessRequest &other);
    AuthorizeSnapshotAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeSnapshotAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
