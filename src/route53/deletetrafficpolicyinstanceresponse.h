// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICPOLICYINSTANCERESPONSE_H
#define QTAWS_DELETETRAFFICPOLICYINSTANCERESPONSE_H

#include "route53response.h"
#include "deletetrafficpolicyinstancerequest.h"

namespace QtAws {
namespace Route53 {

class DeleteTrafficPolicyInstanceResponsePrivate;

class QTAWSROUTE53_EXPORT DeleteTrafficPolicyInstanceResponse : public Route53Response {
    Q_OBJECT

public:
    DeleteTrafficPolicyInstanceResponse(const DeleteTrafficPolicyInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrafficPolicyInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficPolicyInstanceResponse)
    Q_DISABLE_COPY(DeleteTrafficPolicyInstanceResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
