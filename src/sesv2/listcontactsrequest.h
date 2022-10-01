// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSREQUEST_H
#define QTAWS_LISTCONTACTSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class ListContactsRequestPrivate;

class QTAWSSESV2_EXPORT ListContactsRequest : public SESv2Request {

public:
    ListContactsRequest(const ListContactsRequest &other);
    ListContactsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
