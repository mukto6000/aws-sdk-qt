// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSERVERREQUEST_H
#define QTAWS_STARTSERVERREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class StartServerRequestPrivate;

class QTAWSTRANSFER_EXPORT StartServerRequest : public TransferRequest {

public:
    StartServerRequest(const StartServerRequest &other);
    StartServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
