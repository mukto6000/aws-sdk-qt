// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTAUTHORIZERREQUEST_H
#define QTAWS_SETDEFAULTAUTHORIZERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class SetDefaultAuthorizerRequestPrivate;

class QTAWSIOT_EXPORT SetDefaultAuthorizerRequest : public IoTRequest {

public:
    SetDefaultAuthorizerRequest(const SetDefaultAuthorizerRequest &other);
    SetDefaultAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDefaultAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
