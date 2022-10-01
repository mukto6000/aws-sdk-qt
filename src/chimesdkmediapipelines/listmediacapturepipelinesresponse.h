// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIACAPTUREPIPELINESRESPONSE_H
#define QTAWS_LISTMEDIACAPTUREPIPELINESRESPONSE_H

#include "chimesdkmediapipelinesresponse.h"
#include "listmediacapturepipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ListMediaCapturePipelinesResponsePrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT ListMediaCapturePipelinesResponse : public ChimeSdkMediaPipelinesResponse {
    Q_OBJECT

public:
    ListMediaCapturePipelinesResponse(const ListMediaCapturePipelinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMediaCapturePipelinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMediaCapturePipelinesResponse)
    Q_DISABLE_COPY(ListMediaCapturePipelinesResponse)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
