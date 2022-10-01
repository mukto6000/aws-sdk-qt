// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEPERMISSIONSREQUEST_H
#define QTAWS_LISTPROFILEPERMISSIONSREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class ListProfilePermissionsRequestPrivate;

class QTAWSSIGNER_EXPORT ListProfilePermissionsRequest : public SignerRequest {

public:
    ListProfilePermissionsRequest(const ListProfilePermissionsRequest &other);
    ListProfilePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfilePermissionsRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
