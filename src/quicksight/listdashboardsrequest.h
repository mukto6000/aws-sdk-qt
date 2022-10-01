// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDASHBOARDSREQUEST_H
#define QTAWS_LISTDASHBOARDSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListDashboardsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListDashboardsRequest : public QuickSightRequest {

public:
    ListDashboardsRequest(const ListDashboardsRequest &other);
    ListDashboardsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDashboardsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
