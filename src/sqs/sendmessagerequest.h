// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGEREQUEST_H
#define QTAWS_SENDMESSAGEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace Sqs {

class SendMessageRequestPrivate;

class QTAWSSQS_EXPORT SendMessageRequest : public SqsRequest {

public:
    SendMessageRequest(const SendMessageRequest &other);
    SendMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendMessageRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
