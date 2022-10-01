// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHECKERIPRANGESREQUEST_H
#define QTAWS_GETCHECKERIPRANGESREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetCheckerIpRangesRequestPrivate;

class QTAWSROUTE53_EXPORT GetCheckerIpRangesRequest : public Route53Request {

public:
    GetCheckerIpRangesRequest(const GetCheckerIpRangesRequest &other);
    GetCheckerIpRangesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCheckerIpRangesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
