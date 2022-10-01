// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGDISTRIBUTIONREQUEST_H
#define QTAWS_DELETESTREAMINGDISTRIBUTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteStreamingDistributionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteStreamingDistributionRequest : public CloudFrontRequest {

public:
    DeleteStreamingDistributionRequest(const DeleteStreamingDistributionRequest &other);
    DeleteStreamingDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamingDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
