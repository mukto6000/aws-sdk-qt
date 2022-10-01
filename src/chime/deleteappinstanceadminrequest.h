// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEADMINREQUEST_H
#define QTAWS_DELETEAPPINSTANCEADMINREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceAdminRequestPrivate;

class QTAWSCHIME_EXPORT DeleteAppInstanceAdminRequest : public ChimeRequest {

public:
    DeleteAppInstanceAdminRequest(const DeleteAppInstanceAdminRequest &other);
    DeleteAppInstanceAdminRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceAdminRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
