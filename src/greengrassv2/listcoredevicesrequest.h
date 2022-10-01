// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOREDEVICESREQUEST_H
#define QTAWS_LISTCOREDEVICESREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class ListCoreDevicesRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT ListCoreDevicesRequest : public GreengrassV2Request {

public:
    ListCoreDevicesRequest(const ListCoreDevicesRequest &other);
    ListCoreDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoreDevicesRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
