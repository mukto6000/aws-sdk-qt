// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERCATALOGREQUEST_H
#define QTAWS_DELETESERVERCATALOGREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class DeleteServerCatalogRequestPrivate;

class QTAWSSMS_EXPORT DeleteServerCatalogRequest : public SmsRequest {

public:
    DeleteServerCatalogRequest(const DeleteServerCatalogRequest &other);
    DeleteServerCatalogRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServerCatalogRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
