// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDNSAVAILABILITYREQUEST_H
#define QTAWS_CHECKDNSAVAILABILITYREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CheckDNSAvailabilityRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT CheckDNSAvailabilityRequest : public ElasticBeanstalkRequest {

public:
    CheckDNSAvailabilityRequest(const CheckDNSAvailabilityRequest &other);
    CheckDNSAvailabilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckDNSAvailabilityRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
