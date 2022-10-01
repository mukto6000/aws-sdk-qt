// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBILLINGGROUPSREQUEST_H
#define QTAWS_LISTBILLINGGROUPSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListBillingGroupsRequestPrivate;

class QTAWSIOT_EXPORT ListBillingGroupsRequest : public IoTRequest {

public:
    ListBillingGroupsRequest(const ListBillingGroupsRequest &other);
    ListBillingGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBillingGroupsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
