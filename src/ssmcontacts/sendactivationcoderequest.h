// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDACTIVATIONCODEREQUEST_H
#define QTAWS_SENDACTIVATIONCODEREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class SendActivationCodeRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT SendActivationCodeRequest : public SsmContactsRequest {

public:
    SendActivationCodeRequest(const SendActivationCodeRequest &other);
    SendActivationCodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendActivationCodeRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
