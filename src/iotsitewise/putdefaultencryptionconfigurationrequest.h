// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEFAULTENCRYPTIONCONFIGURATIONREQUEST_H
#define QTAWS_PUTDEFAULTENCRYPTIONCONFIGURATIONREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class PutDefaultEncryptionConfigurationRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT PutDefaultEncryptionConfigurationRequest : public IoTSiteWiseRequest {

public:
    PutDefaultEncryptionConfigurationRequest(const PutDefaultEncryptionConfigurationRequest &other);
    PutDefaultEncryptionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDefaultEncryptionConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
