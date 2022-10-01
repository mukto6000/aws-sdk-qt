// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZETEXTRESPONSE_H
#define QTAWS_RECOGNIZETEXTRESPONSE_H

#include "lexruntimev2response.h"
#include "recognizetextrequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeTextResponsePrivate;

class QTAWSLEXRUNTIMEV2_EXPORT RecognizeTextResponse : public LexRuntimeV2Response {
    Q_OBJECT

public:
    RecognizeTextResponse(const RecognizeTextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RecognizeTextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecognizeTextResponse)
    Q_DISABLE_COPY(RecognizeTextResponse)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
