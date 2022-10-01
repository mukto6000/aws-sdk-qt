// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICERESPONSE_H
#define QTAWS_UPDATESERVICERESPONSE_H

#include "ecsresponse.h"
#include "updateservicerequest.h"

namespace QtAws {
namespace Ecs {

class UpdateServiceResponsePrivate;

class QTAWSECS_EXPORT UpdateServiceResponse : public EcsResponse {
    Q_OBJECT

public:
    UpdateServiceResponse(const UpdateServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceResponse)
    Q_DISABLE_COPY(UpdateServiceResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
