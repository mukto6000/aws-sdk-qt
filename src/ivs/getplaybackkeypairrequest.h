// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYBACKKEYPAIRREQUEST_H
#define QTAWS_GETPLAYBACKKEYPAIRREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class GetPlaybackKeyPairRequestPrivate;

class QTAWSIVS_EXPORT GetPlaybackKeyPairRequest : public IvsRequest {

public:
    GetPlaybackKeyPairRequest(const GetPlaybackKeyPairRequest &other);
    GetPlaybackKeyPairRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlaybackKeyPairRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
