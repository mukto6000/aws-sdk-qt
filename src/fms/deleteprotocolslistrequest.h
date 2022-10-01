// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTOCOLSLISTREQUEST_H
#define QTAWS_DELETEPROTOCOLSLISTREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class DeleteProtocolsListRequestPrivate;

class QTAWSFMS_EXPORT DeleteProtocolsListRequest : public FmsRequest {

public:
    DeleteProtocolsListRequest(const DeleteProtocolsListRequest &other);
    DeleteProtocolsListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProtocolsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
