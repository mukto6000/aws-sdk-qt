// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERREQUEST_H
#define QTAWS_DELETESERVERREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DeleteServerRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT DeleteServerRequest : public OpsWorksCmRequest {

public:
    DeleteServerRequest(const DeleteServerRequest &other);
    DeleteServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServerRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
