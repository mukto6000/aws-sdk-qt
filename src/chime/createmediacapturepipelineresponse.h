// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIACAPTUREPIPELINERESPONSE_H
#define QTAWS_CREATEMEDIACAPTUREPIPELINERESPONSE_H

#include "chimeresponse.h"
#include "createmediacapturepipelinerequest.h"

namespace QtAws {
namespace Chime {

class CreateMediaCapturePipelineResponsePrivate;

class QTAWSCHIME_EXPORT CreateMediaCapturePipelineResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateMediaCapturePipelineResponse(const CreateMediaCapturePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMediaCapturePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMediaCapturePipelineResponse)
    Q_DISABLE_COPY(CreateMediaCapturePipelineResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
