// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERGROUPREQUEST_H
#define QTAWS_DESCRIBEGAMESERVERGROUPREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerGroupRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameServerGroupRequest : public GameLiftRequest {

public:
    DescribeGameServerGroupRequest(const DescribeGameServerGroupRequest &other);
    DescribeGameServerGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
