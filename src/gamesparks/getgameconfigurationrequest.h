// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMECONFIGURATIONREQUEST_H
#define QTAWS_GETGAMECONFIGURATIONREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class GetGameConfigurationRequestPrivate;

class QTAWSGAMESPARKS_EXPORT GetGameConfigurationRequest : public GameSparksRequest {

public:
    GetGameConfigurationRequest(const GetGameConfigurationRequest &other);
    GetGameConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGameConfigurationRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
