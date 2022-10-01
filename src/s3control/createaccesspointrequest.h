// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOINTREQUEST_H
#define QTAWS_CREATEACCESSPOINTREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class CreateAccessPointRequestPrivate;

class QTAWSS3CONTROL_EXPORT CreateAccessPointRequest : public S3ControlRequest {

public:
    CreateAccessPointRequest(const CreateAccessPointRequest &other);
    CreateAccessPointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessPointRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
