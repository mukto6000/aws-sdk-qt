// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIPMEDIAAPPLICATIONSREQUEST_H
#define QTAWS_LISTSIPMEDIAAPPLICATIONSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListSipMediaApplicationsRequestPrivate;

class QTAWSCHIME_EXPORT ListSipMediaApplicationsRequest : public ChimeRequest {

public:
    ListSipMediaApplicationsRequest(const ListSipMediaApplicationsRequest &other);
    ListSipMediaApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSipMediaApplicationsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
