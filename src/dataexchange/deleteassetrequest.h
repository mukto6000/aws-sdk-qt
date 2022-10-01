// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSETREQUEST_H
#define QTAWS_DELETEASSETREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class DeleteAssetRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT DeleteAssetRequest : public DataExchangeRequest {

public:
    DeleteAssetRequest(const DeleteAssetRequest &other);
    DeleteAssetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
