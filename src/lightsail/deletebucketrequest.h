// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETREQUEST_H
#define QTAWS_DELETEBUCKETREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteBucketRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteBucketRequest : public LightsailRequest {

public:
    DeleteBucketRequest(const DeleteBucketRequest &other);
    DeleteBucketRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
