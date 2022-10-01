// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTENTRESPONSE_H
#define QTAWS_CREATEINTENTRESPONSE_H

#include "lexmodelsv2response.h"
#include "createintentrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateIntentResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT CreateIntentResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateIntentResponse(const CreateIntentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIntentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntentResponse)
    Q_DISABLE_COPY(CreateIntentResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
