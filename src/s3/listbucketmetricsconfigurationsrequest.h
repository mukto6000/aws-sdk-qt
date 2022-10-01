// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETMETRICSCONFIGURATIONSREQUEST_H
#define QTAWS_LISTBUCKETMETRICSCONFIGURATIONSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListBucketMetricsConfigurationsRequestPrivate;

class QTAWSS3_EXPORT ListBucketMetricsConfigurationsRequest : public S3Request {

public:
    ListBucketMetricsConfigurationsRequest(const ListBucketMetricsConfigurationsRequest &other);
    ListBucketMetricsConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketMetricsConfigurationsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
