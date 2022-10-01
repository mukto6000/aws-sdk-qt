// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGESBYCONTACTREQUEST_H
#define QTAWS_LISTPAGESBYCONTACTREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListPagesByContactRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT ListPagesByContactRequest : public SsmContactsRequest {

public:
    ListPagesByContactRequest(const ListPagesByContactRequest &other);
    ListPagesByContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPagesByContactRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
