// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGELENSCONFIGURATIONREQUEST_H
#define QTAWS_DELETESTORAGELENSCONFIGURATIONREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteStorageLensConfigurationRequestPrivate;

class QTAWSS3CONTROL_EXPORT DeleteStorageLensConfigurationRequest : public S3ControlRequest {

public:
    DeleteStorageLensConfigurationRequest(const DeleteStorageLensConfigurationRequest &other);
    DeleteStorageLensConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStorageLensConfigurationRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
