// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBCLUSTERREQUEST_H
#define QTAWS_REBOOTDBCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RebootDBClusterRequestPrivate;

class QTAWSRDS_EXPORT RebootDBClusterRequest : public RdsRequest {

public:
    RebootDBClusterRequest(const RebootDBClusterRequest &other);
    RebootDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
