// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLOTRESPONSE_H
#define QTAWS_UPDATESLOTRESPONSE_H

#include "lexmodelsv2response.h"
#include "updateslotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateSlotResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateSlotResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    UpdateSlotResponse(const UpdateSlotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSlotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSlotResponse)
    Q_DISABLE_COPY(UpdateSlotResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
