// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENGAGEMENTSREQUEST_H
#define QTAWS_LISTENGAGEMENTSREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListEngagementsRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT ListEngagementsRequest : public SsmContactsRequest {

public:
    ListEngagementsRequest(const ListEngagementsRequest &other);
    ListEngagementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEngagementsRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
