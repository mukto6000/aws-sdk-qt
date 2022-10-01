// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERGROUPRESPONSE_H
#define QTAWS_DESCRIBEGAMESERVERGROUPRESPONSE_H

#include "gameliftresponse.h"
#include "describegameservergrouprequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerGroupResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameServerGroupResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeGameServerGroupResponse(const DescribeGameServerGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGameServerGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameServerGroupResponse)
    Q_DISABLE_COPY(DescribeGameServerGroupResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
