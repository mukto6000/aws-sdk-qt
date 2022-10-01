// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEREQUEST_P_H
#define QTAWS_CREATEDATASOURCEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createdatasourcerequest.h"

namespace QtAws {
namespace QuickSight {

class CreateDataSourceRequest;

class CreateDataSourceRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateDataSourceRequestPrivate(const QuickSightRequest::Action action,
                                   CreateDataSourceRequest * const q);
    CreateDataSourceRequestPrivate(const CreateDataSourceRequestPrivate &other,
                                   CreateDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
