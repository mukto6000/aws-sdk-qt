// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEREQUEST_H
#define QTAWS_DELETEPROFILEREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteProfileRequestPrivate;

class QTAWSTRANSFER_EXPORT DeleteProfileRequest : public TransferRequest {

public:
    DeleteProfileRequest(const DeleteProfileRequest &other);
    DeleteProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfileRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
