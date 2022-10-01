// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMATCHMAKINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETEMATCHMAKINGCONFIGURATIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteMatchmakingConfigurationRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteMatchmakingConfigurationRequest : public GameLiftRequest {

public:
    DeleteMatchmakingConfigurationRequest(const DeleteMatchmakingConfigurationRequest &other);
    DeleteMatchmakingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMatchmakingConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
