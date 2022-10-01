// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIAMPOLICYASSIGNMENTREQUEST_H
#define QTAWS_DELETEIAMPOLICYASSIGNMENTREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteIAMPolicyAssignmentRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteIAMPolicyAssignmentRequest : public QuickSightRequest {

public:
    DeleteIAMPolicyAssignmentRequest(const DeleteIAMPolicyAssignmentRequest &other);
    DeleteIAMPolicyAssignmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIAMPolicyAssignmentRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
