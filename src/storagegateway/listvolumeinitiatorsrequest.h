// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMEINITIATORSREQUEST_H
#define QTAWS_LISTVOLUMEINITIATORSREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumeInitiatorsRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListVolumeInitiatorsRequest : public StorageGatewayRequest {

public:
    ListVolumeInitiatorsRequest(const ListVolumeInitiatorsRequest &other);
    ListVolumeInitiatorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVolumeInitiatorsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
