// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPREQUEST_H
#define QTAWS_DELETEBACKUPREQUEST_H

#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteBackupRequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT DeleteBackupRequest : public CloudHsmV2Request {

public:
    DeleteBackupRequest(const DeleteBackupRequest &other);
    DeleteBackupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
