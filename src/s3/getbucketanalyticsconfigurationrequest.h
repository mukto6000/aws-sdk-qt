// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETANALYTICSCONFIGURATIONREQUEST_H
#define QTAWS_GETBUCKETANALYTICSCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetBucketAnalyticsConfigurationRequestPrivate;

class QTAWSS3_EXPORT GetBucketAnalyticsConfigurationRequest : public S3Request {

public:
    GetBucketAnalyticsConfigurationRequest(const GetBucketAnalyticsConfigurationRequest &other);
    GetBucketAnalyticsConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketAnalyticsConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
