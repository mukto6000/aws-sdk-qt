// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMREQUEST_H
#define QTAWS_DELETESTREAMREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteStreamRequestPrivate;

class QTAWSIOT_EXPORT DeleteStreamRequest : public IoTRequest {

public:
    DeleteStreamRequest(const DeleteStreamRequest &other);
    DeleteStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
