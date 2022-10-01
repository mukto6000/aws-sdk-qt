// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYREQUEST_H
#define QTAWS_DELETEIDENTITYREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteIdentityRequestPrivate;

class QTAWSSES_EXPORT DeleteIdentityRequest : public SesRequest {

public:
    DeleteIdentityRequest(const DeleteIdentityRequest &other);
    DeleteIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
