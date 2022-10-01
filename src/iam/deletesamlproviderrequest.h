// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAMLPROVIDERREQUEST_H
#define QTAWS_DELETESAMLPROVIDERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteSAMLProviderRequestPrivate;

class QTAWSIAM_EXPORT DeleteSAMLProviderRequest : public IamRequest {

public:
    DeleteSAMLProviderRequest(const DeleteSAMLProviderRequest &other);
    DeleteSAMLProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
