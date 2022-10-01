// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTALIASREQUEST_H
#define QTAWS_DELETEACCOUNTALIASREQUEST_H

#include "supportapprequest.h"

namespace QtAws {
namespace SupportApp {

class DeleteAccountAliasRequestPrivate;

class QTAWSSUPPORTAPP_EXPORT DeleteAccountAliasRequest : public SupportAppRequest {

public:
    DeleteAccountAliasRequest(const DeleteAccountAliasRequest &other);
    DeleteAccountAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountAliasRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
