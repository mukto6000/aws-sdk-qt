// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTREQUEST_H
#define QTAWS_DELETEPROJECTREQUEST_H

#include "mobilerequest.h"

namespace QtAws {
namespace Mobile {

class DeleteProjectRequestPrivate;

class QTAWSMOBILE_EXPORT DeleteProjectRequest : public MobileRequest {

public:
    DeleteProjectRequest(const DeleteProjectRequest &other);
    DeleteProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProjectRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
