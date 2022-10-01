// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETBUNDLESREQUEST_H
#define QTAWS_GETBUCKETBUNDLESREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketBundlesRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetBucketBundlesRequest : public LightsailRequest {

public:
    GetBucketBundlesRequest(const GetBucketBundlesRequest &other);
    GetBucketBundlesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketBundlesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
