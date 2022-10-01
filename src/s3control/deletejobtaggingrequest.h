// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTAGGINGREQUEST_H
#define QTAWS_DELETEJOBTAGGINGREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteJobTaggingRequestPrivate;

class QTAWSS3CONTROL_EXPORT DeleteJobTaggingRequest : public S3ControlRequest {

public:
    DeleteJobTaggingRequest(const DeleteJobTaggingRequest &other);
    DeleteJobTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
