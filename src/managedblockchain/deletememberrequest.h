// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERREQUEST_H
#define QTAWS_DELETEMEMBERREQUEST_H

#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class DeleteMemberRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT DeleteMemberRequest : public ManagedBlockchainRequest {

public:
    DeleteMemberRequest(const DeleteMemberRequest &other);
    DeleteMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMemberRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
