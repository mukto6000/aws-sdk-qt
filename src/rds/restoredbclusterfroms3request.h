// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERFROMS3REQUEST_H
#define QTAWS_RESTOREDBCLUSTERFROMS3REQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBClusterFromS3RequestPrivate;

class QTAWSRDS_EXPORT RestoreDBClusterFromS3Request : public RdsRequest {

public:
    RestoreDBClusterFromS3Request(const RestoreDBClusterFromS3Request &other);
    RestoreDBClusterFromS3Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBClusterFromS3Request)

};

} // namespace Rds
} // namespace QtAws

#endif
