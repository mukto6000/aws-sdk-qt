// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATIONALDATABASEPARAMETERSRESPONSE_H
#define QTAWS_UPDATERELATIONALDATABASEPARAMETERSRESPONSE_H

#include "lightsailresponse.h"
#include "updaterelationaldatabaseparametersrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateRelationalDatabaseParametersResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateRelationalDatabaseParametersResponse : public LightsailResponse {
    Q_OBJECT

public:
    UpdateRelationalDatabaseParametersResponse(const UpdateRelationalDatabaseParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRelationalDatabaseParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRelationalDatabaseParametersResponse)
    Q_DISABLE_COPY(UpdateRelationalDatabaseParametersResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
