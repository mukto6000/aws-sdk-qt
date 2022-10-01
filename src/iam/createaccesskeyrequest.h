// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSKEYREQUEST_H
#define QTAWS_CREATEACCESSKEYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateAccessKeyRequestPrivate;

class QTAWSIAM_EXPORT CreateAccessKeyRequest : public IamRequest {

public:
    CreateAccessKeyRequest(const CreateAccessKeyRequest &other);
    CreateAccessKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
