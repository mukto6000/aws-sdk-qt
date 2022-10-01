// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALIASREQUEST_H
#define QTAWS_UPDATEALIASREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class UpdateAliasRequestPrivate;

class QTAWSKMS_EXPORT UpdateAliasRequest : public KmsRequest {

public:
    UpdateAliasRequest(const UpdateAliasRequest &other);
    UpdateAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAliasRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
