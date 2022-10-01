// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITLEDAPPLICATIONSREQUEST_H
#define QTAWS_LISTENTITLEDAPPLICATIONSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class ListEntitledApplicationsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT ListEntitledApplicationsRequest : public AppStreamRequest {

public:
    ListEntitledApplicationsRequest(const ListEntitledApplicationsRequest &other);
    ListEntitledApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitledApplicationsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
