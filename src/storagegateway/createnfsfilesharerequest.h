// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENFSFILESHAREREQUEST_H
#define QTAWS_CREATENFSFILESHAREREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateNFSFileShareRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateNFSFileShareRequest : public StorageGatewayRequest {

public:
    CreateNFSFileShareRequest(const CreateNFSFileShareRequest &other);
    CreateNFSFileShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNFSFileShareRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
