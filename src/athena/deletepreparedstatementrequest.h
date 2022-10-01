// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREPAREDSTATEMENTREQUEST_H
#define QTAWS_DELETEPREPAREDSTATEMENTREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class DeletePreparedStatementRequestPrivate;

class QTAWSATHENA_EXPORT DeletePreparedStatementRequest : public AthenaRequest {

public:
    DeletePreparedStatementRequest(const DeletePreparedStatementRequest &other);
    DeletePreparedStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
