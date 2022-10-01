// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONREQUEST_H
#define QTAWS_DELETEDISTRIBUTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteDistributionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteDistributionRequest : public CloudFrontRequest {

public:
    DeleteDistributionRequest(const DeleteDistributionRequest &other);
    DeleteDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDistributionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
