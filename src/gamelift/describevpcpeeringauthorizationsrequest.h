// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSREQUEST_H
#define QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeVpcPeeringAuthorizationsRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeVpcPeeringAuthorizationsRequest : public GameLiftRequest {

public:
    DescribeVpcPeeringAuthorizationsRequest(const DescribeVpcPeeringAuthorizationsRequest &other);
    DescribeVpcPeeringAuthorizationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcPeeringAuthorizationsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
