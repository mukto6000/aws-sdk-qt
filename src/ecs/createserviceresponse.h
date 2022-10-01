// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICERESPONSE_H
#define QTAWS_CREATESERVICERESPONSE_H

#include "ecsresponse.h"
#include "createservicerequest.h"

namespace QtAws {
namespace Ecs {

class CreateServiceResponsePrivate;

class QTAWSECS_EXPORT CreateServiceResponse : public EcsResponse {
    Q_OBJECT

public:
    CreateServiceResponse(const CreateServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceResponse)
    Q_DISABLE_COPY(CreateServiceResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
