// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKLOADSHAREREQUEST_H
#define QTAWS_UPDATEWORKLOADSHAREREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateWorkloadShareRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateWorkloadShareRequest : public WellArchitectedRequest {

public:
    UpdateWorkloadShareRequest(const UpdateWorkloadShareRequest &other);
    UpdateWorkloadShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkloadShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
