// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHAPGRESPONSE_H
#define QTAWS_CREATEHAPGRESPONSE_H

#include "cloudhsmresponse.h"
#include "createhapgrequest.h"

namespace QtAws {
namespace CloudHsm {

class CreateHapgResponsePrivate;

class QTAWSCLOUDHSM_EXPORT CreateHapgResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    CreateHapgResponse(const CreateHapgRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHapgRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHapgResponse)
    Q_DISABLE_COPY(CreateHapgResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
