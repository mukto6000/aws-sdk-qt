// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETINTELLIGENTTIERINGCONFIGURATIONSREQUEST_H
#define QTAWS_LISTBUCKETINTELLIGENTTIERINGCONFIGURATIONSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListBucketIntelligentTieringConfigurationsRequestPrivate;

class QTAWSS3_EXPORT ListBucketIntelligentTieringConfigurationsRequest : public S3Request {

public:
    ListBucketIntelligentTieringConfigurationsRequest(const ListBucketIntelligentTieringConfigurationsRequest &other);
    ListBucketIntelligentTieringConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketIntelligentTieringConfigurationsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
