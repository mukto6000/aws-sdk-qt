// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGSUBSCRIPTIONREQUEST_H
#define QTAWS_DELETELOGSUBSCRIPTIONREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteLogSubscriptionRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeleteLogSubscriptionRequest : public DirectoryServiceRequest {

public:
    DeleteLogSubscriptionRequest(const DeleteLogSubscriptionRequest &other);
    DeleteLogSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLogSubscriptionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
