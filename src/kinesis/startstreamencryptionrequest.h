// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMENCRYPTIONREQUEST_H
#define QTAWS_STARTSTREAMENCRYPTIONREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class StartStreamEncryptionRequestPrivate;

class QTAWSKINESIS_EXPORT StartStreamEncryptionRequest : public KinesisRequest {

public:
    StartStreamEncryptionRequest(const StartStreamEncryptionRequest &other);
    StartStreamEncryptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStreamEncryptionRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
