// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKEYDESCRIPTIONRESPONSE_H
#define QTAWS_UPDATEKEYDESCRIPTIONRESPONSE_H

#include "kmsresponse.h"
#include "updatekeydescriptionrequest.h"

namespace QtAws {
namespace Kms {

class UpdateKeyDescriptionResponsePrivate;

class QTAWSKMS_EXPORT UpdateKeyDescriptionResponse : public KmsResponse {
    Q_OBJECT

public:
    UpdateKeyDescriptionResponse(const UpdateKeyDescriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateKeyDescriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateKeyDescriptionResponse)
    Q_DISABLE_COPY(UpdateKeyDescriptionResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
