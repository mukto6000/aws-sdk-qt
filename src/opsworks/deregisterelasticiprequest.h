// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERELASTICIPREQUEST_H
#define QTAWS_DEREGISTERELASTICIPREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterElasticIpRequestPrivate;

class QTAWSOPSWORKS_EXPORT DeregisterElasticIpRequest : public OpsWorksRequest {

public:
    DeregisterElasticIpRequest(const DeregisterElasticIpRequest &other);
    DeregisterElasticIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterElasticIpRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
