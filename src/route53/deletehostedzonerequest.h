// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTEDZONEREQUEST_H
#define QTAWS_DELETEHOSTEDZONEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class DeleteHostedZoneRequestPrivate;

class QTAWSROUTE53_EXPORT DeleteHostedZoneRequest : public Route53Request {

public:
    DeleteHostedZoneRequest(const DeleteHostedZoneRequest &other);
    DeleteHostedZoneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
