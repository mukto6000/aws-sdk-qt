// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCERESPONSE_H
#define QTAWS_DEREGISTERINSTANCERESPONSE_H

#include "servicediscoveryresponse.h"
#include "deregisterinstancerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeregisterInstanceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT DeregisterInstanceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    DeregisterInstanceResponse(const DeregisterInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterInstanceResponse)
    Q_DISABLE_COPY(DeregisterInstanceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
