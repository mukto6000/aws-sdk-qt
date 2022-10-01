// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTACTPOLICYRESPONSE_H
#define QTAWS_PUTCONTACTPOLICYRESPONSE_H

#include "ssmcontactsresponse.h"
#include "putcontactpolicyrequest.h"

namespace QtAws {
namespace SsmContacts {

class PutContactPolicyResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT PutContactPolicyResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    PutContactPolicyResponse(const PutContactPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutContactPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutContactPolicyResponse)
    Q_DISABLE_COPY(PutContactPolicyResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
