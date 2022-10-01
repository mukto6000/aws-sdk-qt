// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESRESPONSE_H
#define QTAWS_LISTSERVICESRESPONSE_H

#include "ecsresponse.h"
#include "listservicesrequest.h"

namespace QtAws {
namespace Ecs {

class ListServicesResponsePrivate;

class QTAWSECS_EXPORT ListServicesResponse : public EcsResponse {
    Q_OBJECT

public:
    ListServicesResponse(const ListServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServicesResponse)
    Q_DISABLE_COPY(ListServicesResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
