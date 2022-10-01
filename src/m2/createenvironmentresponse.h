// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTRESPONSE_H
#define QTAWS_CREATEENVIRONMENTRESPONSE_H

#include "m2response.h"
#include "createenvironmentrequest.h"

namespace QtAws {
namespace M2 {

class CreateEnvironmentResponsePrivate;

class QTAWSM2_EXPORT CreateEnvironmentResponse : public M2Response {
    Q_OBJECT

public:
    CreateEnvironmentResponse(const CreateEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentResponse)
    Q_DISABLE_COPY(CreateEnvironmentResponse)

};

} // namespace M2
} // namespace QtAws

#endif
