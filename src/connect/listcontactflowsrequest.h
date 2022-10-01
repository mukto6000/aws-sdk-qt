// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTFLOWSREQUEST_H
#define QTAWS_LISTCONTACTFLOWSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListContactFlowsRequestPrivate;

class QTAWSCONNECT_EXPORT ListContactFlowsRequest : public ConnectRequest {

public:
    ListContactFlowsRequest(const ListContactFlowsRequest &other);
    ListContactFlowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactFlowsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
