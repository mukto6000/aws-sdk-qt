// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKSETREQUEST_H
#define QTAWS_UPDATETASKSETREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateTaskSetRequestPrivate;

class QTAWSECS_EXPORT UpdateTaskSetRequest : public EcsRequest {

public:
    UpdateTaskSetRequest(const UpdateTaskSetRequest &other);
    UpdateTaskSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTaskSetRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
