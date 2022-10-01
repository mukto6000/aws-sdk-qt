// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGENTITYRECOGNIZERRESPONSE_H
#define QTAWS_STOPTRAININGENTITYRECOGNIZERRESPONSE_H

#include "comprehendresponse.h"
#include "stoptrainingentityrecognizerrequest.h"

namespace QtAws {
namespace Comprehend {

class StopTrainingEntityRecognizerResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StopTrainingEntityRecognizerResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StopTrainingEntityRecognizerResponse(const StopTrainingEntityRecognizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopTrainingEntityRecognizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTrainingEntityRecognizerResponse)
    Q_DISABLE_COPY(StopTrainingEntityRecognizerResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
