// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONREQUEST_H
#define QTAWS_DELETEPERMISSIONREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class DeletePermissionRequestPrivate;

class QTAWSACMPCA_EXPORT DeletePermissionRequest : public AcmPcaRequest {

public:
    DeletePermissionRequest(const DeletePermissionRequest &other);
    DeletePermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
