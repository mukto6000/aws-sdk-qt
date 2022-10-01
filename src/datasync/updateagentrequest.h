// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGENTREQUEST_H
#define QTAWS_UPDATEAGENTREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateAgentRequestPrivate;

class QTAWSDATASYNC_EXPORT UpdateAgentRequest : public DataSyncRequest {

public:
    UpdateAgentRequest(const UpdateAgentRequest &other);
    UpdateAgentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAgentRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
