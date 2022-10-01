// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPVERSIONSREQUEST_H
#define QTAWS_LISTGROUPVERSIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListGroupVersionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListGroupVersionsRequest : public GreengrassRequest {

public:
    ListGroupVersionsRequest(const ListGroupVersionsRequest &other);
    ListGroupVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
