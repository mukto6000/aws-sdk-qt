// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECACHESECURITYGROUPINGRESSREQUEST_H
#define QTAWS_REVOKECACHESECURITYGROUPINGRESSREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class RevokeCacheSecurityGroupIngressRequestPrivate;

class QTAWSELASTICACHE_EXPORT RevokeCacheSecurityGroupIngressRequest : public ElastiCacheRequest {

public:
    RevokeCacheSecurityGroupIngressRequest(const RevokeCacheSecurityGroupIngressRequest &other);
    RevokeCacheSecurityGroupIngressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeCacheSecurityGroupIngressRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
