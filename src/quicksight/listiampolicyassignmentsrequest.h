// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIAMPOLICYASSIGNMENTSREQUEST_H
#define QTAWS_LISTIAMPOLICYASSIGNMENTSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListIAMPolicyAssignmentsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListIAMPolicyAssignmentsRequest : public QuickSightRequest {

public:
    ListIAMPolicyAssignmentsRequest(const ListIAMPolicyAssignmentsRequest &other);
    ListIAMPolicyAssignmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIAMPolicyAssignmentsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
