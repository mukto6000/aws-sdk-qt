// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONECOUNTREQUEST_H
#define QTAWS_GETHOSTEDZONECOUNTREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneCountRequestPrivate;

class QTAWSROUTE53_EXPORT GetHostedZoneCountRequest : public Route53Request {

public:
    GetHostedZoneCountRequest(const GetHostedZoneCountRequest &other);
    GetHostedZoneCountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostedZoneCountRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
