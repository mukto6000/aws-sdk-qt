// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSUBNETGROUPREQUEST_H
#define QTAWS_DELETEDBSUBNETGROUPREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DeleteDBSubnetGroupRequestPrivate;

class QTAWSDOCDB_EXPORT DeleteDBSubnetGroupRequest : public DocDbRequest {

public:
    DeleteDBSubnetGroupRequest(const DeleteDBSubnetGroupRequest &other);
    DeleteDBSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBSubnetGroupRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
