// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETESTGRIDPROJECTREQUEST_H
#define QTAWS_DELETETESTGRIDPROJECTREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteTestGridProjectRequestPrivate;

class QTAWSDEVICEFARM_EXPORT DeleteTestGridProjectRequest : public DeviceFarmRequest {

public:
    DeleteTestGridProjectRequest(const DeleteTestGridProjectRequest &other);
    DeleteTestGridProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTestGridProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
