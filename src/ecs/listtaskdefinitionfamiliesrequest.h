// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKDEFINITIONFAMILIESREQUEST_H
#define QTAWS_LISTTASKDEFINITIONFAMILIESREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class ListTaskDefinitionFamiliesRequestPrivate;

class QTAWSECS_EXPORT ListTaskDefinitionFamiliesRequest : public EcsRequest {

public:
    ListTaskDefinitionFamiliesRequest(const ListTaskDefinitionFamiliesRequest &other);
    ListTaskDefinitionFamiliesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTaskDefinitionFamiliesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
